#include "cVehiculo.h"

//constructor
cVehiculo::cVehiculo(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color) : Npatente(npatente), Nchasis(nchasis), Npoliza(npoliza), TarifaBase(tarifabase), CapacidadPasajeros(capacidadpasajeros)
{
	Estado = estado;
	Color = color;
	UltimoMantenimiento = new cFecha();
	Alquilado = false;
}
//getters y setters
string cVehiculo::getClave() const
{
	return to_string(Npatente);
}
void cVehiculo::setEstado(int nuevo)
{
	Estado = nuevo;
}
int cVehiculo::getEstado() const
{
	return Estado;
}
void cVehiculo::setMantenimiento()
{
	UltimoMantenimiento->setMantenimiento();
}
bool cVehiculo::getAlquilado() const
{
	return Alquilado;
}
void cVehiculo::setAlquilado()
{
	if (Alquilado == false) Alquilado = true;
	else Alquilado = false;
}
string cVehiculo::getChasis() const
{
	return to_string(Nchasis);
}
string cVehiculo::getPoliza() const
{
	return to_string(Npoliza);
}
string cVehiculo::getTarifaBase() const
{
	return to_string(TarifaBase);
}
string cVehiculo::getCapacidadPasajeros() const
{
	return to_string(CapacidadPasajeros);
}
string cVehiculo::getColor() const
{
	return Color;
}
string cVehiculo::getUltimoMantenimiento() const
{
	string s;
	if (UltimoMantenimiento != NULL) s = UltimoMantenimiento->to_stringFecha();
	else s = "Todavia no se realizo ningun mantenimiento";

	return s;
}
//sobrecarga del operador
ostream& operator << (ostream& os, const cVehiculo* vehiculo)
{
	os << "Estado: " << to_string(vehiculo->getEstado()) << "%" << endl;
	os << "Patente: " << vehiculo->getClave() << endl;
	os << "Poliza: " << vehiculo->getPoliza() << endl;
	os << "Chasis: " << vehiculo->getChasis() << endl;
	os << "Tarifa base: " << vehiculo->getTarifaBase() << endl;
	os << "Capacidad de pasajeros: " << vehiculo->getCapacidadPasajeros() << endl;
	os << "Color: " << vehiculo->getColor() << endl;
	os << "Ultimo mantenimiento: " << vehiculo->getUltimoMantenimiento() << endl;
	os << "Esta alquilado? ";
	if (!vehiculo->getAlquilado()) os << "No" << endl;
	else os << "Si" << endl;
	return os;
}

//string cVehiculo::to_stringVehiculo() const
//{
//	stringstream ss;
//	ss << "Estado:" << to_string(Estado) << "%" << endl;;
//	ss << "Patente: " << to_string(Npatente) << endl;;
//	ss << "Poliza: " << to_string(Npoliza) << endl;
//	ss << "# Chasis: " << to_string(Nchasis) << endl;
//	ss << "Tarifa base: " << to_string(TarifaBase) << "$" << endl;
//	ss << "Cantidad de pasajeros: " << to_string(CapacidadPasajeros) << endl;
//	ss << "Color: " << Color << endl;
//	ss << "Ultimo Mantenimiento: " << UltimoMantenimiento->Dia << "/" << UltimoMantenimiento->Mes << "/" << UltimoMantenimiento->Anio << endl;
//	return ss.str();
//}
//void cVehiculo::ImprimirVehiculo() const
//{
//	string a_imprimir = to_stringVehiculo();
//}


