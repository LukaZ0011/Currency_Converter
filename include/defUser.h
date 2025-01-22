#include "user.h"

class DefUser : public User {
public:
    DefUser(std::string user, std::string pass);
    bool login(std::string user, std::string pass) override;
};
