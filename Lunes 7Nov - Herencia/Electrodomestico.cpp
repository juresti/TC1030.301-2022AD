//Codigo de Electrodomestico.h
#include "Electrodomestico.h"
using namespace std;

Electrodomestico::Electrodomestico() : encendido{false} {}
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool e) {encendido = e;}
string Electrodomestico::toString(){
    return "Electrodomestico(" + to_string(encendido) + ")";
}
