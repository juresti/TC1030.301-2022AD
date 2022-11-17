//Del ejemplo de abstractas
#ifndef TELFIJO_H
#define TELFIJO_H

#include "Telefono.h"
class TelefonoFijo : public Telefono{
private:
    int numLineas;
public:
    TelefonoFijo(int);
    bool comunicar(); //Herencia desde la abstracta
};

#endif
