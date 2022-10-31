//Código de la clase Empleado \
3 de mayo de 2021

#include "Empleado.h"
#include <iostream>
#include <string>
using namespace std;

Empleado::Empleado () : nombre{""},numEmpleado{0},envio{} {}
Empleado::Empleado (string nom,int num) : nombre{nom},numEmpleado{num},envio{}{}

string Empleado::getNombre(){return nombre;}
int Empleado::getNumEmpleado() {return numEmpleado;}

void Empleado::recibirPaquete(Paquete paq) {
    envio = paq;
    cout << "Recibi el paquete " + envio.getDescripcion() << endl;
}

void Empleado::enviarPaqueteInterno(){
    cout << "Enviando el paquete " + envio.getDescripcion() << endl;
}
