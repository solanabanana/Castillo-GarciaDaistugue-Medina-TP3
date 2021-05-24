#include "cEmpresa.h"


//contructor
cEmpresa::cEmpresa(cListaT<cVehiculo>& Vehiculos, cListaT<cCliente>& Clientes, cAlquileres& Alquileres)
{
	vehiculos =  Vehiculos ;
	clientes = Clientes;
	alquileres = Alquileres;
}
cEmpresa::~cEmpresa()
{
}
//metodos
void cEmpresa::RealizarMantenimiento(string clave)//Recibe la patente del auto
{
	if (vehiculos[clave]->getAlquilado() == false)
	{
		if (vehiculos[clave]->getEstado() < 75)//si esta en un mal estado
		{
			vehiculos[clave]->PasosMantenimiento();
			vehiculos[clave]->setMantenimiento();
			vehiculos[clave]->setEstado(100);
		}
		else
		{
			throw new exception("Este vehiculo esta en buen estado.");//si esta en buen estado no necesita mantenimiento
		}
	}
	else throw new exception("Este vehiculo esta alquilado, no se puede realizar su mantenimiento");
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
			vehiculo->setEstado(100 - destruccion);
		}
		else
		{
			throw new exception("No se pudo alquilar, el vehiculo ya estaba alquilado");
		}
}

void cEmpresa::CalcularGananciaTotal()
{
	alquileres.CalcularGananciaTotal();
}

void cEmpresa::ImprimirAlquileres()
{
	alquileres.imprimirAlquileres();
}

void cEmpresa::ImprimirAlquileresOrdenados()
{
	alquileres.ListarPorTipoVehiculo();
}

void cEmpresa::EntregaDeVehiculo(string patente)
{
	//Aca simulamos la entrega de un vehiculo que estaba alquilado, podríamos quitamos al cliente
	//que alquilo al vehiculo con la patente recibida de la lista de clientes.
	vehiculos[patente]->setAlquilado();//Liberamos el vehiculo
	string DNI;
	for (unsigned int i = 0; i < alquileres.CA; ++i)
	{
		if (alquileres[i]->getPatente() == patente)
		{
			DNI = alquileres[i]->getClienteDNI();
		}
	}
	clientes.QuitarObjeto(DNI);//Quitamos al cliente de la lista
}

