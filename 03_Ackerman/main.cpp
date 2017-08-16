#include <iostream>
#include "ackerman.h"

using namespace std;

int main() {
    unsigned int m,n;
    cout << "Ingrese la cantidad de elementos: " << '\n';
    cin >> m;
    cout << "Ingrese de a cuantos: " << '\n';
    cin >> n;
    cout << "La combinacion es: " << ackerman(m,n) << '\n';
    cout << "Ejercicio 01/03\n" << std::endl;
    return 0;
}
