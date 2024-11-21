#include <iostream>
#include <string>
using namespace std;

char ABC[52]{};

string input(string message);

void abc() {
    for (int i = 0; i < 26; i++) {
        ABC[i] = 'A' + i;
    }
    for (int i = 0; i < 26; i++) {
        ABC[26+i] = 'a' + i;
    }
}

void ABCsifravimas(string str, string strKey) {
    int m, k;

    for (int i = 0; i < str.size();i++) {
        for ( int j = 0; j < 52; j++) {
            if (str[i] == ABC[j]) {
                m = j;
                break;
            }
        }
        for (int j = 0; j < 52; j++) {
            if (strKey[i % strKey.size()] == ABC[j]) {
                k = j;
                break;
            }
        }
        str[i] = ABC[(m+k) % 52];
    }
    cout << "Jusu uzsifruotas tekstas: " << str << endl;

    for (int i = 0; i < str.size();i++) {
        for ( int j = 0; j < 52; j++) {
            if (str[i] == ABC[j]) {
                m = j;
                break;
            }
        }
        for (int j = 0; j < 52; j++) {
            if (strKey[i % strKey.size()] == ABC[j]) {
                k = j;
                break;
            }
        }
        str[i] = ABC[(m - k + 52) % 52];
    }
    cout << "Jusu desifruotas tekstas: " << str << endl;
}

void ASCIIsifravimas(string str, string strKey) {
    int m, k , c;
    for ( int i = 0; i < str.length(); i++) {
        m = int(str[i]);
        k = int(strKey[i % strKey.size()]);
        c = 32 + ((m + k - 2 * 32) % 91);
        str[i] = char(c);
    }
    cout << "Uzsifruotas tekstas: " << str << endl;
    for ( int i = 0; i < str.length(); i++) {
        m = int(str[i]);
        k = int(strKey[i % strKey.size()]);
        c = 32 + ((m - k + 91) % 91);
        str[i] = char(c);
    }
    cout << "Desifruotas tekstas: " << str << endl;
}
int main() {
    abc();
    int action;
    string tekstas, raktas;
    char ciklas = 'y';

    while (ciklas == 'Y' || 'y') {
        cout << "Pasirinktie sifravimo buda: " << endl;
        cout << "1. ABC sifravimas." << endl;
        cout << "2. ASCII koduotes sifravimas." << endl;
        cout << "3. Uzdaryti programa." << endl;
        cin >> action;

        if (action == 0)
            break;
        switch (action) {
            case 1:
                cout << "Iveskite teksta: " << endl;
            cin >> tekstas;
            cout << "Iveskite rakta: " << endl;
            cin >> raktas;
            ABCsifravimas(tekstas, raktas);
            break;

            case 2:
                cout << "Iveskite teksta: " << endl;
            cin >> tekstas;
            cout << "Iveskite rakta: " << endl;
            cin >> raktas;
            ASCIIsifravimas(tekstas, raktas);
            break;
        }
    }
return 0;
}