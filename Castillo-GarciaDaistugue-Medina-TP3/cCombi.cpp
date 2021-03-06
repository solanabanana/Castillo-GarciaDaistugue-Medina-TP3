#include "cCombi.h"
//constructor y destructor
cCombi::cCombi(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color): cVehiculo(estado, npatente, nchasis, npoliza, tarifabase, capacidadpasajeros, color)
{
	AlquilerxDia = 2000;
	SillaSeguridad = new cCargoAdicional(eCargoAdicional::SILLAS_SEGURIDAD, 500);
	AsientoRebatible = new cCargoAdicional(eCargoAdicional::ASIENTO_REBATIBLE, 400);
}

cCombi::~cCombi(){
	if (SillaSeguridad != NULL) delete SillaSeguridad;
	if (AsientoRebatible != NULL) delete AsientoRebatible;
}
//implementacion de metodos
int cCombi::CalcularTarifa(int dias, int adicional1, int adicional2) const
{
	int total = 0;
	total = TarifaBase + AlquilerxDia * dias;//Calculamos la tarifa base
	total += dias * (SillaSeguridad->getPrecio() * adicional1 + AsientoRebatible->getPrecio() * adicional2);
	return total;
}

void cCombi::PasosMantenimiento() const//imprimimos pasos
{
	stringstream ss;
	ss << "Pasos del mantenimiento de las combis:" << endl;
	ss << "1) Revision estructural. Lavar. Revisar si tiene golpes, abolladuras y rayones." << endl;
	ss << "2) Inspeccion del interior. Revisar cinturones de seguridad, ventanillas, escalera y puertas." << endl;
	ss << "3) Revision mecanica. Revisar estado de los neumaticos, los filtros de aceite, de aire, de combustible, el sistema de frenos, su sistema de amortiguación y sus sistemas de escape." << endl;
	string s = ss.str();
	cout << s;
}