//
//
//  Author: Vakishna Thayalan
//  Email: vthayalan@paragonsoftware.com.au
//  Copyright: None
//
//

#include "Contact.h"

void SetFirstFriend() {
    Contact* myFriend = new Contact();

    myFriend->SetFirstName("Vakishna");
    myFriend->SetLastName("Thayalan");
    myFriend->SetEmail("vthayalan@paragonsoftware.com.au");


    std::cout << "CONTACT LIST: " << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << myFriend->GetFirstName() << ": " << myFriend->GetEmail() << std::endl;
}


int main() {
std::cout << "C++ Class Example: Contact List " << std::endl;
SetFirstFriend();
std::cin.get();
return 0;
}

