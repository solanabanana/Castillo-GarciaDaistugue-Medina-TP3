#include "cAlquileres.h"
//constructor y destructor
cAlquileres::cAlquileres()
{
	GananciaTotal = 0;
}

cAlquileres::~cAlquileres()
{
	
}
//implementacion de metodos
void cAlquileres::CalcularGananciaTotal()
{
	for (unsigned int i = 0; i < CA; i++)
	{
		GananciaTotal += lista[i]->CalcularMontoTotal();
	}
}

void cAlquileres::OrdenarPorTipoVehiculo(cAlquileres& aux)
{//for que recorran la lista y ordene por tipo de vehiculo
	for (unsigned int i = 0; i < CA; i++)
	{
		if (lista[i]->EsMoto())
		{
			aux + lista[i];

		}
	}

	for (unsigned int i = 0; i < CA; i++)
	{
		if (lista[i]->EsAuto())
		{
			aux + lista[i];

		}
	}

	for (unsigned int i = 0; i < CA; i++)
	{
		if (lista[i]->EsCamioneta())
		{
			aux + lista[i];

		}
	}


	for (unsigned int i = 0; i < CA; i++)
	{
		if (lista[i]->EsCombi())
		{
			aux + lista[i];

		}
	}
}
//listamos 
void cAlquileres::ListarPorTipoVehiculo()
{
	cAlquileres aux;
	OrdenarPorTipoVehiculo(aux);
	for (unsigned int i = 0; i < CA; ++i)
	{
		aux[i]->imprimirAlquiler();
	}
}
//to string e impmir
string cAlquileres::to_stringAlquileres()
{
	stringstream ss;
	ss << "ALQUILERES: " << endl;

	for (unsigned int i = 0; i < CA; i++)
	{
		ss << lista[i]->to_stringAlquiler();
	}
	ss << "La ganancia total hasta ahora es de: " << to_string(GananciaTotal) << endl;
	return ss.str();
}

void cAlquileres::imprimirAlquileres()
{
	string imprimir = to_stringAlquileres();
	cout << imprimir;
}
