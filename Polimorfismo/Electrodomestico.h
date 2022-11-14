//Ejempo de clase sobre polimorfismo
#ifndef ELECTRO_H
#define ELECTRO_H
#include <string>
using namespace std;

class Electrodomestico{
private:
    bool encendido {false};
protected:
    string funcionActual {""};
public:
    Electrodomestico();
    bool isEncendido();
    void setEncendido(bool);
    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string);
    void encender();
    void apagar();
    virtual string toString();
};

#endif
