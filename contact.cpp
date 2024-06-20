#include "contact.h"
#include <iostream>

PhoneBook::PhoneBook() : numContacts(0) {}

void PhoneBook::dodajKontakt(const std::string &firstName, const std::string &lastName,
                             const std::string &phoneNumber) {
    if (numContacts < MAX_CONTACTS) {
        contacts[numContacts++] = {firstName, lastName, phoneNumber};
        std::cout << "Kontakt zostal dodany!" << std::endl;
    } else {
        std::cout << "Nie mozna dodac więcej kontaktow. Osiągnięto limit." << std::endl;
    }
}
    void PhoneBook::wyswietlKontakt() const {
        if (numContacts == 0) {
            std::cout << "Brak zapisanych kontaktow." << std::endl;
        } else {
            for (int i = 0; i < numContacts; ++i) {
                std::cout << "Kontakt " << i + 1 << ":" << std::endl;
                std::cout << "Imie: " << contacts[i].firstName << std::endl;
                std::cout << "Nazwisko: " << contacts[i].lastName << std::endl;
                std::cout << "Numer telefonu: " << contacts[i].phoneNumber << std::endl;
                std::cout << "-----------------------" << std::endl;
            }
        }
    }