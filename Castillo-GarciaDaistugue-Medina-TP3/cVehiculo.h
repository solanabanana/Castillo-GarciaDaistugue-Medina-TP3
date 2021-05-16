#pragma once
#include <string>
#include "cFecha.h"
#include "cCargoAdicional.h"
using namespace std;
class cVehiculo
{
protected:
	int Estado;
	const int Npatente;
	const int Nchasis;
	const int Npoliza;
	const int AlquilerxDia;
	const int TarifaBase;
	const int CapacidadPasajeros;
	string Color;
	cFecha UltimoMantenimiento;
	cCargoAdicional** CargosAdicionales;

	virtual int CalcularCargosAdicionales();
	virtual void PasosMantenimiento();
	int CalcularTarifa();

public: 
	cVehiculo(int estado, int npatente, int nchasis, int npoliza, int alquilerxdia, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento, cCargoAdicional** cargosadicionales);
};

