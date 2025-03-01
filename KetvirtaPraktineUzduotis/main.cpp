#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <fstream>

const int meniuDydis = 8;

struct MenuItemType {
    string menuItem;
    double menuPrice;
};

void getData(MenuItemType menuList[]);
void showMenu(const MenuItemType menuList[]);
void printCheck(const MenuItemType menuList[], int uzsakymas[][2], int uzsakymoDydis, bool nuolaidaYra);

int main() {
    MenuItemType menuList[meniuDydis];
    int uzsakymas[100][2];
    int uzsakymoDydis = 0;
    int pasirinkimas, kiekis;
    string nuolaidoskodas;
    bool nuolaidaYra = false;


    getData(menuList);

    cout << "Sveiki atvyke i restorana \"Kregzdute\""<<endl;

    while (true) {
        showMenu(menuList);

        cout << "Pasirinkite patiekalo numeri : " << endl;
        cout << "Noredami uzbaigti uzsakyma, iveskite - 0" << endl;
        cin >> pasirinkimas;
        if (pasirinkimas == 0) break;

        if (pasirinkimas < 1 || pasirinkimas > meniuDydis) {
            cout << "Bandykite dar karta." << endl;
            continue;
        }

        cout << "Iveskite porciju kieki: " << endl;
        cin >> kiekis;

        if (kiekis <= 0) {
            cout << "Porciju kiekis turi buti sveikasis skaicius. Bandykite dar karta." << endl;
            continue;
        }

        uzsakymas[uzsakymoDydis][0] = pasirinkimas - 1;
        uzsakymas[uzsakymoDydis][1] = kiekis;
        uzsakymoDydis++;
    }

    cout << "Iveskite nuolaidos koda ( jeigu turite ): " << endl;
    cin >> nuolaidoskodas;

    if (nuolaidoskodas == "Kaledos") {
        nuolaidaYra = true;
    }

    printCheck(menuList, uzsakymas, uzsakymoDydis, nuolaidaYra);

    return 0;
}


void getData(MenuItemType menuList[]) {
    menuList[0] = {"Kiausiniene", 1.45};
    menuList[1] = {"Kiaulienos sonine su keptu kiausiniu", 2.45};
    menuList[2] = {"Keksiukas su vysnia", 0.99};
    menuList[3] = {"Prancuziskas skrebutis", 1.99};
    menuList[4] = {"Vaisiu salotos", 2.49};
    menuList[5] = {"Pusryciu dribsniai", 0.69};
    menuList[6] = {"Kava", 0.50};
    menuList[7] = {"Arbata", 0.75};
}

void showMenu(const MenuItemType menuList[]) {
    cout << "Musu restorano meniu: " << endl;
    for (int i = 0; i < meniuDydis; ++i) {
        cout << i + 1 << ". " << left << setw(36) << menuList[i].menuItem <<  right << setw(6) << fixed << setprecision(2) << menuList[i].menuPrice << " EUR" << endl;
    }
}

void printCheck(const MenuItemType menuList[], int uzsakymas[][2], int uzsakymoDydis, bool nuolaidaYra) {
    double total = 0.0;

    ofstream saskaita("saskaita.txt");
    if (!saskaita) {
        cerr << "Nepavyko sukurti saskaita" << endl;
        return;
    }

    cout << "Jusu saskaita: " << endl;
    saskaita << "Jusu saskaita: " << endl;

    for (int i = 0; i < uzsakymoDydis; ++i) {
        int index = uzsakymas[i][0];
        int kiekis = uzsakymas[i][1];
        double kaina = menuList[index].menuPrice * kiekis;

         cout << right << setw(2) << kiekis << " " << left << setw(40) << menuList[index].menuItem << right << setw(8) << fixed << setprecision(2) << kaina << "EUR" << endl;
         saskaita << kiekis << " " << left << setw(35) << menuList[index].menuItem << right << setw(9) << fixed << setprecision(2) << kaina << "EUR" << endl;;

        total += kaina;
    }

    if (nuolaidaYra) {
        double nuolaida = total * 0.10;
        total -= nuolaida;

        cout << left << setw(35) << "10% nuolaida su kodu \"Kaledos\" " << right << setw(16) << fixed << setprecision(2) << nuolaida << "EUR" << endl;
        saskaita << left << setw(37) << "10% nuolaida su kodu \"Kaledos\" " << right << setw(9 ) << fixed << setprecision(2) << nuolaida << "EUR" << endl;
    }

    double mokesciai = total * 0.21;
    double galutinekaina = total + mokesciai;

    cout << left << setw(35) << "Mokesciai: " << right << setw(16) << fixed << setprecision(2) << mokesciai << "EUR" << endl;
    cout <<  left << setw(37) << "Is viso moketi: " << right << setw(15) << fixed << setprecision(2) << galutinekaina << "EUR" << endl;

    saskaita << left << setw(35) << "Mokesciai: "<< right << setw(11) << fixed << setprecision(2) << mokesciai << "EUR" << endl;
    saskaita <<  left << setw(37) << "Is viso moketi: " << right << setw(10) << fixed << setprecision(2) << galutinekaina << "EUR" << endl;

    saskaita.close();

    cout << "Jusu saskaita issaugota. 'saskaita.txt'." << endl;
}