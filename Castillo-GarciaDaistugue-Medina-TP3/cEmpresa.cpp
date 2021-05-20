#include "cEmpresa.h"
#include"cVehiculo.h"
#include "cMoto.h"
#include "cAuto.h"
#include "cCamioneta.h"
#include "cCombi.h"
#include "cFecha.h"


cEmpresa::cEmpresa(cListaT<cVehiculo> Vehiculos, cListaT<cCliente> Clientes, cAlquileres* Alquileres)
{
	this->vehiculos =  Vehiculos ;
	this->clientes = Clientes;
	this->alquileres = Alquileres;
}
//ver como se hace CVehiculo
void cEmpresa::RealizarMantenimiento(string clave)//Recibe la patente del auto
{
	if (vehiculos[clave]->getEstado() < 75)
	{
		cMoto* moto = dynamic_cast<cMoto*>(vehiculos[clave]);
		cAuto* automovil = dynamic_cast<cAuto*>(vehiculos[clave]);
		cCamioneta* camioneta = dynamic_cast<cCamioneta*>(vehiculos[clave]);
		cCombi* combi = dynamic_cast<cCombi*>(vehiculos[clave]);
		if (moto != NULL)
		{
			moto->PasosMantenimiento();
			moto->setMantenimiento();
		}
		if (automovil != NULL)
		{
			automovil->PasosMantenimiento();
			automovil->setMantenimiento();
		}
		if (camioneta != NULL)
		{
			camioneta->PasosMantenimiento();
			camioneta->setMantenimiento();
		}
		if (combi != NULL)
		{
			combi->PasosMantenimiento();
			combi->setMantenimiento();
		}
	}
	else
	{
		cout << "Este vehiculo esta en buen estado.";
	}


}
