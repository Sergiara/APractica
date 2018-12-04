#ifndef CARGADATOS_H
#define CARGADATOS_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class cargaDatos
{
    public:

        cargaDatos(string fitxer);

        virtual ~cargaDatos();

        bool carga_fichero_a_string (string& res);

    private:
        string fitxer;

};

#endif // CARGADATOS_H
