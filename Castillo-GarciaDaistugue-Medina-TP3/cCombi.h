#pragma once
#include "cVehiculo.h"
using namespace std;
class cCombi :
    public cVehiculo
{
    cCargoAdicional* SillaSeguridad;
    cCargoAdicional* AsientoRebatible;
public:
    cCombi(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento);
    ~cCombi();
    int CalcularTarifa(int dias, int* cantadicionales) const override;
    void PasosMantenimiento() const override;
};

