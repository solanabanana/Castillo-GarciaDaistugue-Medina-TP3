#pragma once
#include "cAlquileres.h"
#include "cListaT.h"
class cVehiculo;
class cCliente;
using namespace std;

class cEmpresa
{
private: 
	cListaT<cVehiculo>* vehiculos;
	cListaT<cCliente>* clientes;
	cAlquileres* alquileres;
public:
	cEmpresa(cVehiculo* Vehiculos, cCliente* Clientes, cAlquileres* Alquileres);
	//~cEmpresa();
	void RealizarMantenimiento(cVehiculo* vehiculo);
};

