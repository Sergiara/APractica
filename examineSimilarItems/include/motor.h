#ifndef MOTOR_H
#define MOTOR_H

#include "cargaDatos.h"
#include <set>


class motor
{
    public:

        motor();

        virtual ~motor();

        double jaccard (string fitxer1, string fitxer2, int k);
        //pre: k <= fichero tamaño minimo
        //post: retorna un indice entre 0 y 1 correspondiente a la similitud de Jaccard

    protected:

    private:
};

#endif // MOTOR_H
