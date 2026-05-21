#include "contact.h"
#include <iostream>

void addContact(std::vector<Contact>& contacts) {
    Contact c;
    std::cin.ignore();
    std::cout << "Name: ";
    std::getline(std::cin, c.name);
    std::cout << "Phone: ";
    std::getline(std::cin, c.phone);
    std::cout << "Email: ";
    std::getline(std::cin, c.email);
    contacts.push_back(c);
    std::cout << "Contact added!\n";
}
