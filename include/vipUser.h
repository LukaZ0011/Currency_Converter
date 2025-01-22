#include "user.h"

class vipUser : public User {
public:
    vipUser(std::string user, std::string pass);
    bool login(std::string user, std::string pass) override;
};