#include "enrutador.h"

enrutador::enrutador()
{

}

void enrutador::guardarEnrutador(char enrutador2, int costo, int subEnlaces)
{
    enlace.insert(pair<char, int>(enrutador2,costo));
    contador++;
    aux=subEnlaces;
}

void enrutador::borradoDato()
{
    if(contador==aux){
        enlace.clear();
        contador=0;
    }
}

