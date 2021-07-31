#ifndef RED_H
#define RED_H
#include "enrutador.h"

class red
{
public:
    red();
    void enrutadores(char nombre1, enrutador obj2);
    void impresion ();

private:
    map <char,enrutador> enrutadorEnlace;
};

#endif // RED_H
