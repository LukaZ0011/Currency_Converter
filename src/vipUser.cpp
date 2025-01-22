#include "vipUser.h"
#include <iostream>

VipUser::VipUser(const std::string &username, const std::string &password)
    : User(username, password, 0.0) {}

bool VipUser::login(std::string user, std::string pass)
{
    std::cout << "VIP User login check.\n";
    return (user == username && pass == password);
}