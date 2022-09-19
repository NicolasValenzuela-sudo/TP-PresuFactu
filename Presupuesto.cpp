//
// Created by NICOLAS on 13/9/2022.
//

#include "Presupuesto.h"
#include <iostream>
#include "Fecha.h"
#include "Cliente.h"

//using namespace std;

Presupuesto::Presupuesto(int numeroPresupuesto, Fecha fechaVencimiento, Fecha  fechaEmision, Cliente cliente, float porcentaje,Producto producto1) :
                            fechaVencimiento(fechaVencimiento), fechaEmision(fechaEmision), cliente(cliente), producto(producto1) {

    this->numeroPresupuesto = numeroPresupuesto;

    this->porcentaje = porcentaje;
    this->totalPresupuesto = producto1.getPrecio();
}

Presupuesto::~Presupuesto() {

}

void Presupuesto::setTotalPresu() {

    this->totalPresupuesto = this->porcentaje * 100;

}
