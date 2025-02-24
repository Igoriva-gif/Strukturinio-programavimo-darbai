#include <iostream>
using namespace std;

void uzd1() {
    int n;
    cout << "Iveskite masyvo dydi: ";
    cin >> n;

    int* masyvas = new int[n];
    cout << "Iveskite " << n << " masyvo elementus: ";
    for (int i = 0; i < n; i++) {
        cin >> masyvas[i];
    }

    int a, b;
    cout << "Iveskite intervala (nuo - iki): ";
    cin >> a >> b;

    // 1. skaiciuojam masyvo el.[intervale]
    int kiekis = 0;
    for (int i = 0; i < n; i++) {
        if (masyvas[i] >= a && masyvas[i] <= b) {
            kiekis++;
        }
    }
    cout << "Elementu intervale (" << a << ", " << b << ") kiekis: " << kiekis << endl;

    // 2. el. suma po max
    int max_reiksme = masyvas[0];
    for (int i = 1; i < n; i++) {
        if (masyvas[i] > max_reiksme) {
            max_reiksme = masyvas[i];
        }
    }

    int suma = 0;
    bool poMax = false;
    for (int i = 0; i < n; i++) {
        if (poMax) {
            suma += masyvas[i];
        }
        if (masyvas[i] == max_reiksme) {
            poMax = true;
        }
    }
    cout << "Suma elementu po maksimalios reiksmes: " << suma << endl;

    // masyvo sort.
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (masyvas[i] > masyvas[j]) {
                int temp = masyvas[i];
                masyvas[i] = masyvas[j];
                masyvas[j] = temp;
            }
        }
    }
    cout << "Surusiuotas masyvas: ";
    for (int i = 0; i < n; i++) {
        cout << masyvas[i] << " ";
    }
    cout << endl;

    delete[] masyvas;
}

int main() {
    int pasirinkimas;
    do {
        cout << "Pasirinkite norima veiksma:" << endl;
        cout << "1. Atlikti masyvo uzduoti" << endl;
        cout << "2. Iseiti" << endl;
        cout << "Iveskite Jusu pasirinkima: " << endl;
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                uzd1();
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
