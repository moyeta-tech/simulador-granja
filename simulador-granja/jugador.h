#ifndef JUGADOR_H
#define JUGADOR_H

#include "QString"

class Jugador
{
public:
    Jugador(QString& nombre, int dinero);
    QString getNombre() const;
    int getDinero() const;
    void setDinero(int cantidad);
private:
    QString nombre;
    int dinero;

};

#endif // JUGADOR_H
