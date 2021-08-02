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
    for(auto par=begin(enrutadorEnlace);par!=end(enrutadorEnlace);par++){
        cout<<par->first<<'\t';

    }
}
/*for(auto it=enrutadorEnlace.begin();it!=enrutadorEnlace.end();it++){
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
}*/
