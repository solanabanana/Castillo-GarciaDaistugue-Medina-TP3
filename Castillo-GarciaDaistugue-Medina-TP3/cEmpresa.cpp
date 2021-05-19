#include "cEmpresa.h"
#include"cVehiculo.h"
#include "cFecha.h"


cEmpresa::cEmpresa(cVehiculo* Vehiculos, cCliente* Clientes, cAlquileres* Alquileres)
{
	this->vehiculos =  Vehiculos ;
	this->clientes = Clientes;
	this->alquileres = Alquileres;
}
//ver como se hace CVehiculo
void cEmpresa::RealizarMantenimiento(cVehiculo* vehiculo)
{
	if (vehiculo->Nececita_Mantenimiento == true)
	{
		fecha_ultimo_mantenimiento->setfecha;
	}

}
