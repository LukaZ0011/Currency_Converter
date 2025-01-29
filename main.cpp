#include "bank.h"
#include "user.h"
#include "defUser.h"
#include "vipUser.h"
#include <iostream>

Bank bank; // Global Bank object

int main()
{
    //polymorphism test-------------------------
    VipUser vip("vip_user", "password123");
    DefUser def("def_user", "password456");

    User* user1 = &vip;
    User* user2 = &def;

    user1->displayUserType();
    user2->displayUserType(); 
    //------------------------------------------

    bank.listWallets();

    return 0;
}