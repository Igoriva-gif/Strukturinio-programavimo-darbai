#include <iostream>
#include <string>
using namespace std;


const char ABC_LT[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Y', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'Z', ' '};
const int ABC_dydis = sizeof(ABC_LT) / sizeof(ABC_LT[0]);



int ABC_indexpaieska(char c) {
    for (int i = 0; i < ABC_dydis; i++) {
        if (ABC_LT[i] == c) {
            return i;
        }
    }
    return -1;
}

string ABC_sifruotas(const string &text, const string &key) {
    string result = "";
    for (size_t i = 0; i < text.size(); i++) {
        int mi = ABC_indexpaieska(text[i]);
        int ki = ABC_indexpaieska(key[i % key.size()]);
        if (mi != -1 && ki != -1) {
            int ci = (mi + ki) % ABC_dydis;
            result += ABC_LT[ci];
        }
        else {
            result += text[i];
        }
    }
    return result;
}

string ABC_desifruotas (const string &text, const string &key) {
    string result = "";
    for (size_t i = 0; i < text.size(); i++) {
        int ci = ABC_indexpaieska(text[i]);
        int ki = ABC_indexpaieska(key[i % key.size()]);
        if (ci != -1 && ki != -1) {
            int mi = (ci - ki + ABC_dydis) % ABC_dydis;
            result += ABC_LT[mi];
        }
        else {
            result += text[i];
        }
    }
    return result;
}

string ASCII_sifruotas(const string &text, const string &key) {
    string result = "";
    for (size_t i = 0; i < text.size(); i++) {
        char ci = (text[i] + key[i % key.size()]) % 256;
        result += ci;
    }
    return result;
}

string ASCII_desifruotas(const string &text, const string &key) {
    string result = "";
    for (size_t i = 0; i < text.size(); i++) {
        char mi = (text[i] + key[i % key.size()] + 256 ) % 256;
        result += mi;
    }
    return result;
}


    int main() {
    int pasirinkimas, veiksmas;
    string text, key, result;

    cout << "Pasirinkite šifravimo būdą" << endl;
    cout << "1. Naudojant abėcėlę" << endl;
    cout << "2. Naudojant ASCII koduotę" << endl;
    cout << "Jusu pasirinkimas: " << endl;
    cin >> pasirinkimas;
    cin.ignore();

    cout << "Pasirinkite, ka norite padaryti su Jusu tekstu" << endl;
    cout << "1. Uzsifruoti teksta" << endl;
    cout << "2. Desifruoti teksta" << endl;
    cin >> veiksmas;
    cin.ignore();

    cout << "Iveskite Jusu teksta" << endl;
    getline(cin, text);
    cout << "Iveskite rakta" << endl;
    getline(cin, key);

    if (pasirinkimas == 1) {
        if (veiksmas == 1) {
            result = ABC_sifruotas(text, key);
            cout << "Uzsifruotas tekstas: " << result << endl;
        } else if (veiksmas == 2) {
            result = ABC_desifruotas(text, key);
            cout << "Desifruotas tekstas: " << result << endl;
        } else {
            cout << "Bandykite dar karta" << endl;
        }
    } else if (pasirinkimas == 2) {
        if (veiksmas == 1) {
            result = ASCII_sifruotas(text, key);
            cout << "Uzsifruotas tekstas: " << result << endl;
        } else if (veiksmas == 2) {
            result = ASCII_desifruotas(text, key);
            cout << "Desifruotas tekstas: " << result << endl;
        } else {
            cout << "Bandykite dar karta" << endl;
        }
    } else { cout << "Neteisingas pasirinkimas" << endl;
    }
    return 0;
}