#include <iostream>
#include "mcd.h"

using namespace std;

int main() {
    unsigned int a,b;
    cout << "Ingrese a: " << '\n';
    cin >> a;
    cout << "Ingrese b: " << '\n';
    cin >> b;
    cout << "El maximo comun divisor es: " << mcd(a,b) << '\n';
    cout << "Ejercicio 01/04\n" << std::endl;
    return 0;
}
