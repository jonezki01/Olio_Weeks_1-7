#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Gordon Ramsay");
    kokki.makeSalad();
    kokki.makeSoup();


    italianchef kokki2("Anthony Bourdain");
    kokki2.makeSalad();
    kokki2.makeSoup();
    kokki2.makePasta();
    return 0;
}
