#include "cAuto.h"

cAuto::cAuto(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color) : cVehiculo(estado, npatente, nchasis, npoliza, tarifabase, capacidadpasajeros, color)
{
	AlquilerxDia = 1300;
	SillaSeguridad = new cCargoAdicional(eCargoAdicional::SILLAS_SEGURIDAD, 500);
}

cAuto::~cAuto()
{
	if (SillaSeguridad != NULL) delete SillaSeguridad;
}

int cAuto::CalcularTarifa(int dias, int adicional1, int adicional2) const
{
	int total = 0;
	total = TarifaBase + AlquilerxDia * dias;//Calculamos la tarifa base
	total += dias * (SillaSeguridad->getPrecio() * adicional1);//Como los autos solo tienen un cargo adicional, sabemos que la cantidad de sillas de seg alquiladas estara en adicional1
	return total;//Retornamos cuanto saldrá alquilar la cantidad de cascos los días determinados
}

void cAuto::PasosMantenimiento() const
{
	stringstream ss;
	ss << "Pasos del mantenimiento de los autos:" << endl;
	ss << "1) Triangulo de seguridad. Revisar amortiguadores, frenos y neumaticos" << endl;
	ss << "2) Revisar el limpiaparabrisas." << endl;
	ss << "3) Revisar los filtros de aceite, de aire, de combustible y de habitaculo" << endl;
	ss << "4) Revisar los faros, la correa, el sistema de escape y los catalizadores." << endl;
	ss << "5) Limpiar y lubricar." << endl;
	string s = ss.str();
	cout << s;
}
