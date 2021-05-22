#pragma once
#include "cMoto.h"
#include "cAuto.h"
#include "cCamioneta.h"
#include "cCombi.h"
#include "cCliente.h"
#include "cFecha.h"
using namespace std;
class cAlquiler
{
private:
	cCliente* Cliente;
	cVehiculo* Vehiculo;//cuando creamos un alquiler, usamos dynamic cast aca
	int Adicional1;
	int Adicional2;
	cFecha* InicioReserva;
	cFecha* FinalReserva;
	int MontoTotal;

public:
	cAlquiler(cCliente* cliente, cVehiculo* vehiculo, int adicional1, int adicional2);//Monto total lo inicializamos en cero en la definicion del constructor
	~cAlquiler();
	int CalcularMontoTotal();
	int CalcularDiasReserva();
	void setInicio(string fecha);
	void setFinal(string fecha);
	//-------Verifica el tipo de vehiculo---------//
	bool EsMoto();
	bool EsAuto();
	bool EsCamioneta();
	bool EsCombi();

	string to_stringAlquiler();
	void imprimirAlquiler();
};

