//Archivo cabecera clase Empleado \
3 de mayo de 2021
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Paquete.h"
#include <iostream>
#include <string>
using namespace std;

class Empleado{
private:
    string nombre;
    int numEmpleado;
    Paquete envio;
public:
    Empleado ();
    Empleado (string nom,int num);
    string getNombre();
    int getNumEmpleado();
    void recibirPaquete(Paquete paq);
    void enviarPaqueteInterno();
}; //Empleado

#endif