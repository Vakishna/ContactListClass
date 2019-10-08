#include "Contact.h"

Contact::Contact(std::string FirstName) {
    this->FirstName = FirstName;
}

Contact::Contact(std::string FirstName, std::string LastName) {
    this->FirstName = FirstName;
    this->LastName = LastName;
}

Contact::Contact(std::string FirstName, std::string LastName, std::string MiddleName) {
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->MiddleName = MiddleName;
}

Contact::Contact(std::string FirstName, int MobileNumber, std::string Email) {
    this->FirstName = FirstName;
    this->MobileNumber = MobileNumber;
    this->Email = Email;
}


Contact::Contact(std::string FirstName, std::string LastName, int HomePhone) {
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->HomeNumber = HomePhone;
}



std::string Contact::GetFirstName() { return FirstName; }
std::string Contact::GetLastName() { return LastName;}
std::string Contact::GetMiddleName() { return MiddleName; }
std::string Contact::GetFullName() { return GetFirstName() + " " + GetMiddleName() + " " + GetLastName(); }
int Contact::GetMobileNumber() { return MobileNumber; }
int Contact::GetHomeNumber() { return HomeNumber; }
std::string Contact::GetEmail() { return Email; }



void Contact::SetFirstName(std::string FirstName) {
    this->FirstName = FirstName;
}

void Contact::SetLastName(std::string LastName) {
    this->LastName = LastName;
}

void Contact::SetMiddleName(std::string MiddleName) {
    this->MiddleName = MiddleName;
}


void Contact::SetMobileNumber(int MobileNumber) {
    this->MobileNumber = MobileNumber;
}

void Contact::SetHomeNumber(int HomeNumber) {
    this->HomeNumber = HomeNumber;
}

void Contact::SetEmail(std::string Email) {
    this->Email = Email;
}





