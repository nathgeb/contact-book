#include <iostream>
#include <vector>
#include "contact.h"

void displayMenu() {
    std::cout << "\n=== Contact Book ===\n";
    std::cout << "1. Add contact\n";
    std::cout << "2. View all contacts\n";
    std::cout << "3. Search contact\n";
    std::cout << "4. Delete contact\n";
    std::cout << "5. Exit\n";
    std::cout << "Choice: ";
}

int main() {
    std::vector<Contact> contacts;
    int choice;

    while (true) {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Add contact - coming soon\n";
                break;
            case 2:
                std::cout << "View contacts - coming soon\n";
                break;
            case 3:
                std::cout << "Search - coming soon\n";
                break;
            case 4:
                std::cout << "Delete - coming soon\n";
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid choice\n";
        }
    }
}