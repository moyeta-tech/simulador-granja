#ifndef GRANJA_H
#define GRANJA_H

#include "QString"

class Granja
{
public:
    Granja(const QString& nombre);
    QString getNombre() const;
    void setNombre(const QString& nombre);

private:
    QString nombre;
};

#endif // GRANJA_H
