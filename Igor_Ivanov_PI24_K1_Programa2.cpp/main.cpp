#include <iostream>
// int max naudojimui climits!
#include <climits>
using namespace std;

struct Mazgas {
    int reiksme;
    Mazgas* sekantis;
};

// pridedam el. į sąrašą
void pridetiElementa(Mazgas*& pradzia, int reiksme) {
    Mazgas* naujas = new Mazgas;
    naujas->reiksme = reiksme;
    naujas->sekantis = pradzia;
    pradzia = naujas;
}

void uzd2() {
    int n;
    cout << "Iveskite saraso dydi: ";
    cin >> n;

    Mazgas* sarasas = nullptr;
    cout << "Iveskite " << n << " saraso elementus: ";
    for (int i = 0; i < n; i++) {
        int elementas;
        cin >> elementas;
        pridetiElementa(sarasas, elementas);
    }

    // min. el. indx. paieska
    Mazgas* temp = sarasas;
    int maziausias = INT_MAX;
    int vietosNumeris = -1;
    int index = 0;

    while (temp != nullptr) {
        if (temp->reiksme < maziausias) {
            maziausias = temp->reiksme;
            vietosNumeris = index;
        }
        temp = temp->sekantis;
        index++;
    }
    cout << "Maziausio elemento vietos numeris: " << vietosNumeris << endl;

    // * tarp neigiamu sk.
    temp = sarasas;
    int pirmasNeigiamasIndex = -1, antrasNeigiamasIndex = -1;
    index = 0;

    while (temp != nullptr) {
        if (temp->reiksme < 0) {
            if (pirmasNeigiamasIndex == -1) {
                pirmasNeigiamasIndex = index;
            } else if (antrasNeigiamasIndex == -1) {
                antrasNeigiamasIndex = index;
                break;
            }
        }
        temp = temp->sekantis;
        index++;
    }

    if (pirmasNeigiamasIndex != -1 && antrasNeigiamasIndex != -1) {
        long long sandauga = 1;
        temp = sarasas;
        index = 0;
        bool pradzia = false;

        while (temp != nullptr) {
            if (index == pirmasNeigiamasIndex) {
                pradzia = true;
            }

            if (pradzia && index != pirmasNeigiamasIndex && index != antrasNeigiamasIndex) {
                sandauga *= temp->reiksme;
            }

            if (index == antrasNeigiamasIndex) {
                break;
            }

            temp = temp->sekantis;
            index++;
        }
        cout << "Sandauga tarp pirmo ir antro neigiamo elemento: " << sandauga << endl;
    } else {
        cout << "Nepavyko rasti dvieju neigiamu elementu." << endl;
    }

    // sąrašo perform.
    Mazgas* naujasSarasas = nullptr;
    temp = sarasas;
    while (temp != nullptr) {
        if (abs(temp->reiksme) <= 3) {
            pridetiElementa(naujasSarasas, temp->reiksme);
        }
        temp = temp->sekantis;
    }
    temp = sarasas;
    while (temp != nullptr) {
        if (abs(temp->reiksme) > 3) {
            pridetiElementa(naujasSarasas, temp->reiksme);
        }
        temp = temp->sekantis;
    }

    // perform. sąrašo išvedimas
    cout << "Performuotas sarasas: ";
    temp = naujasSarasas;
    while (temp != nullptr) {
        cout << temp->reiksme << " ";
        temp = temp->sekantis;
    }
    cout << endl;
}

int main() {
    int pasirinkimas;
    do {
        cout << "Pasirinkite norima veiksma:" << endl;
        cout << "1. Atlikti saraso uzduoti" << endl;
        cout << "2. Iseiti" << endl;
        cout << "Iveskite Jusu pasirinkima: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                uzd2();
                break;
            case 2:
                cout << "Iseinama is programos." << endl;
                break;
            default:
                cout << "Neteisingas pasirinkimas. Bandykite dar karta." << endl;
        }
    } while (pasirinkimas != 2);

    return 0;
}
