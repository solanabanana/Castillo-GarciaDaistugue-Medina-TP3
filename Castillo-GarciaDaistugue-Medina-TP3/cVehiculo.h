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
	const int TarifaBase;
	const int CapacidadPasajeros;
	string Color;
	cFecha* UltimoMantenimiento;
	bool Alquilado;

	//virtual int CalcularCargosAdicionales(int dias, int* cantadicionales) const = 0;
	


public: 
	//contrsuctor y destructor
	cVehiculo(int estado, int npatente, int nchasis, int npoliza, int tarifabase, int capacidadpasajeros, string color);
	virtual ~cVehiculo(void){};
	//metodos, getters y setters
	virtual int CalcularTarifa(int dias, int adicional1, int adicional2) const = 0;
	string getClave() const;
	void setEstado(int nuevo);
	int getEstado() const;
	virtual void PasosMantenimiento() const = 0;
	void setMantenimiento();
	bool getAlquilado() const;
	void setAlquilado();
	string getChasis() const;
	string getPoliza() const;
	string getTarifaBase() const;
	string getCapacidadPasajeros() const;
	string getColor() const;
	string getUltimoMantenimiento() const;

	/*string  to_stringVehiculo() const;
	void ImprimirVehiculo() const;*/
};
//sobrecarga del operador
ostream& operator<<(ostream& os, const cVehiculo* vehiculo);


