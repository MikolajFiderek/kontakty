#include "contact.h"
#include <iostream>

PhoneBook::PhoneBook() : numContacts(0) {}

void PhoneBook::dodajKontakt(const std::string &firstName, const std::string &lastName,
                             const std::string &phoneNumber) {
    if (numContacts < MAX_CONTACTS) {
        contacts[numContacts++] = { firstName, lastName, phoneNumber };
        std::cout << "Kontakt zostal dodany!" << std::endl;
    } else {
        std::cout << "Nie mozna dodac więcej kontaktow. Osiągnięto limit." << std::endl;
    }
}