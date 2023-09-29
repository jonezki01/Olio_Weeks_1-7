#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Kerrostalo* ktalo = new Kerrostalo();
    ktalo->maaritaAsunnot();
    ktalo->laskeKulutus(1);
    delete ktalo; // Muista vapauttaa muisti
    return 0;
}
