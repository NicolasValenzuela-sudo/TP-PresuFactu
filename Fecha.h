//
// Created by NICOLAS on 13/9/2022.
//

#ifndef TEMPLATECPP_FECHA_H
#define TEMPLATECPP_FECHA_H



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

#endif //TEMPLATECPP_FECHA_H
