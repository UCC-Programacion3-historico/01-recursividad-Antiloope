#include <iostream>
#include "digitos.h"

using namespace std;

int main() {
    unsigned int a,b;
    cout << "Ingrese a: " << '\n';
    cin >> a;
    cout << "Ingrese b: " << '\n';
    cin >> b;
    cout << "Cociente entre a y b: " << cociente(a,b) << '\n';
    cout << "Resto entre a y b: " << resto(a,b) << '\n';
    cout << "Ejercicio 01/05\n" << endl;
    return 0;
}
