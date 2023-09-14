#include "chef.h"

Chef::Chef(string s)
{
    name = s;
    cout << "chef " << name << " konstruktori" <<endl;
}

Chef::~Chef()
{
    cout << "chef " << name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "chef " << name << " makes salad" <<endl;
}

void Chef::makeSoup()
{
    cout << "chef " << name << " makes soup" <<endl;
}
