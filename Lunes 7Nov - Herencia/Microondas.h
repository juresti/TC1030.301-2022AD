//Clase Microondas del ejemplo de Herencia
#ifndef MICROONDAS_H
#define MICROONDAS_H

#include "Electrodomestico.h"
#include <string>

class Microondas : public Electrodomestico{
private:
    float capacidad {0.0};
    string color {"Negro"};
public:
    Microondas();
    Microondas(float,string);
    string calentadoRapido();
    void encender();
    void apagar();
    string toString();
};
#endif
