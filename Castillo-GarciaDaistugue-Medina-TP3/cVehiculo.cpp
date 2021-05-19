#include "cVehiculo.h"


cVehiculo::cVehiculo(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento) : Npatente(npatente), Nchasis(nchasis), Npoliza(npoliza), TarifaBase(tarifabase), CapacidadPasajeros(capacidadpasajeros)
{
	this->Color = color;
	this->UltimoMantenimiento = ultimomantenimiento;
}

cVehiculo::~cVehiculo(){}
