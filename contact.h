#pragma once
#include <string>
#include <vector>

struct Contact {
    std::string name;
    std::string phone;
    std::string email;
};

void addContact(std::vector<Contact>& contacts);
