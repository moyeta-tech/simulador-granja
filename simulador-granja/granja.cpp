#include "granja.h"

Granja::Granja(const QString &nombre) : nombre(nombre) {}

QString Granja::getNombre() const{
    return nombre;
}

void Granja::setNombre(const QString &nombre){
    this->nombre = nombre;
}
