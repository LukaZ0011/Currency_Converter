#include "exceptions.h"

UserException::UserException(const std::string &message) 
    : std::runtime_error(message) {}

WalletException::WalletException(const std::string &message) 
    : std::runtime_error(message) {}

BankException::BankException(const std::string &message) 
    : std::runtime_error(message) {}
