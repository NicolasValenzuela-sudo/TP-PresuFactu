//
// Created by NICOLAS on 19/9/2022.
//

#ifndef PRUEBAS_FACTURACION_H
#define PRUEBAS_FACTURACION_H

#include "Fecha.h"
#include "Presupuesto.h"
#include <iostream>

class Facturacion {

private:

    int numeroFactura;

    Fecha fechaEmisionFactura;

    Presupuesto presupuesto;

public:

    Facturacion(int numeroFactura, Fecha fechaEmisionFactura,Presupuesto presupuesto1);

    ~Facturacion();

    void validacion();

    void mostrar();

    void calculoTotal();

};

#endif