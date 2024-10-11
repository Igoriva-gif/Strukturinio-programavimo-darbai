#include <iostream>
using namespace std;


bool RmasyvoPatikra(){
    char raide;
    char raides[12] = {'o', 'O', 'i', 'I', 'y', 'Y', 'u', 'U', 'a', 'A', 'e', 'E'};

    cout<<"Sita funkcija patikrins ar Jusu ivesta raide yra balse"<<endl;
    cout<<"Pradesime! Iveskite Jusu raide: "<<endl;
    cin>>raide;

    for (int i=0; i<12; i++) {
        if ( raides[i] == raide ) {
            return true;
        }
    }
    return false;
}

void Daliklis() {
    int skaicius1, skaicius2;
    int mbd;

    cout<<"Sita funkcija randa maziausia bendra dalikli tarp dvieju Jusu ivestu skaitmenu"<<endl;
    cout<<"Iveskite pirma skaitmeni:"<<endl;
    cin>>skaicius1;
    cout<<"Iveskite antra skaitmeni:"<<endl;
    cin>>skaicius2;

    while (skaicius1 != 0 || skaicius2 != 0) {
        if (skaicius1 > skaicius2) {
            mbd = skaicius1 % skaicius2;
            cout<<mbd<<endl;
        }
        else {
            mbd = skaicius2 % skaicius1;
            cout<<mbd<<endl;
        }
    }
}
int main(){
    int pasirinkimas;
    char ciklas ='T';


    while (ciklas == 'T'|| ciklas == 't') {
        cout<<"Pasirinkite, kuria funkcija norite pasinaudoti: "<<endl;
        cout<<"1. Patikrinti ar ivesta raide yra balse"<<endl;
        cout<<"2. Rasti maziausia bendra dalikli tarp dvieju ivestu skaitmenu"<<endl;
        cout<<"3. Pazaisti mini atspejimo zaidima"<<endl;
        cout<<"4. Skaiciu nuo 1 iki Jusu pasirinkto n skaiciaus spausdinimas su padalijimo patikrinimu"<<endl;
        cin>>pasirinkimas;

        if (pasirinkimas == 1) {
            bool result = RmasyvoPatikra();
            cout<<boolalpha<<result<<endl;
        }
        else if (pasirinkimas == 2) {
            Daliklis();
        }

        else {
            cout<<"Toks pasirinkimas neegzistuoja"<<endl;
        }
        cout<<"\nAr noretumete testi? Pasirinkite (T/N)"<<endl;
        cin>>ciklas;
    }
    return 0;

}

//* dbd
DBD (48; 18)
    r0    r1
48 = 2 * 18 ( liekana 12)
        r0          r1
18 = 1 * 12 ( liekana 6)
12 = 2 * 6 - dbd
