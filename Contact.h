#include <iostream>

class Contact {

    public:
       // Constructors
       Contact() = default;
       Contact(std::string FirstName);
       Contact(std::string FirstName, std::string LastName);
       Contact(std::string FirstName, std::string LastName, std::string MiddleName);
       Contact(std::string FirstName, int MobileNumber, std::string Email);
       Contact(std::string FirstName, std::string LastName, int HomePhone);

       // Getters
       std::string GetFirstName();
       std::string GetLastName();
       std::string GetMiddleName();
       std::string GetFullName();
       int GetMobileNumber();
       int GetHomeNumber();
       std::string GetEmail();


       // Setters
       void SetFirstName(std::string FirstName);
       void SetLastName(std::string LastName);
       void SetMiddleName(std::string MiddleName);
       void SetMobileNumber(int MobileNumber);
       void SetHomeNumber(int HomeNumber);
       void SetEmail(std::string Email);

    private:
       std::string FirstName;
       std::string LastName;
       std::string MiddleName;
       int MobileNumber;
       int HomeNumber;
       std::string Email;

};
