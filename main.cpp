#include <iostream>
#include "Fecha.h"
#include "Presupuesto.h"
#include "Facturacion.h"
#include "Cliente.h"

using namespace std;

bool aceptacionCliente(int);

int main() {

    int respuesta = 0;

    Producto leche(1,"Leche", 100);

    Producto pan(2,"Pan", 50);

    Fecha fechaEmisioPresu(12, 9, 2022);

    Fecha fechaVencPresu(16, 9, 2022);

    Fecha fechaSolicitudFact(15, 10, 2022);

    Fecha fechaEmisioPresu2(12, 9, 2022);
    Fecha fechaVencPresu2(29, 9, 2022);

    Fecha fechaSolicitudFact2(15, 9, 2022);

    Cliente cliente1(37948670, "Nicolas", "Valenzuela");


    //cliente pide un presupuesto

    Presupuesto presupuesto1(001, fechaEmisioPresu, fechaVencPresu,cliente1,leche, 100);

    if (aceptacionCliente(presupuesto1.getTotal()) == true){

        Facturacion factura1(0001, fechaSolicitudFact, presupuesto1); //genero la factura
        if (factura1.validacion() == true) { //valido la fecha de emision de de factura con la de vencimiento de presupuesto
            factura1.mostrar();
        }

    }else{
        cout << "El cliente no acepta el presupuesto" << endl;
    }
    cout << "----------------------------------------------" << endl;
    cout << "---------------------Nuevo Presupuesto------------------------" << endl;

    Presupuesto presupuesto2(002, fechaEmisioPresu2, fechaVencPresu2,cliente1,pan, 50);

    if (aceptacionCliente(presupuesto2.getTotal()) == true){

        Facturacion factura2(0002, fechaSolicitudFact2, presupuesto2);

        if (factura2.validacion() == true) { //valido la fecha de emision de de factura con la de vencimiento de presupuesto
            factura2.mostrar();
        }

    }else{
        cout << "El cliente no acepta el presupuesto" << endl;
    }

    return 0;
}

bool aceptacionCliente (int precio) {
    {
        int respuesta = 0;
        cout << "El precio del presupuesto es de: " << precio << endl;
        cout << "Acepta el presupuesto? (1 = si, 0 = no)" << endl;
        cin >> respuesta;
        if (respuesta == 1) {
            return true;
        } else {
            return false;
        }
    }
}