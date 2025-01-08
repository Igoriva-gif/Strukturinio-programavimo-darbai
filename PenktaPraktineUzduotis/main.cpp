#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Produktas {
    int id;
    string pavadinimas;
    string kategorija;
    double kaina;
};


void PirmaUzduotis() {
    int eilutes, stulpeliai;

    cout << "Iveskite eiluciu kieki: " << endl;
    cin >> eilutes;
    cout << "Iveskite stulpeliu kieki: " << endl;
    cin >> stulpeliai;

    // din atm paskirstymas dvim. mas.
    int** lentele = new int*[eilutes];
    for (int i = 0; i < eilutes; ++i) {
        lentele[i] = new int[stulpeliai];
    }


    cout << "Iveskite lenteles reiksmes:" << endl;
    for (int i = 0; i < eilutes; ++i) {
        for (int j = 0; j < stulpeliai; ++j) {
            cin >> lentele[i][j];
        }
    }


    cout << "Lentele:" << endl;
    for (int i = 0; i < eilutes; ++i) {
        for (int j = 0; j < stulpeliai; ++j) {
    cout << lentele[i][j] << " ";
        }
    cout << "\n";
    }

    // eil suma
    cout << "Eiluciu kiekis:\n";
    for (int i = 0; i < eilutes; ++i) {
        int eilSum = 0;
        for (int j = 0; j < stulpeliai; ++j) {
            eilSum += lentele[i][j];
        }
    cout << "Eilute " << i + 1 << ": " << eilSum << "\n";
    }

    // stulp suma
    cout << "Stulpeliu kiekis:\n";
    for (int j = 0; j < stulpeliai; ++j) {
        int colSum = 0;
        for (int i = 0; i < eilutes; ++i) {
            colSum += lentele[i][j];
        }
    cout << "Stulpelis " << j + 1 << ": " << colSum << "\n";
    }

    // max
    int maxValue = lentele[0][0];
    for (int i = 0; i < eilutes; ++i) {
        for (int j = 0; j < stulpeliai; ++j) {
            if (lentele[i][j] > maxValue) {
                maxValue = lentele[i][j];
            }
        }
    }
    cout << "Didziausia reiksme lenteleje: " << maxValue << "\n";

    // valome atminti
    for (int i = 0; i < eilutes; ++i) {
        delete[] lentele[i];
    }
    delete[] lentele;
}

void pridetiProdukta(Produktas*& produktai, int& size) {
    Produktas* naujiProduktai = new Produktas[size + 1];
    for (int i = 0; i < size; ++i) {
        naujiProduktai[i] = produktai[i];
    }
    delete[] produktai;

    Produktas naujasProduktas;
    naujasProduktas.id = size + 1;
    cout << "Iveskite produkto pavadinima: ";
    cin >> naujasProduktas.pavadinimas;
    cout << "Iveskite produkto kategorija: ";
    cin >> naujasProduktas.kategorija;
    cout << "Iveskite produkto kaina: ";
    cin >> naujasProduktas.kaina;

    naujiProduktai[size] = naujasProduktas;
    produktai = naujiProduktai;
    ++size;

    cout << "Produktas sekmingai pridetas!" << endl;
}

void rodytiProduktus(const Produktas* produktai, int size) {
    if (size == 0) {
    cout << "Prekiu sarase nera." << endl;
        return;
    }
    cout << setw(5) << "Identifikatorius" << setw(20) << "Pavadnimas" << setw(20) << "Kategorija" << setw(10) << "Kaina" << endl;
    for (int i = 0; i < size; ++i) {
    cout << setw(7) << produktai[i].id << setw(27) << produktai[i].pavadinimas << setw(20) << produktai[i].kategorija << setw(11) << produktai[i].kaina << endl;
    }
}

void istrintiProdukta(Produktas*& produktai, int& size, int id) {
    int istrinimoindx = -1;
    for (int i = 0; i < size; ++i) {
        if (produktai[i].id == id) {
            istrinimoindx = i;
            break;
        }
    }
    if (istrinimoindx == -1) {
        cout << "Produktas su identifikatoriu " << id << " nebuvo rastas.\n";
        return;
    }

    Produktas* naujiProduktai = new Produktas[size - 1];
    for (int i = 0, j = 0; i < size; ++i) {
        if (i != istrinimoindx) {
            naujiProduktai[j++] = produktai[i];
        }
    }
    delete[] produktai;
    produktai = naujiProduktai;
    --size;

    cout << "Produktas pasalintas." << endl;
}

void redaguotiProdukta(Produktas* produktai, int size, int id) {
    for (int i = 0; i < size; ++i) {
        if (produktai[i].id == id) {
            cout << "Produkto redagavimas su identifikatoriumi " << id << ":" << endl;
            cout << "Naujas pavadinimas: ";
            cin >> produktai[i].pavadinimas;
            cout << "Nauja kategorija: ";
            cin >> produktai[i].kategorija;
            cout << "Nauja kaina: ";
            cin >> produktai[i].kaina;
            cout << "Produktas sekmingai atnaujintas!" << endl;
            return;
        }
    }
    cout << "Produktas su identifikatoriumi " << id << " nebuvo rastas." << endl;
}

void antraUzduotis() {
    Produktas* produktai = nullptr;
    int size = 0;

    while (true) {
        cout << "1. Prideti produkta" << endl;
        cout << "2. Perziureti visus produktus" << endl;
        cout << "3. Pasalinti produkta" << endl;
        cout << "4. Redaguoti produkta" << endl;
        cout << "5. Iseiti" << endl;
        cout << "Jusu pasirinkimas: " << endl;
        int pasirinkimas;
        cin >> pasirinkimas;

        if (pasirinkimas == 1) {
            pridetiProdukta(produktai, size);
        } else if (pasirinkimas == 2) {
            rodytiProduktus(produktai, size);
        } else if (pasirinkimas == 3) {
            cout << "Iveskite produkto identifikatoriu, kuri norite pasalinti: ";
            int id;
            cin >> id;
            istrintiProdukta(produktai, size, id);
        } else if (pasirinkimas == 4) {
            cout << "Iveskite produkto identifikatoriu, kuri norite redaguoti: ";
            int id;
            cin >> id;
            redaguotiProdukta(produktai, size, id);
        } else if (pasirinkimas == 5) {
            break;
        } else {
        cout << "Neteisingas pasirinkimas. Bandykite dar kartą." << endl;
        }
    }

    delete[] produktai;
}

int main() {
    while (true) {
        cout << "Meniu:" << endl;
        cout << "1. Darbas su lentele ( 1 Uzduotis )" << endl;
        cout << "2. Darbas su produktais ( 2 Uzduotis )" << endl;
        cout << "3. Iseiti" << endl;
        cout << "Jusu pasirinkimas: " << endl;
        int pasirinkimas;
        cin >> pasirinkimas;

        if (pasirinkimas == 1) {
            PirmaUzduotis();
        } else if (pasirinkimas == 2) {
            antraUzduotis();
        } else if (pasirinkimas == 3) {
        cout << "Iseiti." << endl;
            break;
        } else {
        cout << "Neteisingas pasirinkimas. Bandykite dar kartą." << endl;
        }
    }

    return 0;
}