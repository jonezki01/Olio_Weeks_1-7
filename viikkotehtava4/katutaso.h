#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    Asunto as1;
    Asunto as2;
    void maaritaAsunnot() override;
    double laskeKulutus(double hinta);
};

#endif // KATUTASO_H
