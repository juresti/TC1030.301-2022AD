//Codigo de la clase Paquete \
3 de mayo de 2021
#include "Paquete.h"

Paquete::Paquete() : direccion{""},descripcion{""} {}
Paquete::Paquete(string direc,string descrip) : direccion{direc},descripcion{descrip} {}

string Paquete::getDescripcion() {return descripcion;}
string Paquete::getDireccion() {return direccion;}
void Paquete::setDireccion(string dir) {direccion = dir;}
void Paquete::setDescripcion(string desc) {descripcion = desc;}
