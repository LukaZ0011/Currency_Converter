#include "vipUser.h"
#include <iostream>

vipUser::vipUser(std::string user, std::string pass) : User(user, pass) {}

bool vipUser::login(std::string user, std::string pass) {
    std::cout << "VIP User login check.\n";
    return (user == username && pass == password);
}