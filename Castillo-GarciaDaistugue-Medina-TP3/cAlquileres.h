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
    void CalcularGananciaTotal();
    void OrdenarPorTipoVehiculo(cAlquileres& aux );
    void ListarPorTipoVehiculo();
    string to_stringAlquileres();
    void imprimirAlquileres();

};

