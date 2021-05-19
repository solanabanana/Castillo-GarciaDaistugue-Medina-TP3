#include "cCamioneta.h"

cCamioneta::cCamioneta(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento) : cVehiculo(estado, npatente, nchasis, npoliza, tarifabase, capacidadpasajeros, color, ultimomantenimiento)
{
	AlquilerxDia = 1500;
	SillaSeguridad = new cCargoAdicional(eCargoAdicional::SILLAS_SEGURIDAD, 500);
	Portaequipajes = new cCargoAdicional(eCargoAdicional::PORTAEQUIPAJES, 600);
}

cCamioneta::~cCamioneta()
{
	if(SillaSeguridad != NULL) delete SillaSeguridad;
	if (Portaequipajes != NULL)delete Portaequipajes;
}

int cCamioneta::CalcularTarifa(int dias, int* cantadicionales) const
{
	int total = 0;
	total = TarifaBase + AlquilerxDia * dias;//Calculamos la tarifa base
	total += dias * (SillaSeguridad->getPrecio() * cantadicionales[0] + Portaequipajes->getPrecio() * cantadicionales[1]);//Como las camionetas tienen dos posibles cargos adicionales
	return total;//Retornamos la tarifa total
}

void cCamioneta::PasosMantenimiento() const
{//Imprimimos los pasos de mantenimiento
	stringstream ss;
	ss << "Pasos del mantenimiento de las camionetas:" << endl;
	ss << "1) Revision de fluidos. Nivel del aceite y el refrigerante." << endl;
	ss << "2) Revision de la bateria. Cambiarla si es necesario." << endl;
	ss << "3) Estado de los neumaticos. Inflarlos o cambiarlos" << endl;
	ss << "4) Combustible. Por lo menos medio tanque lleno." << endl;
	ss << "5) Limpiar." << endl;
	string s = ss.str();
	cout << s;
}
