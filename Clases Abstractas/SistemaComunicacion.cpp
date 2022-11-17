//Del ejemplo de abtractas
#include "SistemaComunicacion.h"
using namespace std;

SistemaComunicacion::SistemaComunicacion(string tc) : tipoComunicacion{tc},comunicando{false} {}

bool SistemaComunicacion::isComunicando() {return comunicando;}
void SistemaComunicacion::setComunicando(bool c) {comunicando = c;}
