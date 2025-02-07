#include <iostream>
#include <memory>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{
    Notifikaattori *N = new Notifikaattori();

    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Beepeli");
    Seuraaja *C = new Seuraaja("Ceepeli");

    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->tulosta();

    N->postita("Tama on viesti 1");

    N->poista(B);

    N->postita("Tama on viesti 2");

    return 0;
}
