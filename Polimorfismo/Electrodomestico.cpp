//Codigo visto en clase sobre polimorfismo
#include "Electrodomestico.h"
using namespace std;

Electrodomestico::Electrodomestico() : encendido{false},funcionActual{"No definida"} {}

bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool e) {encendido = e;}
string Electrodomestico::dimeFuncionActual(){return funcionActual;}
void Electrodomestico::cambiaFuncionActual(string nf) {funcionActual = nf;}

void Electrodomestico::encender() {encendido = true;}
void Electrodomestico::apagar() {encendido = false;}

string Electrodomestico::toString(){
    return "Electrodomestico(" + to_string(encendido) + "," + funcionActual + ")";
}