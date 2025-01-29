#pragma once
#include "user.h"
#include <iostream>

class DefUser : public User
{
public:
    DefUser(const std::string &username, const std::string &password);

    void displayUserType() const override;
};
