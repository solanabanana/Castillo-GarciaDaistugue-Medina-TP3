#pragma once
#include "cVehiculo.h"
using namespace std;
class cCombi :
    public cVehiculo
{
    cCargoAdicional* SillaSeguridad;
    cCargoAdicional* AsientoRebatible;
public:
    cCombi(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color);
    ~cCombi();
    int CalcularTarifa(int dias, int adicional1, int adicional2) const override;
    void PasosMantenimiento() const override;
};

