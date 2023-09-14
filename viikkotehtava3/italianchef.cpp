#include "italianchef.h"

italianchef::italianchef(string s) : Chef(s)
{

}


string italianchef::getName()
{
    return name;
}

void italianchef::makePasta()
{
    cout << "chef " << name << " makes pasta" << endl;
}


