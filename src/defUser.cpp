#include "defUser.h"
#include <iostream>

DefUser::DefUser(const std::string &username, const std::string &password)
    : User(username, password, 0.02) {}

bool DefUser::login(std::string user, std::string pass) override
{
    std::cout << "Default User login check.\n";
    return (user == getUsername() && pass == getPassword());
}
