#include "luottotili.h"

Luottotili::Luottotili() {}

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "Luottotili luotu: " << o
         << ", luottoraja " << luottoRaja << endl;
}

bool Luottotili::withdraw(double summa)
{
    if (summa < 0){
        cout << "nosto ei onnistu, summa negatiivinen" << endl;
        return false;
    }
    else if (summa > luottoRaja){
        cout << "nosto ei onnistu, luottoa ei riittavasti" << endl;
        return false;
    }
    else{
        saldo = saldo + summa;
        cout << "Nostettu luotto: " << summa
             << ", luottoa jaljella: " << luottoRaja - saldo;
        return true;
    }
}

bool Luottotili::deposit(double summa)
{
    if(summa < 0)
    {
        cout << "Talletus ei voi olla negatiivinen" << endl;
        return false;
    }
    else if(saldo < summa)
    {
        cout << "Yritit tallettaa liikaa rahaa. Sinun lainasi: "
             << saldo << ", mutta yritit maksaa " << summa << endl;
        return false;
    }
    else
    {
        saldo = saldo - summa;
        cout << "Velkaa jaljella lainan takaisinmaksun jalkeen = "
             << saldo << endl;
        return true;
    }
}

