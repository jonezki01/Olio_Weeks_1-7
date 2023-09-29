#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo(); // Destructori
    void maaritaAsunnot();
    double laskeKulutus(double hinta);
private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;
};

#endif // KERROSTALO_H
