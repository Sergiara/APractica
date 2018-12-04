#include <iostream>

#include "motor.h"

using namespace std;

int main()
{
    motor m;
    cout << "Realitzar Similitud de Jaccard: " << endl;
    string s1, s2; int k;
    cout << "Escriu els dos documents de dades a buscar similituds: " << endl;
    cin >> s1 >> s2;
    cout << "Escriu la k: " << endl;
    cin >> k;
    double d = m.jaccard(s1, s2, k);

    cout << "El grau de similitud dels conjunts " + s1 + " i " + s2 + " es: " << d << endl;

    return 0;
}
