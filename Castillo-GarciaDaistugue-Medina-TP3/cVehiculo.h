#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "cFecha.h"
#include "cCargoAdicional.h"

using namespace std;
class cVehiculo
{
protected://Atributos y métodos protegidos para que las clases hijas puedan acceder a ellos
	int Estado;
	const int Npatente;
	const int Nchasis;
	const int Npoliza;
	int AlquilerxDia;
	const int TarifaBase;//EN DUDA SI EXISTE!!!!!
	const int CapacidadPasajeros;
	string Color;
	cFecha UltimoMantenimiento;

	virtual int CalcularTarifa(int dias, int* cantadicionales) const = 0;
	//virtual int CalcularCargosAdicionales(int dias, int* cantadicionales) const = 0;
	virtual void PasosMantenimiento() const = 0;


public: 
	cVehiculo(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color, cFecha ultimomantenimiento);
	~cVehiculo();
};

