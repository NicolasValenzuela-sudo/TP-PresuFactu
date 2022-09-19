#include <iostream>
#include "Fecha.h"
#include "Cliente.h"
#include "Presupuesto.h"

int main() {

    using namespace std;

    Producto leche(1, "Leche", 100);

    Producto pan(2, "Pan", 50);

    Producto arroz(3, "Arroz", 150);

    Cliente cliente1(12345678, "Nicolas", "Gonzalez");

    Fecha fechaEmision(12, 9, 2022);

    Fecha fechaVen(13, 9, 2022);

    Presupuesto presupuesto1(1, fechaVen, fechaEmision, cliente1, 100,leche);







    return 0;
}
