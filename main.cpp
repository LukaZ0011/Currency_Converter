#include <iostream>
#include <map>
#include "vipUser.h"
#include "defUser.h"

void displayUserMenu()
{
    std::cout << "1. Deposit money\n";
    std::cout << "2. Withdraw\n";
    std::cout << "3. Convert currency\n";
    std::cout << "4. Check balance\n";
    std::cout << "5. Logout\n";
    std::cout << "Enter your choice: ";
}

//dodati kontejnerski klassu npr banka koja pohranjuje sve 

int main()
{
    // Create objects of DefUser and VipUser
    User *defUser = new DefUser("Luka", "123");
    User *vipUser = new VipUser("Marko", "123");

    // Set conversion rates
    defUser->getWallet().setConversionRate("EUR", 1.0);
    defUser->getWallet().setConversionRate("USD", 1.1); // Assume 1 USD = 1.1 EUR
    vipUser->getWallet().setConversionRate("EUR", 1.0);
    vipUser->getWallet().setConversionRate("USD", 1.1);

    std::string inputUser, inputPass;

    std::cout << "Enter username: ";
    std::cin >> inputUser;

    std::cout << "Enter password: ";
    std::cin >> inputPass;

    User *user = nullptr;
    if (defUser->login(inputUser, inputPass))
    {
        user = defUser;
    }
    else if (vipUser->login(inputUser, inputPass))
    {
        user = vipUser;
    }
    else
    {
        std::cout << "Login failed. Incorrect username or password.\n";
        delete defUser;
        delete vipUser;
        return 1;
    }

    std::cout << "Login successful! Welcome, " << user->getUsername() << ".\n";
    int userChoice;
    while (true)
    {
        displayUserMenu();
        std::cin >> userChoice;

        if (userChoice == 5)
        {
            break;
        }

        std::string currency;
        std::string toCurrency;
        double amount;

        switch (userChoice)
        {
        case 1:
            std::cout << "Enter currency: ";
            std::cin >> currency;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            user->getWallet().deposit(currency, amount);
            std::cout << "Deposit successful!\n";
            break;
        case 2:
            std::cout << "Enter currency: ";
            std::cin >> currency;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            if (user->getWallet().withdraw(currency, amount))
            {
                std::cout << "Transaction successful! New balance: " << user->getWallet().getBalance(currency) << " " << currency << "\n";
            }
            else
            {
                std::cout << "Transaction failed. Insufficient funds.\n";
            }
            break;
        case 3:
            std::cout << "Enter from currency: ";
            std::cin >> currency;
            std::cout << "Enter to currency: ";
            std::cin >> toCurrency;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            if (user->getWallet().convertCurrency(currency, toCurrency, amount))
            {
                std::cout << "Conversion successful! New balance: " << user->getWallet().getBalance(toCurrency) << " " << toCurrency << "\n";
            }
            else
            {
                std::cout << "Conversion failed. Insufficient funds or invalid currency.\n";
            }
            break;
        case 4:
            std::cout << "Balances:\n";
            for (const auto& rate : user->getWallet().getConversionRates()) {
                std::cout << rate.first << ": " << user->getWallet().getBalance(rate.first) << "\n";
            }
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }

    // Clean up memory
    delete defUser;
    delete vipUser;

    return 0;
}