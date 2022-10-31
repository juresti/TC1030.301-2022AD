//Código de la clase Mensajeria \
4 de mayo de 2021

#include "Mensajeria.h"
#include <string>
using namespace std;

Mensajeria::Mensajeria() : nombre{}, paquete{}, empleado{} {}
Mensajeria::Mensajeria(string nom) : nombre{nom}, paquete{}, empleado{} {}

string Mensajeria::getNombre() {return nombre;}
void Mensajeria::recibePaquete(Paquete paq,string dir, string desc){
    paquete = paq;
    paquete.setDireccion(dir);
    paquete.setDescripcion(desc);
    empleado.recibirPaquete(paq);
    cout << "Recibi el paquete descripcion: " + paquete.getDescripcion() << endl;
}
Paquete Mensajeria::entregaPaquete(){return paquete;}