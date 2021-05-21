#include "cEmpresa.h"
#include "cMoto.h"
#include "cAuto.h"
#include "cCamioneta.h"
#include "cCombi.h"

#define NMAX 20

//contructor
cEmpresa::cEmpresa(cListaT<cVehiculo> Vehiculos, cListaT<cCliente> Clientes, cAlquileres Alquileres)
{
	this->vehiculos =  Vehiculos ;
	this->clientes = Clientes;
	this->alquileres = Alquileres;
}
//metodos
void cEmpresa::RealizarMantenimiento(string clave)//Recibe la patente del auto
{

	if (vehiculos[clave]->getEstado() < 75)//si esta en un mal estado

	if (vehiculos[clave]->getEstado() < 75 && vehiculos[clave]->getAlquilado() == true)//Si el estado del vehiculo es menor del 75%

	{
		cMoto* moto = dynamic_cast<cMoto*>(vehiculos[clave]);
		cAuto* automovil = dynamic_cast<cAuto*>(vehiculos[clave]);
		cCamioneta* camioneta = dynamic_cast<cCamioneta*>(vehiculos[clave]);
		cCombi* combi = dynamic_cast<cCombi*>(vehiculos[clave]);
		//realizamos mantenimiento actualizando la fecha
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
		cout << "Este vehiculo esta en buen estado." << endl;//si esta en buen estado no necesia mantenimiento
	}


}
//creamos un alquiler en la empresa
void cEmpresa::Alquiler( string dni, string patente, int adicional1, int adicional2, string inicioreserva, string finalreserva)
{
		cAlquiler* alquiler = NULL;
		cCliente* cliente=clientes[dni];
		cVehiculo* vehiculo = vehiculos[patente];
		int destruccion = 0;
		//verificamos que el vehiculo no este previamente alquilado
		if (vehiculo->getAlquilado() == false)//Si el vehiculo esta disponible
		{
			srand(time(NULL));
			alquiler = new cAlquiler(cliente, vehiculo, adicional1, adicional2);//Creamos un nuevo alquiler
			alquiler->setInicio(inicioreserva);
			alquiler->setFinal(finalreserva);
			alquileres + alquiler;//Lo agregamos a las lista de alquileres
			vehiculo->setAlquilado();//Le cambiamos el estado al vehiculo, esta alquilado ahora
			destruccion = 10 + rand() % 91;//Hacemos un nivel de desctruccion aleatorio entre 10 y 100
			vehiculo->setEstado(destruccion);
		}
}

