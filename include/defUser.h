#pragma once
#include "user.h"

class DefUser : public User
{
public:
    DefUser(const std::string &username, const std::string &password);
};
