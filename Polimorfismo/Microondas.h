//Ejemplo de polimorfismo
#ifndef MICRO_H
#define MICRO_H
#include <string>
#include "Electrodomestico.h"
using namespace std;

class Microondas : public Electrodomestico{
private:
    float capacidad {10.0};
    string color {"Blanco"};
public:
    Microondas();
    Microondas(float,string); //Con este hacer el de default tambien
    string calentadoRapido();
//Metodos virtuales heradados de la clase padre
    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string);
    virtual string toString();
};

#endif