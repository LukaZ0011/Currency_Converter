#pragma once
#include "user.h"
#include <iostream>

class VipUser : public User
{
public:
    VipUser(const std::string &username, const std::string &password);

    void displayUserType() const override;
};