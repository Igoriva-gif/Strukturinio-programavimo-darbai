#include <iostream>
#include <cstdlib>
using namespace std;
/* --------- 1 uzd
void stud();

int main()
{
    stud();
    return 0;
}

void stud() {
    for (int a = 0; a < 2; a++)
        cout<< "Igor Ivanov. Pasirinkau programu sistemu studiju programa, nes noriu suprasti, kaip veikia programos, kaip jos yra kuriamos ir kokie instrumentai yra naudojami siems tikslams. \n"<<endl;
}

---------- 2uzd
void k();
void f();

int main() {
    k();
    f();
    return 0;
}
void k() {
    cout<<"Vilniaus kolegija"<<endl;
}
void f() {
    cout<<"Elektronikos ir informatikos fakultetas"<<endl;
}
*/

int getrandomnumber();

    srand(time(nullptr));
    for (int a = 0; a < 10; a++)
        cout<<"Skaiciai: " <<getrandomnumber()<<endl;
}
