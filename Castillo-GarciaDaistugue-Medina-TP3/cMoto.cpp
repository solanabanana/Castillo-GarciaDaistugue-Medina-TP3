#include "cMoto.h"

cMoto::cMoto(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color): cVehiculo(estado, npatente, nchasis, npoliza, tarifabase, capacidadpasajeros, color)
{//constructor de cMoto, llamamos al constructor de cVehiculo
	AlquilerxDia = 1000;//establecemos el precio del alquiler de unha moto por dia
	Casco = new cCargoAdicional(eCargoAdicional::CASCO, 100);//Creamos el cargo adicional casco
}
//destructor
cMoto::~cMoto() { if (Casco != NULL) delete Casco; }

int cMoto::CalcularTarifa(int dias, int adicional1, int adicional2) const
{
	int total = 0;
	total = TarifaBase + AlquilerxDia * dias;//Calculamos la tarifa base
	total += dias * (Casco->getPrecio() * adicional1);//Como las motos solo tienen un cargo adicional, sabemos que la cantidad de cascos alquilados estara en la primera posicion
	return total;//Retornamos cuanto saldrá alquilar la cantidad de cascos los días determinados
}

//int cMoto::CalcularCargosAdicionales(int dias, int* cantadicionales) const
//{
//	int total = 0;
//	total = dias * (Casco->getPrecio() * cantadicionales[0]);//Como las motos solo tienen un cargo adicional, sabemos que la cantidad de cascos alquilados estara en la primera posicion
//	return total;//Retornamos cuanto saldrá alquilar la cantidad de cascos los días determinados
//}

void cMoto::PasosMantenimiento() const
{//Se imprimn los pasos de mantenimiento de las motos
	stringstream ss;
	ss << "Pasos del mantenimiento de las motos:" << endl;
	ss << "1) Comprobar el nivel de aceite del carter. Rellenar el carter de aceite" << endl;
	ss << "2) Comprobar las ruedas. Si estan gastadas, deshinchadas o hinchadas, cambiarlas." << endl;
	ss << "3) Probar la bateria. Recargarla o reponer el liquido." << endl;
	ss << "4) Comprobar las pastillas de freno y la cadena. Tensar la cadena, cambiar el conjunto entero, cambiar las pastillas." << endl;
	ss << "5) Limpiar y lubricar. Utilizar balde y esponja." << endl;
	string s = ss.str();
	cout << s;
}

