#pragma once
#include <string>

class User
{
protected:
    std::string username;
    std::string password;

public:
    User(std::string user, std::string pass);
    virtual bool login(std::string user, std::string pass);
    virtual ~User();
    std::string getUsername();
};