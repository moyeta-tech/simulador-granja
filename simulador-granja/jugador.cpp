#include "jugador.h"

Jugador::Jugador(QString& nombre, int dinero) : nombre(nombre), dinero(dinero) {}

QString Jugador::getNombre() const {
    return nombre;
}

int Jugador::getDinero() const {
    return dinero;
}

void Jugador::setDinero(int cantidad){
    dinero = cantidad;
}
