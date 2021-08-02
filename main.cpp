#include "red.h"
using namespace std;

int main()
{
    cout << "Practica 4" << endl;    
    red ob;
    enrutador ob1;
    bool bandera=false;
    vector<char> datos;
    int cant,costoEnlace,cont=0,subCant = 0,tamAux;
    char nomUno, nomDos;
     map<char,char> auxiliar;
    cout<<"Ingrese la cantidad de enrutadores a la red: ";
    cin>>cant;
    while(cant<=0){
        cout<<cant<<" es una cantidad erronea, ingrese nuevamente la cantidad de enrutadores: ";
        cin>>cant;
    }
    cout<<endl;
    while(true){
        cout<<"Ingrese el enrutador: ";
        cin>>nomUno;
        auxiliar.insert(pair<char,char>(nomUno,bandera));
        tamAux=auxiliar.size();
        if(tamAux==cant){
            break;
        }
    }
    cout<<endl;
    for(auto iterador=auxiliar.begin();iterador!=auxiliar.end();iterador++){        
        nomUno=iterador->first;
        cout<<"Numero de enrutadores a enlazar con el enrutador ["<<nomUno<<"]: ";
        cin>>subCant;
        while(subCant>=cant || subCant<=0){
            cout<<"Cantidad erronea, digite nuevamente la cantidad: ";
            cin>>subCant;
        }        
        while(true){
            cont++;
            cout<<"Ingrese el enrutador a enlazar con el enrutador ["<<nomUno<<"]: ";
            cin>>nomDos;
            auxiliar[iterador->first]=nomDos;
            auxiliar.insert(pair<char,char>(nomUno,auxiliar[iterador->first]));
            auto iterador2=auxiliar.begin();
            while(iterador2==auxiliar.end() || nomDos==nomUno || auxiliar.end()==auxiliar.find(nomDos)){
                cout<<nomDos<<" no es un enrutador creado o son los mismos, ingrese el enrutador correcto: ";
                cin>>nomDos;
            }
            cout<<"Ingrese el costo del enlace ["<<nomUno<<"] al enlace ["<<nomDos<<"]:  ";
            cin>>costoEnlace;
            while(costoEnlace<=0){
                cout<<"Valor incorrecto, ingrese nuevamente el costo de conexion: ";cin>>costoEnlace;
            }
            ob1.guardarEnrutador(nomDos,costoEnlace,subCant);
            if(cont==subCant){
                cont=0;
                cout<<endl;
                break;
            }
        }
        ob.enrutadores(nomUno,ob1);
        ob1.borradoDato();        
    }
    ob.impresion();
    return 0;
}
