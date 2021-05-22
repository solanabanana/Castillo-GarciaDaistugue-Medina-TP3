#include "cAlquileres.h"

cAlquileres::cAlquileres()
{

}

cAlquileres::~cAlquileres()
{
}

void cAlquileres::CalcularGananciaTotal()
{
	for (unsigned int i = 0; i < CA; i++)
	{
		GananciaTotal += lista[i]->CalcularMontoTotal();
	}
}

cAlquileres cAlquileres::OrdenarPorTipoVehiculo()
{
	cAlquileres aux;
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
	return aux;
}

void cAlquileres::ListarPorTipoVehiculo()
{
	cAlquileres aux = OrdenarPorTipoVehiculo();
	for (unsigned int i = 0; i < CA; ++i)
	{
		aux[i]->imprimirAlquiler();
	}
}

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
