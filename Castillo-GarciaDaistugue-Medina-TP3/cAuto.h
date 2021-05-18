#pragma once
#include "cVehiculo.h"
using namespace std;
class cAuto :
    public cVehiculo
{
    cCargoAdicional* SillaSeguridad;
public:
    cAuto(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento);
    ~cAuto();
    int CalcularTarifa(int dias, int* cantadicionales) const override;
    void PasosMantenimiento() const override;
};

