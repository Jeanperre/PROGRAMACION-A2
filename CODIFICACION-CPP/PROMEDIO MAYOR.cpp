#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int num_estudiantes, num_notas;
    double nota, promedio, promedio_mayor = 0;
    vector<double> promedios;

    // Pide al usuario el número de estudiantes y el número de notas por estudiante
    cout << "Ingrese el numero de estudiantes: ";
    cin >> num_estudiantes;

    cout << "Ingrese el numero de notas por estudiante: ";
    cin >> num_notas;

    // Lee las notas de cada estudiante y calcula su promedio
    for (int i = 1; i <= num_estudiantes; i++) {
        cout << "Notas del estudiante " << i << ":" << endl;

        double suma = 0;

        for (int j = 1; j <= num_notas; j++) {
            cout << "Nota " << j << ": ";
            cin >> nota;
            suma += nota;
        }

        promedio = suma / num_notas;
        promedios.push_back(promedio);  // Agrega el promedio a un vector

        // Actualiza el promedio mayor si el promedio actual es mayor que el anterior
        if (promedio > promedio_mayor) {
            promedio_mayor = promedio;
        }
    }

    // Muestra los promedios de cada estudiante
    cout << endl;
    cout << "Promedios de los estudiantes:" << endl;

    for (int i = 1; i <= num_estudiantes; i++) {
        cout << "Estudiante " << i << ": " << fixed << setprecision(2) << promedios[i-1] << endl;
    }

    // Muestra el promedio mayor
    cout << "El promedio mayor es: " << fixed << setprecision(2) << promedio_mayor << endl;

    return 0;
}