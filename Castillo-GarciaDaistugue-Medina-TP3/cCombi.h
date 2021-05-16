#pragma once
#include "cVehiculo.h"
using namespaces std;
class cCombi :
    public cVehiculo
{
public:
    cCombi(int estado, int npatente, int nchasis, int npoliza, int alquilerxdia, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento, cCargoAdicional** cargosadicionales);
    ~cCombi();
    int CalcularCargosAdicionales();
    void PasosMantenimiento();
};

