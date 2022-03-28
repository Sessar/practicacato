#include <iostream>
#include <string>
#include "fecha.h"
using namespace std;

void fecha::ingresar(){
    cout<<"Dia: "<<endl;cin>>dia;
    cout<<"Mes: "<<endl;cin>>mes;
    cout<<"Año: "<<endl;cin>>year;
}
void fecha::imprimir(){
    cout<<dia<<"/"<<mes<<"/"<<year<<endl;

}
int fecha::cantidadtiempo(fecha n){
    if (this ->year>n.year )
    {
        /* code */
    }
    
    return ();
}
