#include "Combo.h"

Combo::Combo():Producto(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto(_nombre, _precio, _peso){
    clave = _clave;
}

string Combo::str(){
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);
}

int Combo::calculaTotalPagar(){
    int totalPagar;
    int descuento;

    if (clave == 1){
        descuento = ((precio*peso*clave)/100)*25;
        totalPagar = precio*peso*clave - descuento;
        return totalPagar;
    }
    else if (clave == 2){
        descuento = ((precio*peso*clave)/100)*30;
        totalPagar = precio*peso*clave - descuento;
        return totalPagar;
    }
    else{
        totalPagar = precio*peso*clave;
        return totalPagar;
    }
    
}