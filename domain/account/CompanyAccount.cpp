#include "CompanyAccount.h"

CompanyAccount::CompanyAccount(int id, const std::string& password, const std::string& name, const std::string& businessNumber)
    : Account(id, password, name), businessNumber(businessNumber) {}

std::string CompanyAccount::getBusinessNumber() const {
  return businessNumber;
}
