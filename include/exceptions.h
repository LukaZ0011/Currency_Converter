#pragma once
#include <stdexcept>
#include <string>

class UserException : public std::runtime_error
{
public:
    UserException(const std::string &message);
};

class WalletException : public std::runtime_error
{
public:
    WalletException(const std::string &message);
};

class BankException : public std::runtime_error
{
public:
    BankException(const std::string &message);
};
