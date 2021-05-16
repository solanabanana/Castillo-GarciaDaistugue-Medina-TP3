#pragma once
#include "cVehiculo.h"
using namespace std;
class cAuto :
    public cVehiculo
{
public:
    cAuto(int estado, int npatente, int nchasis, int npoliza, int alquilerxdia, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento, cCargoAdicional** cargosadicionales);
    ~cAuto();
    int CalcularCargosAdicionales();
    void PasosMantenimiento();
};

