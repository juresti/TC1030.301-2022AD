//Aplicacion del ejemplo de herencia visto en clase
#include "Electrodomestico.h"
#include "Microondas.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Electrodomestico miElec1 {};
    Electrodomestico miElec2 {};

    cout << "*** Pruebas de Electrodomestico ***\n";
    cout << "Estado de miElec1: " << miElec1.toString() << endl;
    miElec2.setEncendido(true);
    cout << "Esta encendido miElec2? " << miElec2.isEncendido() << endl;

    cout << "\n*** Pruebas de Microondas ***\n";
    Microondas micro1 {};
    Microondas micro2 {15.7,"Morado"};

    cout << "Estado del micro1: " << micro1.toString() << endl;
    cout << "Estado del micro2: " << micro2.toString() << endl;
    cout << micro2.calentadoRapido() << endl;
    micro1.encender();
    cout << micro1.calentadoRapido() << endl;
    micro1.apagar();
    cout << "Estado del micro1: " << micro1.toString() << endl;
    return 0;
}
