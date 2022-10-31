//Archivo cabecera clase Cliente \
3 de mayo de 2021
#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Paquete.h"
using namespace std;

class Cliente{
private:
    string nombre;
    Paquete regalo;
public:
    Cliente();
    Cliente(string nombre);
    string getNombre();
    Paquete entregaPaquete();
    void guardaPaquete(Paquete pa);
}; //Cliente

#endif