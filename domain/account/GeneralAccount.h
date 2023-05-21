#ifndef GENERALACCOUNT_H
#define GENERALACCOUNT_H

#include "Account.h"

class GeneralAccount : public Account {
public:
  GeneralAccount(int id, const std::string& password, const std::string& name, const std::string& residentId);
  std::string getResidentId() const;

private:
  std::string residentId;
};

#endif // GENERALACCOUNT_H
