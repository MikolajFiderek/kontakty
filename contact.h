#ifndef CONTACT_H
#define CONTACT_H
#define MAX_CONTACTS 100

#include <string>

// Definicja struktury Contact, która przechowuje informacje o jednym kontakcie telefonicznym
struct Contact {
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
};

class PhoneBook {
private:
    Contact contacts[MAX_CONTACTS]; // tablica contacts przechowująca kontakty
    int numContacts; // przechowuje aktualna liczbę kontaktów.

public:
    PhoneBook();
    void dodajKontakt(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber);
    void wyswietlKontakt() const;
};

#endif // CONTACT_H