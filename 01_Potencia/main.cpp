#include <iostream>
#include "potencia.h"

using namespace std;

int main() {
    unsigned int b,e;
    cout << "Ingrese la base: " << '\n';
    cin >> b;
    cout << "Ingrese exponente: " << '\n';
    cin >> e;
    cout << "El reustado es: " << potencia(b,e) << '\n';
    cout << "Ejercicio 01/01\n" << std::endl;
    return 0;
}
