#pragma once
class Wallet
{
private:
    double balance;

public:
    Wallet();
    double getBalance() const;
    void deposit(double amount);
    virtual bool withdraw(double amount);
};
