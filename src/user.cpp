#include "user.h"

User::User(const std::string &user, const std::string &pass, double fee)
    : username(user), password(pass), wallet(fee) {}

bool User::login(const std::string &inputUser, const std::string &inputPass) const
{
    return username == inputUser && password == inputPass;
}

User::~User() {}

std::string User::getUsername() const
{
    return username;
}

Wallet &User::getWallet()
{
    return wallet;
}
