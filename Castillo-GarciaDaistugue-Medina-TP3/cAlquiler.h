#pragma once
#include "cAuto.h"
#include "cMoto.h"
#include "cCombi.h"
#include "cCamioneta.h"
#include "cCliente.h"
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
	string getPatente();
	string getClienteDNI();
	//-------Verifica el tipo de vehiculo---------//
	bool EsMoto();
	bool EsAuto();
	bool EsCamioneta();
	bool EsCombi();

	string to_stringAlquiler();
	void imprimirAlquiler();
};

