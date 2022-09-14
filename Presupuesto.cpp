//
// Created by NICOLAS on 13/9/2022.
//

#include "Presupuesto.h"
#include <iostream>
#include "Fecha.h"
#include "Cliente.h"

//using namespace std;

Presupuesto::Presupuesto(int numeroPresupuesto, Fecha &fechaVencimiento, Cliente &cliente1, float porcentaje, float totalPresupuesto): fechaVencimiento(fechaVencimiento),
                                            cliente(cliente1) {

    numeroPresupuesto = numeroPresupuesto;
    //fechaVencimiento = fechaVencimiento;

    porcentaje = porcentaje;
    totalPresupuesto = totalPresupuesto;

}

Presupuesto::~Presupuesto() {

}
void Presupuesto::mostrar() {
    cout << "Numero de presupuesto: " << this->numeroPresupuesto << endl;
    cout << "Fecha de vencimiento: " << fechaVencimiento << endl;
    cout << "Cliente: " << cliente << endl;
    cout << "Porcentaje: " << this->porcentaje << endl;
    cout << "Total presupuesto: " << this->totalPresupuesto << endl;
}
