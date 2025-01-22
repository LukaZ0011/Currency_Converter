#include <iostream>
#include "vipUser.h"
#include "defUser.h"

int main()
{
    // Create objects of VIPUser and DefUser
    User *user1 = new VipUser("Luka", "123");
    User *user2 = new DefUser("Luka", "000");

    std::string inputUser, inputPass;

    std::cout << "Enter username: ";
    std::cin >> inputUser;

    std::cout << "Enter password: ";
    std::cin >> inputPass;

    // Check login for VIPUser
    if (user1->login(inputUser, inputPass))
    {
        std::cout << "VIP User login successful! Welcome, " << user1->getUsername() << ".\n";
        user1->getWallet().deposit(1000); // Deposit some money
        if (user1->getWallet().makeTransaction(100)) {
            std::cout << "Transaction successful! New balance: " << user1->getWallet().getBalance() << "\n";
        } else {
            std::cout << "Transaction failed. Insufficient funds.\n";
        }
    }
    else
    {
        std::cout << "VIP User login failed. Incorrect username or password.\n";
    }

    // Check login for DefUser
    if (user2->login(inputUser, inputPass))
    {
        std::cout << "Default User login successful! Welcome, " << user2->getUsername() << ".\n";
        user2->getWallet().deposit(1000); // Deposit some money
        if (user2->getWallet().makeTransaction(100)) {
            std::cout << "Transaction successful! New balance: " << user2->getWallet().getBalance() << "\n";
        } else {
            std::cout << "Transaction failed. Insufficient funds.\n";
        }
    }
    else
    {
        std::cout << "Default User login failed. Incorrect username or password.\n";
    }

    // Clean up memory
    delete user1;
    delete user2;

    return 0;
}