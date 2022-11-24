//Archivo de encabezado 
#ifndef CAFETERA_H
#define CAFETERA_H

#include <string>
using namespace std;

class Cafetera{
private:
    float capacidad;
    int tazasXMin;
    string nombre;
public:
    Cafetera(string,float,int);
    string toString();
    friend int operator +(const Cafetera&,const Cafetera&);
    friend int operator +(int, const Cafetera&);
};

#endif
