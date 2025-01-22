#include "vipUser.h"
#include <iostream>

VipUser::VipUser(std::string user, std::string pass) : User(user, pass) {}

bool VipUser::login(std::string user, std::string pass)
{
    std::cout << "VIP User login check.\n";
    return (user == username && pass == password);
}