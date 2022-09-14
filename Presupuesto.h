//
// Created by NICOLAS on 13/9/2022.
//

#ifndef TEMPLATECPP_PRESUPUESTO_H
#define TEMPLATECPP_PRESUPUESTO_H
#include "Fecha.h"
#include "Cliente.h"
#include <iostream>

using namespace std;
class Presupuesto {

private:
        int numeroPresupuesto;
        Fecha fechaVencimiento;
        Cliente cliente;
        float porcentaje;
        float totalPresupuesto;
public:

    Presupuesto(int, Fecha, Cliente, float, float);
    ~Presupuesto();
    Fecha getFechaVencimiento();
    void mostrar();
};
inline Fecha Presupuesto::getFechaVencimiento() {
        return fechaVencimiento;
}


#endif //TEMPLATECPP_PRESUPUESTO_H
