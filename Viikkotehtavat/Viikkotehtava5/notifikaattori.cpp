#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *lisattyseuraaja)
{
    lisattyseuraaja->next = seuraajat;
    seuraajat = lisattyseuraaja;
    cout << "Lisatty seuraaja " << lisattyseuraaja -> getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *PoistSeur)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        if(alku->next == PoistSeur){
            alku->next = PoistSeur->next;
        }
        else{
            alku = alku->next;
        }
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        if(alku != nullptr){
            cout << alku->getNimi() << endl;
            alku = alku->next;
        } else{
            cout << "Lista loppui" << endl;
        }
    }
}

void Notifikaattori::postita(string v)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        alku ->paivitys(v);
        alku = alku->next;
    }
}
