//Programa de aplicacion del ejercicio de Polimorfismo
#include <iostream>
#include "Electrodomestico.h"
#include "Microondas.h"
using namespace std;

void dimeDatosElectrodomestico(Electrodomestico &elec){
    cout << elec.toString() << endl;
    cout << elec.dimeFuncionActual() << endl;
}

int main(int argc, char const *argv[])
{
    cout << "*** Pruebas de Electrodomestico ***\n";
    Electrodomestico elec1 {};
    if (elec1.isEncendido()) {elec1.apagar();}
    else {elec1.encender();}
    cout << elec1.toString() << endl;
    elec1.cambiaFuncionActual("Muy abstracto");
    cout << elec1.dimeFuncionActual() << endl;

    cout << "\n*** Pruebas de Microondas ***\n";
    Microondas micro1 {};
    Microondas micro2 {15.5,"Morado"};
    cout << micro1.toString() << endl;
    cout << micro2.toString() << endl;
    cout << micro1.calentadoRapido() << endl;
    micro2.cambiaFuncionActual("Descongelando");
    cout << micro2.dimeFuncionActual() << endl;

    cout << "\n*** Pruebas de Polimorfismo ***\n";
    dimeDatosElectrodomestico(elec1);
    dimeDatosElectrodomestico(micro1);
    return 0;
}
