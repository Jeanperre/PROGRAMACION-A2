#include <iostream>
#include <ctime>

using namespace std;

int main() {
    clock_t inicio = clock();  // Obtiene el tiempo de inicio del cronómetro
    char respuesta;

    do {
        // Obtiene el tiempo actual y lo resta del tiempo de inicio para calcular el tiempo transcurrido
        clock_t actual = clock();
        double tiempo_transcurrido = double(actual - inicio) / CLOCKS_PER_SEC;

        // Convierte el tiempo transcurrido a formato de cronómetro (hh:mm:ss)
        int horas = tiempo_transcurrido / 3600;
        int minutos = (tiempo_transcurrido - horas * 3600) / 60;
        int segundos = tiempo_transcurrido - horas * 3600 - minutos * 60;

        // Muestra el tiempo transcurrido en formato de cronómetro
        cout << horas << ":" << minutos << ":" << segundos << endl;

        // Espera un segundo antes de mostrar el siguiente tiempo
        clock_t tiempo_espera = clock() + CLOCKS_PER_SEC;
        while (clock() < tiempo_espera);

        // Preguntar si el usuario desea detener el cronómetro
        cout << "(Pregunta)Desea detener el cronometro (s/n): ";
        cin >> respuesta;

    } while (respuesta != 's');

    return 0;
}