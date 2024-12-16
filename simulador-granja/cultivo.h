#ifndef CULTIVO_H
#define CULTIVO_H

#include "QString"

class Cultivo
{
public:
    Cultivo(const QString& tipo, int tiempoCrecimiento);
    QString getTipo() const;
    int getTiempoCrecimiento() const;

private:
    QString tipo;
    int tiempoCrecimiento;

};

#endif // CULTIVO_H
