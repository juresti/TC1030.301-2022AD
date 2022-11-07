//Ejemplo de herencia visto en clase
#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H

#include <string>
using namespace std;

class Electrodomestico{
private:
    bool encendido {false};
public:
    Electrodomestico();
    bool isEncendido();
    void setEncendido(bool);
    string toString();
};
#endif
