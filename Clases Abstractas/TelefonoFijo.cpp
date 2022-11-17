//Del ejemplo de abstractas
#include "TelefonoFijo.h"
#include <iostream>
using namespace std;

TelefonoFijo::TelefonoFijo(int nl) : Telefono{"55 3388 9911"},numLineas{nl} {}

bool TelefonoFijo::comunicar(){ //Herencia desde la abstracta
    cout << "Comunicandote desde tu Telefono Fijo numero " + getNumero() << endl;
    marcar("55 9988 3322");
    return true;
}
