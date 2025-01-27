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
    template <typename T> T bankPool() const;
    void addUser(User *user);
    void listUsernames() const;
};