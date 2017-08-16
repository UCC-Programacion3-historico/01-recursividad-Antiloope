#include <iostream>
#include "sumatoria.h"

using namespace std;
int main() {
    unsigned int l;
    cout << "Ingrese el largo del array:" << '\n';
    cin >> l;
    int A[l];
    for (size_t i = 0; i < l; i++) {
        cout << "Ingrese el valor de la posicion " << i << '\n';
        cin >> A[i];
    }
    cout << "La suma es: " << sumatoria(A,l-1) << '\n';
    cout << "Ejercicio 01/02\n" << endl;
    return 0;
}
