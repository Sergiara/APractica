#include "cargaDatos.h"

cargaDatos::cargaDatos(string fitxer)
{
   this->fitxer = fitxer;
}

cargaDatos::~cargaDatos() {}

bool cargaDatos::carga_fichero_a_string(string& res){

    string t = "dades\\" + fitxer + ".txt";
    ifstream fi(t);
    string s;
    if (fi.is_open()){
        getline(fi,s);
        while (!fi.eof()){
            string s_aux;
            getline(fi,s_aux);
            s += " " + s_aux;
        }
        fi.close();
        res = s;
        return true;
    } else cout << "ERROR: El fichero " + fitxer + " no se ha cargado correctamente!" << endl;
    return false;
}
