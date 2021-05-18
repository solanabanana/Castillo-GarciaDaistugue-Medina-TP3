#include "cCombi.h"

cCombi::cCombi(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento): cVehiculo(estado, npatente, nchasis, npoliza, tarifabase, capacidadpasajeros, color, ultimomantenimiento)
{
	AlquilerxDia = 2000;
	SillaSeguridad = new cCargoAdicional(eCargoAdicional::SILLAS_SEGURIDAD, 500);
	AsientoRebatible = new cCargoAdicional(eCargoAdicional::ASIENTO_REBATIBLE, 400);
}

cCombi::~cCombi(){
	if (SillaSeguridad != NULL) delete SillaSeguridad;
	if (AsientoRebatible != NULL) delete AsientoRebatible;
}

int cCombi::CalcularTarifa(int dias, int* cantadicionales) const
{
	int total = 0;
	total = TarifaBase + AlquilerxDia * dias;//Calculamos la tarifa base
	total += dias * (SillaSeguridad->getPrecio() * cantadicionales[0] + AsientoRebatible->getPrecio() * cantadicionales[1]);
}

void cCombi::PasosMantenimiento() const
{
	stringstream ss;
	ss << "Pasos del mantenimiento de las combis:" << endl;
	ss << "1) Revision estructural. Lavar. Revisar si tiene golpes, abolladuras y rayones." << endl;
	ss << "2) Inspeccion del interior. Revisar cinturones de seguridad, ventanillas, escalera y puertas." << endl;
	ss << "3) Revision mecanica. Revisar estado de los neumaticos, los filtros de aceite, de aire, de combustible, el sistema de frenos, su sistema de amortiguación y sus sistemas de escape." << endl;
	string s = ss.str();
	cout << s;
}
