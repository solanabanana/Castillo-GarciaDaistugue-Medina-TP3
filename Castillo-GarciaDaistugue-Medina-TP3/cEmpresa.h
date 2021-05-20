#pragma once
#include "cAlquileres.h"
#include "cListaT.h"
#include"cVehiculo.h"


class cVehiculo;
class cCliente;
using namespace std;

class cEmpresa
{
private: 
	cListaT<cVehiculo> vehiculos;
	cListaT<cCliente> clientes;
	cAlquileres* alquileres;
public:
	cEmpresa(cListaT<cVehiculo> Vehiculos, cListaT<cCliente> Clientes, cAlquileres* Alquileres);
	//~cEmpresa();
	void RealizarMantenimiento(string clave);
};

