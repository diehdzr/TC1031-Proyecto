/*
*  autor: Diego Hernández Rangel
*  fecha: Septiembre 2026
*  desc: Programa hecho solamente para comprobar el
*  algoritmo de Merge Sort a base de las rutas
*/

#include <iostream>
#include <vector>
#include "ruta.h"
#include "sorts.h"

using namespace std;

int main() {
    vector<Ruta> misRutas;

    misRutas.push_back(Ruta("Punto A", "Punto B", 50));
    misRutas.push_back(Ruta("Punto B", "Punto C", 15));
    misRutas.push_back(Ruta("Punto C", "Punto D", 30));
    misRutas.push_back(Ruta("Punto D", "Punto E", 10));
    misRutas.push_back(Ruta("Punto A", "Punto E", 80));

    cout << "Rutas sin ordenar" << "\n";
    for (size_t i = 0; i < misRutas.size(); i++) {
        cout << misRutas[i].getOrigen() << " hacia " << misRutas[i].getDestino()
             << " - Distancia: " << misRutas[i].getDistancia() << " metros" << "\n";
    }

    Sorts<Ruta> ordenador;
    ordenador.ordenaMerge(misRutas);

    cout << "\n";
    cout << "Rutas ordenadas por distancia (Menor a Mayor - Merge Sort)" << "\n";
    for (size_t i = 0; i < misRutas.size(); i++) {
        cout << misRutas[i].getOrigen() << " hacia " << misRutas[i].getDestino()
             << " - Distancia: " << misRutas[i].getDistancia() << " metros" << "\n";
    }

    return 0;
}
