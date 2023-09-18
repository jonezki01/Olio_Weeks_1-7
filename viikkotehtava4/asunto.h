#ifndef ASUNTO_H
#define ASUNTO_H


class Asunto
{
public:
    Asunto();
    int asukasMaara;
    int neliot;
    void maarita(int asukasMaara, int neliot);
    double laskeKulutus(double hinta);
};

#endif // ASUNTO_H
