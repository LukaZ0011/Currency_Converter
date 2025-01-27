#include "user.h"
#include "bank.h"

extern Bank bank; // Assuming you have a global Bank object

User::User(const std::string &user, const std::string &pass, double fee)
    : username(user), password(pass), wallet(fee) {
    bank.addUser(this);
}

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
