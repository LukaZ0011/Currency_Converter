#include <iostream>
#include "vipUser.h"
#include "defUser.h"
#include "wallet.h"

int main()
{
    Wallet w1;
    w1.deposit(100);
    std::cout << "Balance: " << w1.getBalance() << std::endl;
    w1.withdraw(50);
    std::cout << "Balance: " << w1.getBalance() << std::endl;

    return 0;
}
