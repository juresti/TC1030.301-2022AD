//Archivo cabecera del la clase Mensajeria \
3 de mayo de 2021
#ifndef MENSAJERIA_H
#define MENSAJERIA_H

#include "Empleado.h"
#include "Paquete.h"
#include <string>
using namespace std;

class Mensajeria{
private:
    string nombre;
    Paquete paquete;
    Empleado empleado;
public:
    Mensajeria();
    Mensajeria(string nom);
    string getNombre();
    void recibePaquete(Paquete paq,string dir, string desc);
    Paquete entregaPaquete();
}; //Mensajeria

#endif 