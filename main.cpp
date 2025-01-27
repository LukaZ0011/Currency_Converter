#include "bank.h"
#include "user.h"

Bank bank; // Global Bank object

int main() {
    // Create some User objects
    User user1("Alice", "password123", 100.0);
    User user2("Bob", "securepass", 150.0);
    User user3("Charlie", "mypassword", 200.0);

    // List usernames stored in the Bank
    bank.listUsernames();

    return 0;
}