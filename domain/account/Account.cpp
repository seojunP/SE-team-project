#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include "AccountType.h"

class Account {
private:
    int id;
    std::string password;
    std::string name;
    AccountType accountType;
public:
    Account(int id, const std::string& password, const std::string& name);
    int getId() const;
    std::string getPassword() const;
    std::string getName() const;
    AccountType getAccountType() const;

};

#endif // ACCOUNT_H
