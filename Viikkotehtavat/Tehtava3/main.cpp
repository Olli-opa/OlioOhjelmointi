#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;


int main()
{
    Chef c_olio("Gordon");
    ItalianChef i_olio("Jyrki");
    int annokset = c_olio.makeSalad(24);
    cout << "Chef Gordon with " << 24
         << " items can make salad " << annokset
        << " portions" << endl;

    int annoks = c_olio.makeSoup(10);
    cout << "Chef Gordon with " << 10
         << " items can make salad " << annoks
         << " portions" << endl;

    i_olio.askSecret("pizza", 10, 10);


    return 0;
}
