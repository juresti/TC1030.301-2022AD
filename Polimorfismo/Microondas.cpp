//Ejemplo de polimorfismo
#include "Microondas.h"
#include <iostream>
using namespace std;

Microondas::Microondas() : Electrodomestico {}, capacidad{10.0}, color{"Blanco"} {}
Microondas::Microondas(float cap,string col) : Electrodomestico{},
                        capacidad{cap}, color{col} {} //Tambien es el de default

string Microondas::calentadoRapido() {
    if (isEncendido()) {return "Calentando tu comida por 30 segundos";}
    else {return "Enciende primero el microondas";}
}

//Metodos virtuales heradados de la clase padre
string Microondas::dimeFuncionActual() {return "La funcion del Microondas es " + funcionActual;}
void Microondas::cambiaFuncionActual(string fa){
    cout << "Cambiando la funcion de tu Microondas a " << fa << endl;
    funcionActual = fa;
}
//se quito la definicion virtual de la clase padre pues no hace nada diferente    virtual void encender();
//idem    virtual void apagar();
string Microondas::toString(){
    return "Microondas(" + to_string(isEncendido()) + "," + funcionActual + "," + //heradadas
                        to_string(capacidad) + "," + color + ")";
}
