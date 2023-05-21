#include "GeneralAccount.h"

GeneralAccount::GeneralAccount(int id, const std::string& password, const std::string& name, const std::string& residentId)
    : Account(id, password, name), residentId(residentId) {}

std::string GeneralAccount::getResidentId() const {
  return residentId;
}
