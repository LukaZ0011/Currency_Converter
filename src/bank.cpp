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

void Bank::listUsernames() const
{
    for (const auto &user : users)
    {
        std::cout << "Username: " << user->getUsername() << std::endl;
    }
}
