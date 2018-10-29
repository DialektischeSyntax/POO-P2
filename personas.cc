#include "personas.h"
#include <stdlib.h>

string Persona::getApellidosyNombre(string nombrecompleto){
  nombrecompleto = (nombre_ + apellidos_);
  return nombrecompleto;
}

string Persona::DNI(string dni)
