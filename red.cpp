#include "red.h"

red::red()
{

}

void red::enrutadores(char nombre1, enrutador obj2)
{
    enrutadorEnlace.insert(pair<char, enrutador>(nombre1,obj2));
}

void red::impresion()
{
   cout<<"Enlaces y costos: "<<endl;   
    for(auto par:enrutadorEnlace){
        cout<<par.first;
        /*for(auto &&par2:par.second){

        }*/
    }
}
/*    for (auto var : mapa2) {
        cout << "Clave mapa externo " << var.first << endl;
        for (auto var1 : var.second) {
            cout << "clave mapara interno "<< var1.first << " - valor ->" << var1.second << endl;
        }
    }
 *
 *
 * for(auto it=enrutadorEnlace.begin();it!=enrutadorEnlace.end();it++){
    for(auto iter=it->second.guardarEnrutador();
}*/
/*    for(auto iteradorz=origen.begin();iteradorz!=origen.end();iteradorz++){
        for(auto iteradorzz=iteradorz->second.begin();iteradorzz!=iteradorz->second.end();iteradorzz++){
            cout<<"Enrutador origen ["<<(*iteradorz).first<<"] enlazado al enrutador ["<<(*iteradorzz).first<<"] con costo ["<<(*iteradorzz).second<<"] "<<endl;
        }
    }*/
/*
        for(auto iteradorz=origen.begin();iteradorz!=origen.end();iteradorz++){
            for(auto iteradorzz=iteradorz->second.begin();iteradorzz!=iteradorz->second.end();iteradorzz++){
                if(aux== iteradorz->first){
                    cout<<"Enrutador origen ["<<(*iteradorz).first<<"] enlazado al enrutador ["<<(*iteradorzz).first<<"] con costo ["<<(*iteradorzz).second<<"] "<<endl;
                }
}
*/
