#include "bank.h"

void Bank::addUser(User *user)
{
    users.push_back(user);
}

double Bank::bankPool() const
{
    // Placeholder implementation
    return 0.0;
}

void Bank::listWallets() const
{
    std::cout << "Wallets:" << std::endl;
    for (const auto &user : users)
    {
        std::cout << " - " << user->getWallet().getName() << std::endl;
    }
}
