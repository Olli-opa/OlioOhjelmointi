#include "asiakas.h"

Asiakas::Asiakas(string nimi, double lr)
    : kayttotili(nimi), luottotili(nimi, lr)
{
    cout << "Asiakkuus luotu: " << nimi;
    name = nimi;
}



bool Asiakas::talletus(double summa)
{
    return kayttotili.deposit(summa);
}


bool Asiakas::nosto(double summa)
{
    return kayttotili.withdraw(summa);
}

bool Asiakas::LuotonMaksu(double summa)
{
    return luottotili.deposit(summa);
}


bool Asiakas::LuotonNosto(double summa)
{
    return luottotili.withdraw(summa);
}


void Asiakas::showSaldo()
{
    cout << "Kayttotilisi saldo: " << kayttotili.getBalance() << endl
         << "Luottotilisi saldo: " << luottotili.getBalance() << endl;
}


bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool onnistuuko = nosto(summa);
    if(onnistuuko == false){
        cout << "Tililla ei tarpeeksi katetta" << endl;
        return false;
    }else{
        cout << "Tililta " << name << " siirretty rahaa " << summa << endl;
        saaja.talletus(summa);
        return true;
    }
}


string Asiakas::getNimi() const
{
    return name;
}

