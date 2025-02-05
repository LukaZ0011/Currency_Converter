#include "bank.h"
#include "user.h"
#include "defUser.h"
#include "vipUser.h"
#include "exceptions.h"
#include <iostream>

Bank bank; // Global Bank object

int main()
{
    try
    {
        // polymorphism test-------------------------
        VipUser vip("vip_user", "password123");
        DefUser def("def_user", "password456");

        User *user1 = &vip;
        User *user2 = &def;

        user1->displayUserType();
        user2->displayUserType();
        //------------------------------------------

        bank.listWallets();

        // Example of exceptions
        user1->getWallet().deposit("USD", -100);
        user1->getWallet().withdraw("USD", -50);
        user1->getWallet().convertCurrency("USD", "EUR", 25);
    }
    catch (const UserException &e)
    {
        std::cerr << "User error: " << e.what() << std::endl;
    }
    catch (const WalletException &e)
    {
        std::cerr << "Wallet error: " << e.what() << std::endl;
    }
    catch (const BankException &e)
    {
        std::cerr << "Bank error: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}