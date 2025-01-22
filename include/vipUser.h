#include "user.h"

class VipUser : public User
{
public:
    VipUser(std::string user, std::string pass);
    bool login(std::string user, std::string pass) override;
};