#pragma once
#include "cVehiculo.h"
using namespace std;
class cMoto :
    //metodos publicos
    public cVehiculo
{
    cCargoAdicional* Casco;
public:
    //contructor y destructor
    cMoto(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color);
    ~cMoto();
    //metodos
    int CalcularTarifa(int dias, int adicional1, int adicional2 = 0) const override;
    //int CalcularCargosAdicionales(int dias, int* cantadicionales) const override;
    void PasosMantenimiento()const override;
};

