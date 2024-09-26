#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    int pasirinkimas;
    float EUR_Bendras, Eur_Pirkti, Eur_Parduoti, GBP_Bendras,  GBP_Pirkti, GBP_Parduoti, USD_Bendras, USD_Pirkti, USD_Parduoti, INR_Bendras, INR_Pirkti, INR_Parduoti;
    EUR_Bendras = 1;
    Eur_Pirkti = 1;
    Eur_Parduoti = 1;
    GBP_Bendras = 0.8593;
    GBP_Pirkti = 0.8450;
    GBP_Parduoti = 0.9060;
    USD_Bendras = 1.0713;
    USD_Pirkti = 1.0547;
    USD_Parduoti = 1.1309;
    INR_Bendras = 88.8260;
    INR_Pirkti = 85.2614;
    INR_Parduoti = 92.8334;

    cout<<"Pasirinkite, ka norite pasidaryti su Jusu valiuta: "<<endl;
    cout<<"1. Palyginti valiutos kursa su kita valiuta"<<endl;
    cout<<"2. Nupirkti valiuta"<<endl;
    cout<<"3. Parduoti valiuta"<<endl;
    cout<<"Iveskite skaiciu, kuris atitinka Jusu pasirinkimui: "<<endl;
    cin>>pasirinkimas;

    if (pasirinkimas == 1) {
        cout<<"Jus pasirinkote - valiutos kursu palyginima";

    }
    else if (pasirinkimas == 2) {
        cout<<"Jus pasirinkote - valiutos pirkima";
    }
    else if (pasirinkimas == 3) {
        cout<<"Jus pasirinkote - valiutos pardavima";
    }
    else {
        cout<<"Tokio pasirinkimo nera";
    }
}
    void Valiutospalygininimas() {
        int vpasirinkimas;
        cout<<"Pasirinkite Jusu valiuta, su kuria norite palyginti EUR: "<<endl;




    return 0;
}
