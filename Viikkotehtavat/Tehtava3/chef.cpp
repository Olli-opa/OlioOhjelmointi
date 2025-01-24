#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkonstruktori, ei nimeä" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, nimi " << chefName << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " destruktori" << endl;

}

int Chef::makeSalad(int aines)
{
    int annoksia = 0;
    annoksia = aines / 5;
    return annoksia;
}

int Chef::makeSoup(int aines)
{
    int annoksia = 0;
    annoksia = aines / 3;

    return annoksia;

}

string Chef::getChefName() const
{
    return chefName;
}
