//Archivo cabecera de la clase Paquete \
3 de mayo de 2021
#ifndef PAQUETE_H
#define PAQUETE_H

#include <string>
using namespace std;

class Paquete{
private:
    string direccion;
    string descripcion;
public:
    Paquete();
    Paquete(string direc,string descrip);
    string getDescripcion();
    string getDireccion();
    void setDireccion(string dir);
    void setDescripcion(string desc);
}; //Paquete
#endif