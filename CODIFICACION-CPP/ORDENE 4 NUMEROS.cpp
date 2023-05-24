#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Ingrese cuatro numeros separados por un espacio: ";
    cin >> a >> b >> c >> d;

    // Ordenar los números usando comparaciones
    int temp;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (a < d) {
        temp = a;
        a = d;
        d = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (b < d) {
        temp = b;
        b = d;
        d = temp;
    }
    if (c < d) {
        temp = c;
        c = d;
        d = temp;
    }

    // Imprimir los números ordenados
    cout << "Los numeros ordenados de mayor a menor son: " << a << " " << b << " " << c << " " << d << endl;

    return 0;
}