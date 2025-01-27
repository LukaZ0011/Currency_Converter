#pragma once
#include <string>
#include "user.h"
#include <vector>

class Bank
{
private:
    std::vector<User*> users;

public:
    void addUser(User* user);
    double bankPool() const;
};