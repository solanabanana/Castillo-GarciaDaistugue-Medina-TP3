#pragma once
#include "cVehiculo.h"
using namespace std;
class cMoto :
    public cVehiculo
{
public:
    cMoto(int estado, int npatente, int nchasis, int npoliza, int alquilerxdia, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento, cCargoAdicional** cargosadicionales);
    ~cMoto();
    int CalcularCargosAdicionales();
    void PasosMantenimiento();
};

