#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
    virtual void maaritaAsunnot();
    double laskeKulutus(double hinta);
};

#endif // KERROS_H
