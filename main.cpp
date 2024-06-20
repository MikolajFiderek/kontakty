#include <iostream>
#include "contact.h"

using namespace std;

int main() {
    PhoneBook phoneBook;
    int choice;
    string firstName, lastName, phoneNumber;

    do {
        cout << "Menu:" << endl;
        cout << "1. Dodaj kontakt" << endl;
        cout << "2. Wyswietl kontakty" << endl;
        cout << "3. Wyjscie" << endl;
        cout << "Wybierz opcje: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Podaj imie: ";
                cin >> firstName;
                cout << "Podaj nazwisko: ";
                cin >> lastName;
                cout << "Podaj numer telefonu: ";
                cin >> phoneNumber;
                phoneBook.dodajKontakt(firstName, lastName, phoneNumber);
                break;
            case 2:
                phoneBook.wyswietlKontakt();
                break;
            case 3:
                cout << "Wyjscie z programu." << endl;
                break;
            default:
                cout << "Nieprawidlowa opcja. Sprobuj ponownie." << endl;
        }
    } while (choice != 3);

    return 0;
}