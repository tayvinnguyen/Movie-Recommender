#ifndef LOGINDATABASE_H
#define LOGINDATABASE_H

#include <string>

class loginDatabase {
private:
    std::string username;
    std::string password;

public:
    void loginExistingUser();
    void createUserAccount();
};

#endif
