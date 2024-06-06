#include "Verdura.h"

Verdura::Verdura():Producto(){
    temporada = "Invierno";
}
Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada):Producto(_nombre, _precio, _peso){
    temporada = _temporada;
}

string Verdura::str(){
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + "-" + temporada;
}
int Verdura::calculaTotalPagar(){
    int totalPagar;


    if (temporada == "Junio"){
        totalPagar = precio*peso*2;

        return totalPagar;
    }
    else if (temporada == "Regalado"){
        totalPagar = precio*peso*3;
        
        return totalPagar;
    }
    else{
        totalPagar = precio*peso*10;

        return totalPagar;
    }
    
}