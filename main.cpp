#include "bank.h"
#include "user.h"
#include <iostream>

Bank bank; // Global Bank object

int main() {
    // Create some User objects
    User user1("Alice", "password123", 100.0);
    User user2("Bob", "securepass", 150.0);
    User user3("Charlie", "mypassword", 200.0);

    // List usernames stored in the Bank
    bank.listUsernames();

    // Test getName from Wallet class
    std::cout << "Wallet Name for Alice: " << user1.getWallet().getName() << std::endl;
    std::cout << "Wallet Name for Bob: " << user2.getWallet().getName() << std::endl;
    std::cout << "Wallet Name for Charlie: " << user3.getWallet().getName() << std::endl;

    return 0;
}