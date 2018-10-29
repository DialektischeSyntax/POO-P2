#include <stdlib.h>
#ifndef PERSONAS_H
#define PERSONAS_H

class personas{
private:
  string dni_;
  string nombre_;
  string apellidos_;
  int edad_;
  string direccion_;
  string localidad_;
  string provincia_;
  string pais_;
public:
  persona(string dni_ , string nombre_ = "" , string apellidos_ = "" ,
  int edad_ = 0, string direccion_ = "", string localidad_ = "",
  string provincia_ = "", string pais= "");
  void setDNI(dni){dni_ = dni};
  string getDNI();
  void setNombre(nombre){nombre_ = nombre};
  string getNombre();
  void setApellidos(apellidos){apellidos_ = apellidos};
  string getApellidos();
  void setEdad(edad){edad_ = edad};
  int getEdad();
  void setDireccion(direccion){direccion_ = direccion};
  string getDireccion();
  void setLocalidad(localidad){localidad_ = localidad};
  string getLocalidad();
  void setProvincia(provincia){provincia_ = provincia};
  string getProvincia();
  void setPais(pais){pais_ = pais};
  string getPais();
  string getApellidosyNombre(nombre , apellidos);
  bool mayor();
}
