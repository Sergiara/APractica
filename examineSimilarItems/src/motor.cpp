#include "motor.h"

motor::motor()
{
    //ctor
}

motor::~motor()
{
    //dtor
}

double motor::jaccard(string fitxer1, string fitxer2, int k){

    int num_unio = 0, num_inter = 0;

    string conjunt_S;
    cargaDatos c(fitxer1);
    c.carga_fichero_a_string(conjunt_S);

    string conjunt_T;
    cargaDatos c2(fitxer2);
    c2.carga_fichero_a_string(conjunt_T);

    pair<set<string>::iterator, bool> ret;

    set<string> m1;
    for (int i = 0; i < conjunt_S.length() - (k-1); i++){
        string aux = conjunt_S.substr(i, k);
        ret = m1.insert(aux);
        if (ret.second) num_unio++;
    }

    set<string> m2;
    set<string>::iterator it;
    for (int i = 0; i < conjunt_T.length() - (k-1); i++){
        string aux = conjunt_T.substr(i, k);
        ret = m2.insert(aux);
        if (ret.second){
                it = m1.find(aux);
                if (it != m1.end()) num_inter++;
                else num_unio++;
        }
    }

    double res = (double)num_inter / (double)num_unio;
    return res;
}
