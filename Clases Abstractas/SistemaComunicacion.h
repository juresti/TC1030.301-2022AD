//Ejemplo durante la clase
#ifndef SISTCOM_H
#define SISTCOM_H

#include <string>
using namespace std;

class SistemaComunicacion{
private:
    bool comunicando;
protected:
    string tipoComunicacion;
    SistemaComunicacion(string);
public:
    virtual bool comunicar() = 0; //abstracto
    bool isComunicando();
    void setComunicando(bool);
};

#endif
