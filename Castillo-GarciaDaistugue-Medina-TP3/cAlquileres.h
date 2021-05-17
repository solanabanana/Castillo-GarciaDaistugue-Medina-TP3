#pragma once
#include "cListaT.h"
#include "cAlquiler.h"
#include <sstream>
#include <string>
using namespace std;
class cAlquileres :
    public cListaT<cAlquiler>
{
private:
    int GananciaTotal;
public:
    cAlquileres();
    ~cAlquileres();
    int CalcularGananciaTotal();
    cAlquileres* OrdenarPorTipoVehiculo(string tipo_vehiculo);
    void ListarPorTipoVehiculo(cAlquileres* alquileres);
};

