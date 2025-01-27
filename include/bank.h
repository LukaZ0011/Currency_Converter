#pragma once
#include <string>
#include "user.h"
#include <vector>
#include <iostream>

class Bank
{
private:
    std::vector<User *> users;

public:
    void addUser(User *user);
    double bankPool() const;
    void listUsernames() const;
};