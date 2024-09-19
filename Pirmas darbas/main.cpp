#include <iostream>
#include <ranges>
using namespace std;

int main() {
    string vardas, pavarde, grupe, spv;
    int amzius, kursas;

        vardas = "Igor";
        pavarde = "Ivanov";
        grupe = "PI";
        spv = "Programu sistemos";

        amzius = 22;
        kursas = 1;

    cout<<"\n"<<endl;
    cout<<"--------------1UZD--------------"<<endl;
    cout<<"\n"<<endl;

    cout<<"Studento vardas: "<< vardas << endl;
    cout<<"Studento pavarde: "<< pavarde << endl;
    cout<<"Studento amzius: "<< amzius << endl;
    cout<<"Studento grupe: "<< grupe << endl;
    cout<<"Studento kursas: " << kursas << endl;
    cout<<"Studento studiju programos pavadinimas: " << spv << endl;

    cout<<"\n"<<endl;
    cout<<"--------------2UZD--------------"<<endl;
    cout<<"\n"<<endl;

    string name, sav, arena;
    int metai, vt;

        name = "Vilniaus Rytas";
        sav = "Vilniaus miesto savivaldybes administracija";
        arena = "Jeep arena, Vilnius";
        metai = 1997;
        vt = 2500;

    cout<<"Krepsinio klubo pavadinimas: "<< name <<endl;
    cout<<"Ikurimo metai: "<< metai <<endl;
    cout<<"Klubo savininkas: "<< sav <<endl;
    cout<<"Arena: "<< arena <<endl;
    cout<<"Vietu skaicius: "<< vt <<endl;

    cout<<"\n"<<endl;
    cout<<"--------------3UZD--------------"<<endl;
    cout<<"\n"<<endl;

    string marke, modelis, spalva;
    int metai1;
    float litr;

        marke = "BMW";
        modelis = "E36 Coupe";
        spalva = "juodos";
        metai1 = 1993;
        litr = 1.8;

    cout<<"Automobilis "<<marke<<modelis<<" yra pagamintas "<<metai1<<" metais."<<" Jo motoras "<<litr<<" litrazo. "<<"Automobilis yra "<<spalva<<" spalvos."<<endl;

    cout<<"\n"<<endl;
    cout<<"--------------4UZD--------------"<<endl;
    cout<<"\n"<<endl;

    int a, b;
    float c;

        a = 13;
        b = 5;
        c = 17.5;

    cout << a + b - c << endl;
    cout << 15/2 + c << endl;
    cout << a/static_cast<double>(b) + 2*c << endl;
    cout << 14%3 + 6.3 + b/a << endl;
    cout << static_cast<int>(c)%5 + a - b << endl;
    cout << 13.5/2 + 4.0 * 3.5 + 18 << endl;

    cout<<"\n"<<endl;
    cout<<"--------------5UZD--------------"<<endl;
    cout<<"\n"<<endl;

    int q, w, e, r, t;

    cout << "Iveskite Jusu skaicius:" << endl;
        cin >> q;
        cin >> w;
        cin >> e;
        cin >> r;
        cin >> t;
        cout << "Ivestu skaiciu vidurkis yra: " << ( q + w + e + r + t )/5 << endl;

    cout<<"\n"<<endl;
    cout<<"--------------6UZD--------------"<<endl;
    cout<<"\n"<<endl;

    int skaicius;
        cout<<"Iveskite dvizenkli skaiciu: "<<endl;
        cin>>skaicius;

    int pskaicius = skaicius / 10;
    int askaicius = skaicius % 10;

    int suma = pskaicius + askaicius;

        cout<<"Jusu skaiciaus skaitmenu suma: "<<suma<<endl;

    return 0;
}

