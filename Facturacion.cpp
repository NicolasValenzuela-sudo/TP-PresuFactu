//
// Created by NICOL on 19/9/2022.
//

#include "Facturacion.h"
#include "Presupuesto.h"
#include <iostream>
using namespace std;

Facturacion::Facturacion(int numeroFactura, Fecha fechaEmisionFactura,Presupuesto presupuesto1):
        fechaEmisionFactura(fechaEmisionFactura), presupuesto(presupuesto1) {

    this->numeroFactura = numeroFactura;


}
Facturacion::~Facturacion() {}

void Facturacion::validacion() {

    if((this->fechaEmisionFactura.getAnio() == this->presupuesto.getAnio()) && (this->fechaEmisionFactura.getMes() == this->presupuesto.getMes())&&
       ( this->fechaEmisionFactura.getDia()) < this->presupuesto.getDia()){

        cout << "La facturacion se encuentra en los limites de fecha, por ende es ACEPTADA" << endl;
    }else {
        cout << "Facturacion RECHAZADA, fuera de limites de fecha estipulada" << endl;
    }
}
void Facturacion::mostrar() {

    cout <<"INFORMACION DE LA FACTURA"<< endl;
    cout << "Numero de factura: " << this->numeroFactura << endl;
    cout << "Fecha de emision: " << this->fechaEmisionFactura.getDia() << "/" << this->fechaEmisionFactura.getMes() << "/" << this->fechaEmisionFactura.getAnio() << endl;
    cout << "Fecha de vencimiento: " << this->presupuesto.getDia() << "/" << this->presupuesto.getMes() << "/" << this->presupuesto.getAnio() << endl;
    cout << "INFORMACION DEL CLIENTE: " << endl;
    this->presupuesto.mostrarCliente();
}
