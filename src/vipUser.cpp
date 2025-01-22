#include "vipUser.h"
#include <iostream>

VipUser::VipUser(const std::string &username, const std::string &password)
    : User(username, password, 0.0) {}