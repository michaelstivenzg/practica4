#ifndef ENRUTADOR_H
#define ENRUTADOR_H

#include <map>
#include <vector>
#include <iostream>
using namespace std;

class enrutador
{
public:
    enrutador();
    void guardarEnrutador(char enrutador2, int costo, int subEnlaces);
    void borradoDato();
private:
    map<char, int> enlace;
    int contador=0,aux;

};

#endif // ENRUTADOR_H
