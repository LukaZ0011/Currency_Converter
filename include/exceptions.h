#pragma once
#include <stdexcept>
#include <string>

class UserException : public std::runtime_error {
public:
    explicit UserException(const std::string &message);
};

class WalletException : public std::runtime_error {
public:
    explicit WalletException(const std::string &message);
};

class BankException : public std::runtime_error {
public:
    explicit BankException(const std::string &message);
};
