/*
*  autor: Diego Hernández Rangel
*  fecha: Septiembre 2026
*  desc: Clase que tiene origen y destino junto con distancia
*  Se hace una sobrecarga del operador para asi poder ordenar rutas
*/

#ifndef RUTA_H
#define RUTA_H

#include <string>

using namespace std;

class Ruta {
private:
    string origen;
    string destino;
    int distancia;

public:
    Ruta():
        origen(""), destino(""), distancia(0){}


    Ruta(string ori, string des, int dist):
        origen(ori), destino(des), distancia(dist){}

    string getOrigen() {
        return origen;
    }

    string getDestino() {
        return destino;
    }

    int getDistancia() {
        return distancia;
    }

    bool operator>(const Ruta &otraRuta) {
        return distancia > otraRuta.distancia;
    }

    bool operator<(const Ruta &otraRuta) {
            return distancia < otraRuta.distancia;
    }
};

#endif
