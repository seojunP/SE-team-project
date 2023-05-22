#ifndef ADDACCOUNTCONTROL_H
#define ADDACCOUNTCONTROL_H

#include <AccountCollection.h>

class AddACcountControl
{
private:
    AccountCollection* accountCollection;

public:
    AddACcountControl(AccountCollection* accountCollection) {
        this->accountCollection = accountCollection;
    }

    bool registerAccount(Account* account) {
        return accountCollection->createAccount(account);
    }
};

#endif
