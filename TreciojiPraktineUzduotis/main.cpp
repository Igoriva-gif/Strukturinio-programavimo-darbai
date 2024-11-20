#include <iostream>
#include <locale>
#include <string>
using namespace std;


const char ABC_LT[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Y', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'Z'};
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




int main() {

    int pasirinkimas, veiksmas;
    string text, key, result;

    cout << "Pasirinkite šifravimo būdą" << endl;
    cout << "1. Naudojant abėcėlę" << endl;
    cout << "2. Naudojant ASCII koduotę" << endl;
    cout << "Jusu pasirinkimas: " << endl;
    cin >> pasirinkimas;
    cin.ignore();

    cout << "Įveskite tekstą: " << endl;
    cin.ignore();
    getline(cin, text);

    cout << "Įveskite slaptą raktą: " << endl;
    getline(cin, key);

    if (pasirinkimas == 1) {
        cout << "Pasirinkite, ką norite padaryti su Jūsų tekstu: " << endl;
        cout << "1. Šifrutoi" << endl;
        cout << "2. Dešifruoti" << endl;
        cin >> veiksmas;
        cin.ignore();
        if (veiksmas == 1) {
            result = ABC_sifruotas(text, key);
            cout << "Šifruotas tekstas: " << result << endl;
        }    else if (veiksmas == 2) {
            result = ABC_desifruotas(text, key);
            cout << "Dešifruotas teikstas: " << result << endl;
        }
        return 0;
    }
}
