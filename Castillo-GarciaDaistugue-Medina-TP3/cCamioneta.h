#pragma once
#include "cVehiculo.h"
using namespace std;
class cCamioneta :
    public cVehiculo//hereda de la clase vehiculo
{
    cCargoAdicional* SillaSeguridad;
    cCargoAdicional* Portaequipajes;
public:
    //contructo y destructor
    cCamioneta(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color);
    ~cCamioneta();
    //metodos
    int CalcularTarifa(int dias, int adicional1, int adicional2) const override;
    void PasosMantenimiento() const override;
};

