#include <iostream>
#include <iomanip>
using namespace std;


    const float GBP_Bendras = 0.8593;
    const float GBP_Pirkti = 0.8450;
    const float GBP_Parduoti = 0.9060;
    const float USD_Bendras = 1.0713;
    const float USD_Pirkti = 1.0547;
    const float USD_Parduoti = 1.1309;
    const float INR_Bendras = 88.8260;
    const float INR_Pirkti = 85.2614;
    const float INR_Parduoti = 92.8334;

    void Vpalyginimas() {
        int pasirinkimas;

        cout<<"Pasirinkite valiuta, su kuria noretumete palyginti EUR: "<<endl;
        cout<<"1. Didziosios Britanijos svaras (GBP)"<<endl;
        cout<<"2. Jungtiniu Amerikos Valstiju doleris (USD)"<<endl;
        cout<<"3. Indijos rupija (INR)"<<endl;
        cout<<"Iveskite skaiciu, kuris atitinka Jusu pasirinkimui: "<<endl;
        cin>>pasirinkimas;

        if (pasirinkimas == 1) {
            cout<<"1 EUR yra lygus "<<fixed<<setprecision(4)<<GBP_Bendras<<" GBP";
        }
        else if (pasirinkimas == 2) {
            cout<<"1 EUR yra lygus "<<fixed<<setprecision(4)<<USD_Bendras<<" USD";
        }
        else if (pasirinkimas == 3) {
            cout<<"1 EUR yra lygus "<<fixed<<setprecision(4)<<INR_Bendras<<" INR";
        }
        else {
            cout<<"Toks pasirinkimas neegzistuoja"<<endl;
        }
    }

    void Vpirkimas() {
        int vpasirinkimas;
        float ValiutosKiekis, EurKiekis;

        cout<<"Pasirinkite valiuta, kuria noretumete nupirkti uz Jusu EUR kieki:"<<endl;
        cout<<"1. Didziosios Britanijos svaras (GBP)"<<endl;
        cout<<"2. Jungtiniu Amerikos Valstiju doleris (USD)"<<endl;
        cout<<"3. Indijos rupija (INR)"<<endl;
        cout<<"Iveskite skaiciu, kuris atitinka Jusu pasirinkimui: "<<endl;
        cin>>vpasirinkimas;
        cout<<"Iveskite kieki EUR, kuri noretumete pakeisti:"<<endl;
        cin>>EurKiekis;

        if (vpasirinkimas == 1) {
            ValiutosKiekis = EurKiekis * GBP_Pirkti;
            cout<<"Apkeisdami si EUR kieki su GBP, Jus gausite: "<< fixed << setprecision(2) << ValiutosKiekis << " GBP";
        }
        else if (vpasirinkimas == 2) {
            ValiutosKiekis = EurKiekis * USD_Pirkti;
            cout<<"Apkeisdami si EUR kieki su USD, Jus gausite: "<< fixed << setprecision(2) << ValiutosKiekis << " USD";
        }
        else if (vpasirinkimas == 3) {
            ValiutosKiekis = EurKiekis * INR_Pirkti;
            cout<<"Apkeisdami si EUR kieki su INR, Jus gausite: "<< fixed << setprecision(2) << ValiutosKiekis << " INR";
        }
        else {
            cout<<"Toks pasirinkimas neegzistuoja"<<endl;
        }
    }

    void Vpardavimas() {
        int vpasirinkimas;
        float ValiutosKiekis, EurKiekis;

        cout<<"Pasirinkite valiuta, kuria noretumete parduoti uz Jusu EUR kieki:"<<endl;
        cout<<"1. Didziosios Britanijos svaras (GBP)"<<endl;
        cout<<"2. Jungtiniu Amerikos Valstiju doleris (USD)"<<endl;
        cout<<"3. Indijos rupija (INR)"<<endl;
        cout<<"Iveskite skaiciu, kuris atitinka Jusu pasirinkimui: "<<endl;
        cin>>vpasirinkimas;
        cout<<"Iveskite kieki Jusu valiutos, kuri noretumete parduoti:"<<endl;
        cin>>ValiutosKiekis;

        if (vpasirinkimas == 1) {
            EurKiekis = ValiutosKiekis / GBP_Parduoti;
            cout<<"Apkeisdami si GBP kieki su EUR, Jus gausite: "<< fixed << setprecision(2) << EurKiekis << " EUR";
        }
        else if (vpasirinkimas == 2) {
            EurKiekis = ValiutosKiekis / USD_Parduoti;
            cout<<"Apkeisdami si USD kieki su EUR, Jus gausite: "<< fixed << setprecision(2) << EurKiekis << " EUR";
        }
        else if (vpasirinkimas == 3) {
            EurKiekis = ValiutosKiekis / INR_Parduoti;
            cout<<"Apkeisdami si INR kieki su EUR, Jus gausite: "<< fixed << setprecision(2) << EurKiekis << " EUR";
        }
        else {
            cout<<"Toks pasirinkimas neegzistuoja"<<endl;
        }
    }

    int main() {
        int pasirinkimas;
        char ciklas = 'y';

        while (ciklas == 'y' || ciklas == 'Y' ) {
            cout<<"Pasirinkite, ka norite padaryti su Jusu valiuta:"<<endl;
            cout<<"1. Palyginti valiutu kursus"<<endl;
            cout<<"2. Nupirkti valiuta"<<endl;
            cout<<"3. Parduoti valiuta"<<endl;
            cin>>pasirinkimas;

            if (pasirinkimas == 1) {
                Vpalyginimas();
            }
            else if (pasirinkimas == 2) {
                Vpirkimas();
            }
            else if (pasirinkimas == 3) {
                Vpardavimas();
            }
            else {
                cout<<"Toks pasirinkimas neegzistuoja"<<endl;
            }

                cout<<"\nAr noretumete testi? Pasirinkite (y/n):"<<endl;
                cin>>ciklas;
        }
        return 0;
    }