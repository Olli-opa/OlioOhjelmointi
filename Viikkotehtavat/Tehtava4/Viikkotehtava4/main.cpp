#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas A("Aapeli", 1000);
    cout << endl;
    A.showSaldo();
    cout << endl;
    A.talletus(250);
    cout << endl;
    A.LuotonNosto(150);
    cout << endl;
    A.showSaldo();
    cout << endl;

    Asiakas B("Bertta", 1000);
    cout << endl;
    B.showSaldo();
    cout << endl;
    cout << A.getNimi();
    cout << endl;
    A.showSaldo();
    A.tiliSiirto(50, B);
    cout << endl;
    cout << B.getNimi();
    cout << endl;
    B.showSaldo();
    cout << endl;

    return 0;
}
