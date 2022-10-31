//Codigo de prueba para el ejercicio de la Actividad 1 \
4 de mayo de 2021

#include "Cliente.h"
#include "Empleado.h"
#include "Mensajeria.h"
#include "Paquete.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Paquete miPaq("Xoco 3","Paquete para Laura");
    Cliente jorge("Jorge");
    jorge.guardaPaquete(miPaq);

    Mensajeria dhl("DHL");
    Empleado emp1("Juanito",1);
    emp1.recibirPaquete(jorge.entregaPaquete());
    dhl.recibePaquete(jorge.entregaPaquete(),jorge.entregaPaquete().getDireccion(),jorge.entregaPaquete().getDescripcion());
    emp1.enviarPaqueteInterno();
    return 0;
}
