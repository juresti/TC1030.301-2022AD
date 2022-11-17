//Del ejemplo de abstractas
#include "TelefonoFijo.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "**** Pruebas del Telefono Fijo ***\n";
    TelefonoFijo tel1{3};
    tel1.encender();
    cout << tel1.comunicar() << endl;
    tel1.apagar();
    cout << tel1.getNumero() << endl;
    return 0;
}
