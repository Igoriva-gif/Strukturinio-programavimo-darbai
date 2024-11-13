#include <iostream>
#include <string>
using namespace std;

int main()
{
    int pasirinkimas;
    string tekstas, raktas, kodtekstas, dekodtekstas;

    cout << "Pasirinkite uzkodavimo buda" << endl;
    cout << "1. Uzkodavimas naudojant abecele" << endl;
    cout << "2. Uzkodavimas naudojant ASCII" << endl;
    cout << "Jusu pasirinkimas: " << endl;
    cin >> pasirinkimas;

    cout << "Iveskite teksta, kuri noretumete uzkoduoti" << endl;
    cin.ignore();
    getline(cin, tekstas);

    cout << "Iveskite slapta rakta: " << endl;
    getline(cin, raktas);

    return 0;
}
