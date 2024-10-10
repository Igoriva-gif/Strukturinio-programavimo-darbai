#include <iostream>
using namespace std;

    char raides[] = {'o', 'O', 'i', 'I', 'y', 'Y', 'u', 'U', 'a', 'A', 'e', 'E'};
bool RmasyvoPatikra(char raide, char raides[], int elementai) {
    for (int i=0, i<elementai, i++) {
        if ( raides[i] = raide ) {
            return true;
        }
            return false;
    }


    cout<<"Sita funkcija patikrins ar Jusu ivesta raide yra balse"<<endl;
    cout<<"Pradesime! Iveskite Jusu raide: "<<endl;
    cin>>raide;

    if (raide == raides[]) {
        cout<<bool=1<<endl;
    }
    else {
        cout<<bool=0<<endl;
    }
}

int main(){
    int pasirinkimas;
    char ciklas ='y';

    while (ciklas == 'T'|| ciklas == 't') {
        cout<<"Pasirinkite, kuria funkcija norite pasinaudoti: "<<endl;
        cout<<"1. Patikrinti ar ivesta raide yra balse"<<endl;
        cout<<"2. Rasti maziausia bendra dalikli tarp dvieju ivestu skaitmenu"<<endl;
        cout<<"3. Pazaisti mini atspejimo zaidima"<<endl;
        cout<<"4. Skaiciu nuo 1 iki Jusu pasirinkto n skaiciaus spausdinimas su padalijimo patikrinimu"<<endl;
        cin>>pasirinkimas;

        if (pasirinkimas == 1) {
            RmasyvoPatikra();
        }
        else {
            cout<<"Toks pasirinkimas neegzistuoja"<<endl;
        }
        cout<<"\nAr noretumete testi? Pasirinkite (T/N)"<<endl;
        cin>>ciklas;
    }
    return 0;

}
