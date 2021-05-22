#include "cAlquileres.h"

cAlquileres::cAlquileres(int Ganacia_Total)
{
	this->Ganancia_Total = Ganacia_Total;
}

cAlquileres::~cAlquileres()
{
}

int cAlquileres::CalcularGananciaTotal()
{
	for (int i = 0; i < CA; i++)
	{
		Ganancia_Total += lista[i]->Monto_Total();
	}
	return Ganancia_Total;
}

cAlquileres* cAlquileres::ListarPorTipoVehiculo()
{
	/*cAlquileres* aux = new cAlquileres * [CA];


	for (int i = 0; i < CA; i++)
	{
		if (EsMoto(lista[i]))
		{
			aux + lista[i];

		}
	}

	for (int i = 0; i < CA; i++)
	{
		if (EsAuto(lista[i]))
		{
			aux + lista[i];

		}
	}

	for (int i = 0; i < CA; i++)
	{
		if (EsCamioneta(lista[i]))
		{
			aux + lista[i];

		}
	}


	for (int i = 0; i < CA; i++)
	{
		if (EsCombi(lista[i]))
		{
			aux + lista[i];

		}
	}
	return aux;
}*/

bool cAlquileres::EsMoto(cVehiculo* TIPO)
{
	cMoto* moto = dynamic_cast<cMoto*> (TIPO);
	bool bool_Moto;

	if (moto != NULL)
	{
		bool_Moto = true;
	}
	bool_Moto = false;

	delete moto;

	return bool_Moto;
}

bool cAlquileres::EsAuto(cVehiculo* TIPO)
{
	cAuto* Auto = dynamic_cast<cAuto*> (TIPO);
	bool bool_Auto;

	if (Auto != NULL)
	{
		bool_Auto = true;
	}

	bool_Auto = false;

	delete Auto;

	return bool_Auto;
}

bool cAlquileres::EsCamioneta(cVehiculo* TIPO)
{
	cCamioneta* Camioneta = dynamic_cast<cCamioneta*> (TIPO);
	bool bool_Camioneta;

	if (Camioneta != NULL)
	{
		bool_Camioneta = true;
	}
	bool_Camioneta = false;

	delete Camioneta;

	return bool_Camioneta;
}

bool cAlquileres::EsCombi(cVehiculo* TIPO)
{
	cCombi* Combi = dynamic_cast<cCombi*> (TIPO);
	bool bool_Combi;

	if (Combi != NULL)
	{
		bool_Combi = true;
	}

	bool_Combi = false;

	delete Combi;

	return bool_Combi;
}

string cAlquileres::to_stringAlquileres()
{
	stringstream ss;
	ss << "ALQUILERES: " << endl;

	for (int i = 0; i < CA; i++)
	{
		ss << lista[i]->to_stringAlquiler();
	}
	return ss.str();
}

void cAlquileres::imprimir()
{
	string imprimir = to_stringAlquileres();
	cout << imprimir;
}

