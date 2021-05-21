#include "cVehiculo.h"


cVehiculo::cVehiculo(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color) : Npatente(npatente), Nchasis(nchasis), Npoliza(npoliza), TarifaBase(tarifabase), CapacidadPasajeros(capacidadpasajeros)
{
	this->Color = color;
	this->UltimoMantenimiento = NULL;
	Alquilado = false;
}

cVehiculo::~cVehiculo(){}
string cVehiculo::getClave()
{
	return to_string(Npatente);
}
int cVehiculo::getEstado()
{
	return Estado;
}
void cVehiculo::setMantenimiento()
{
	UltimoMantenimiento->setMantenimiento();
}
bool cVehiculo::getAlquilado()
{
	return Alquilado;
}
void cVehiculo::setAlquilado()
{
	if (!Alquilado) Alquilado = true;
	if (Alquilado) Alquilado = false;
}
ostream& operator<<(ostream& os, const cVehiculo& vehiculo)//operator imprimir
{
	os << "Estado: " << vehiculo.Estado << endl;
	os << "Patente: " << vehiculo.Npatente << endl;
	os << "Chasis: " << vehiculo.Nchasis << endl;
	os << "Poliza: " << vehiculo.Npoliza << endl;
	os << "Tarifa base: " << vehiculo.TarifaBase << endl;
	os << "Cantidad de pasajeros: " << vehiculo.CapacidadPasajeros << endl;
	os << "Color: " << vehiculo.Color << endl;
	os << "Ultimo Mantenimiento: " << vehiculo.UltimoMantenimiento->Dia << "/" << vehiculo.UltimoMantenimiento->Mes << "/" << vehiculo.UltimoMantenimiento->Anio << endl;
	return os;
}
