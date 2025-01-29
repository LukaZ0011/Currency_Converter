#include "defUser.h"

DefUser::DefUser(const std::string &username, const std::string &password)
    : User(username, password, 0.02) {}

void DefUser::displayUserType() const
{
    std::cout << "User Type: Default" << std::endl;
}
