#include "bank.h"

void Bank::addUser(User* user) {
    users.push_back(user);
}

double Bank::bankPool() const {
}