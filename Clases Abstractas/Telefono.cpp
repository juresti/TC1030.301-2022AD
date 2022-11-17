//Del ejemplo de Abstractas
#include "Telefono.h"
#include <iostream>
using namespace std;

Telefono::Telefono(string n) : SistemaComunicacion{"Telefono"},encendido{false},
                                numero{n} {}

void Telefono::encender() {encendido = true;}
void Telefono::apagar() {encendido = false;}
string Telefono::getNumero() {return numero;}

bool Telefono::marcar(string num) {
    if (encendido){
        cout << "Marcando el numero " + num << endl;
        return true;
    } else {
        cout << "Enciende primer el telefono\n";
        return false;
    }
}