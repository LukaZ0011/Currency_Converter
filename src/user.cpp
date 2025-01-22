#include "user.h"

User::User(std::string user, std::string pass) : username(user), password(pass) {}

bool User::login(std::string user, std::string pass)
{
    return (user == username && pass == password);
}

User::~User() {}

std::string User::getUsername()
{
    return username;
}
