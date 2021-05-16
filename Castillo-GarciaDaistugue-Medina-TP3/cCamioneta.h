#pragma once
#include "cVehiculo.h"
using namespace std;
class cCamioneta :
    public cVehiculo
{
public:
    cCamioneta(int estado, int npatente, int nchasis, int npoliza, int alquilerxdia, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento, cCargoAdicional** cargosadicionales);
    ~cCamioneta();
    int CalcularCargosAdicionales();
    void PasosMantenimiento();
};

