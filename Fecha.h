//
// Created by NICOLAS on 19/9/2022.
//

#ifndef PRUEBAS_FECHA_H
#define PRUEBAS_FECHA_H
class Fecha {
private:
    int dd;
    int mm;
    int aa;
public:
    Fecha(int dd, int mm, int aa);
    ~Fecha();
    int getDia();
    int getMes();
    int getAnio();
};
inline int Fecha::getDia() {
    return dd;
}
inline int Fecha::getMes() {
    return mm;
}
inline int Fecha::getAnio() {
    return aa;
}

#endif //PRUEBAS_FECHA_H
