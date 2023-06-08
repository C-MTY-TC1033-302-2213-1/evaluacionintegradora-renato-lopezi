//
//  main.cpp
//  ExamenTC1030JUNIO2023
//
//  Created by Ma. Guadalupe Roque Díaz de León on 06/06/23.
//

#include <iostream>
#include "Pedido.h"

int main() {
    
    Pedido pedido;
    int opcion;
    
    cin >> opcion;
    
    switch (opcion) {
        case 1:
            pedido.leerArchivo("/Users/ma.guadaluperoquediazdeleon/Documents/Semestre Feb-Jun 2023/TC1030-302/ExamenTC1030JUNIO2023/ExamenTC1030JUNIO2023/Pedido1.csv");
            break;
        case 2:
            pedido.leerArchivo("/Users/ma.guadaluperoquediazdeleon/Documents/Semestre Feb-Jun 2023/TC1030-302/ExamenTC1030JUNIO2023/ExamenTC1030JUNIO2023/Pedido2.csv");
            break;
        case 3:
            pedido.leerArchivo("/Users/ma.guadaluperoquediazdeleon/Documents/Semestre Feb-Jun 2023/TC1030-302/ExamenTC1030JUNIO2023/ExamenTC1030JUNIO2023/Pedido3.csv");
            break;
        case 4:
            pedido.leerArchivo("/Users/ma.guadaluperoquediazdeleon/Documents/Semestre Feb-Jun 2023/TC1030-302/ExamenTC1030JUNIO2023/ExamenTC1030JUNIO2023/Pedido4.csv");
            break;
        default:
            break;
    }
 
    pedido.ticketCliente();
    
    return 0;
}
