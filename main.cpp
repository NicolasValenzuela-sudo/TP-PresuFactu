#include <iostream>
#include "Fecha.h"
#include "Presupuesto.h"
#include "Facturacion.h"
#include "Cliente.h"

using namespace std;

int main() {

    Fecha fechaEmisioPresu(12, 9, 2022);

    Fecha fechaVencPresu(16, 9, 2022);

    Fecha fechaEmisioFact(15, 10, 2022);

    Cliente cliente1(37948670, "Nicolas", "Valenzuela");


    //cliente pide un presupuesto

    Presupuesto presupuesto1(001, fechaEmisioPresu, fechaVencPresu,cliente1, 100);

    //si lo acepta pide una factura

    Facturacion factura1(0001, fechaEmisioFact, presupuesto1);



    factura1.validacion();

    factura1.mostrar();

    return 0;
}
