#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "ItalianChef konstruktori" << ", kokin nimi " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}


bool ItalianChef::askSecret(string pw, int f, int w)
{
    if(password.compare(pw) == 0)
    {
        flour = f;
        water = w;
        makePizza();
        return true;
    }else{
        return false;
    }
}

int ItalianChef::makePizza()
{
    int annoksia = 0;
    int wf = min(flour, water);
    annoksia = wf / 5;

    cout << "ItalianChef Jyrki with " << flour << " flour and "
         << water << " water can make " << annoksia << " pizza" << endl;
    return annoksia;
}

