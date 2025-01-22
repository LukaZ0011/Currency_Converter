#include "defUser.h"
#include <iostream>

DefUser::DefUser(std::string user, std::string pass) : User(user, pass) {}

bool DefUser::login(std::string user, std::string pass)
{
    std::cout << "Default User login check.\n";
    return (user == username && pass == password);
}
