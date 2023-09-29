#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int asukasMaara, int neliot)
{
    this->asukasMaara = asukasMaara;
    this->neliot = neliot;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    return asukasMaara * neliot * hinta;
}
