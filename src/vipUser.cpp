#include "vipUser.h"

VipUser::VipUser(const std::string &username, const std::string &password)
    : User(username, password, 0.0) {}

void VipUser::displayUserType() const
{
    std::cout << "User Type: VIP" << std::endl;
}