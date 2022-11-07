//Codigo para Microondas.h
#include "Microondas.h"
#include <iostream>
using namespace std;

Microondas::Microondas() : Electrodomestico(), 
                            capacidad{10.0},color{"Blanco"} {}
Microondas::Microondas(float cap,string col) : Electrodomestico(),
                        capacidad{cap}, color{col} {}

string Microondas::calentadoRapido() {
    if (isEncendido()) {return "Calentando tu comida...";}
    else {return "Primero enciende el microondas";}
}

void Microondas::encender() {setEncendido(true);}
void Microondas::apagar() {setEncendido(false);}

string Microondas::toString(){
    return "Microondas(" + to_string(isEncendido()) + "," + to_string(capacidad) 
            + "," + color + ")";
}
