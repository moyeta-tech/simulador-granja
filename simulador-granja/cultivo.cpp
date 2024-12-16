#include "cultivo.h"

Cultivo::Cultivo(const QString& tipo, int tiempoCrecimiento) : tipo(tipo),
                        tiempoCrecimiento(tiempoCrecimiento) {}

QString Cultivo::getTipo() const {
    return tipo;
}


int Cultivo::getTiempoCrecimiento() const {
    return tiempoCrecimiento;
}

