#pragma once
#include "cVehiculo.h"
using namespace std;
class cMoto :
    public cVehiculo
{
    cCargoAdicional* Casco;
public:
    cMoto(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color);
    ~cMoto();

    int CalcularTarifa(int dias, int* cantadicionales) const override;
    //int CalcularCargosAdicionales(int dias, int* cantadicionales) const override;
    void PasosMantenimiento()const override;
};

