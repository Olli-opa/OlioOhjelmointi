#include "pankkitili.h"

Pankkitili::Pankkitili() {}

Pankkitili::Pankkitili(string o)
{
    omistaja = o;
    cout << "Pankktili luotu: " << o << endl;
}


bool Pankkitili::withdraw(double summa)
{
    if (summa < 0){
        cout << "nosto ei onnistu, summa negatiivinen" << endl;
        return false;
    }
    else if (summa > saldo){
        cout << "nosto ei onnistu, saldoa ei riittävästi" << endl;
        return false;
    }
    else{
        saldo = saldo - summa;
        return true;
    }
}

bool Pankkitili::deposit(double summa)
{
    if(summa < 0)
    {
        cout << "Talletus ei voi olla negatiivinen" << endl;
        return false;
    }else
    {
        saldo = saldo + summa;
        cout << "Talletus onnistui tilille " << omistaja
             << " summalla " << summa;
        return true;
    }
}

double Pankkitili::getBalance() const
{
    return saldo;
}
