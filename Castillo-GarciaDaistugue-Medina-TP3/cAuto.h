#pragma once
#include "cVehiculo.h"
using namespace std;
class cAuto :
    public cVehiculo
{
    cCargoAdicional* SillaSeguridad;
public:
    cAuto(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color);
    ~cAuto();
    int CalcularTarifa(int dias, int adicional1, int adicional2) const override;
    void PasosMantenimiento() const override;
};

