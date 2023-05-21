#ifndef COMPANYACCOUNT_H
#define COMPANYACCOUNT_H

#include "Account.h"

class CompanyAccount : public Account {
public:
  CompanyAccount(int id, const std::string& password, const std::string& name, const std::string& businessNumber);
  std::string getBusinessNumber() const;

private:
  std::string businessNumber;
};

#endif // COMPANYACCOUNT_H
