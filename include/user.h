#pragma once
#include <string>
#include "wallet.h"

class User
{
protected:
    std::string username;
    std::string password;
    Wallet wallet;

public:
    User(const std::string &user, const std::string &pass, double fee = 0.0);
    virtual ~User();

    virtual bool login(const std::string &inputUser, const std::string &inputPass) const;

    std::string getUsername() const;
    
    Wallet &getWallet();
};