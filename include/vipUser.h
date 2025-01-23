#pragma once
#include "user.h"


class VipUser : public User
{
public:
    VipUser(const std::string &username, const std::string &password);
};