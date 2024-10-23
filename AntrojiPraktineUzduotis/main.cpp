#include <iostream>
#include <cstdlib>
#include <ctime>
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
int randskkurimas() {
    srand(static_cast<unsigned int>(time(NULL)));
    return rand() % 100 + 1;
}
void Zaidimas() {
    int randskaicius = randskkurimas();
    int pasirinkimas;

    cout<<"Jus pasirinkote pazaisti mini atspejimo zaidima\n"<<endl;

    while (true) {
        cout<<"Iveskite savo skaiciaus spejima nuo 1 iki 100\n"<<endl;
        cin>>pasirinkimas;

        if (pasirinkimas > randskaicius + 10 ) {
            cout<<"Jusu skaicius yra daug didesnis uz sugeneruota atsitiktini skaiciu. Bandykite ivesti mazesni skaiciu"<<endl;
        }
        else if (pasirinkimas < randskaicius - 10) {
            cout<<"Jusu skaicius yra daug mazesnis uz sugeneruota atsitiktini skaiciu. Bandykite ivesti didesni skaiciu"<<endl;
        }
        else if (pasirinkimas > randskaicius + 3) {
            cout<<"Jusu skaicius yra truputi didesnis uz sugeneruota atsitiktini skaiciu. Bandykite ivesti mazesni skaiciu"<<endl;
        }
        else if (pasirinkimas < randskaicius - 3) {
            cout<<"Jusu skaicius yra truputi mazesnis uz sugeneruota atsitiktini skaicius. Bandykite ivesti didesni skaiciu"<<endl;
        }
        else if (pasirinkimas >= randskaicius - 2 && pasirinkimas != randskaicius) {
            cout<<"Jus beveik atspejote sugeneruota atsitiktini skaiciu! Bandykite ivesti siek tiek mazesni skaiciu!"<<endl;
        }
        else if (pasirinkimas <= randskaicius - 2 && pasirinkimas != randskaicius) {
            cout<<"Jus beveik atspejote sugeneruota atsitiktini skaiciu! Bandykite ivesti siek tiek didesni skaiciu"<<endl;
        }
        else {
            cout<<"Sveikiname! Jus atspejote sugeneruota atsitiktini skaiciu: "<<randskaicius<<endl;
            break;
        }
    }
}
void void_fizzbuzz() {
    int n;
    cout<<"Iveskite teigiama sveikaji skaiciu: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++ ) {
        if (i % 3 == 0 || i % 5 == 0 ) {
            cout<<i<<" FizzBuzz"<<endl;
        }
        else if ( i % 3 == 0 ) {
            cout<<i<<" Fizz"<<endl;
        }
        else if ( i % 5 == 0 ) {
            cout<<i<<" Buzz"<<endl;
        }
        else if ( i % 5 != 0 || i % 3 != 0 ) {
            cout<<i<<" skaicius nesidalina is 3 ir 5" << endl;
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
        else if (pasirinkimas == 3) {
            Zaidimas();
        }
        else if (pasirinkimas == 4) {
            void_fizzbuzz();
        }
        else {
            cout<<"Toks pasirinkimas neegzistuoja"<<endl;
        }
        cout<<"\nAr noretumete testi? Pasirinkite (T/N)"<<endl;
        cin>>ciklas;
    }
    return 0;

}