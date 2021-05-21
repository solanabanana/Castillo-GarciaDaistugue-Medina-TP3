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
	//atributos
	cListaT<cVehiculo> vehiculos;
	cListaT<cCliente> clientes;
	cAlquileres alquileres;
public:
	//contructor
	cEmpresa(cListaT<cVehiculo> Vehiculos, cListaT<cCliente> Clientes, cAlquileres Alquileres);
	//~cEmpresa();
	//metodos
	void RealizarMantenimiento(string clave);
	void Alquiler(string dni, string patente, int adicional1, int adicional2, string inicioreserva, string finalreserva);
};

