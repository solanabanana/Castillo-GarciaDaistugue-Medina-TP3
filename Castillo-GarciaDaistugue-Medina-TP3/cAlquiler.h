#pragma once
#include "cVehiculo.h"
#include"cMoto.h"
#include"cAuto.h"
#include"cCamioneta.h"
#include"cCombi.h"
#include "cCliente.h"
#include "cAlquileres.h"
#include"cListaT.h"
#include "cFecha.h"
#include<string>
#include<sstream>
using namespace std;

class cAlquiler
{
protected:
	cCliente* Cliente;
	cVehiculo* Vehiculo;           //cuando creamos un alquiler, usamos dynamic cast aca
	int Adicional1;
	int Adicional2;
	cFecha* InicioReserva;
	cFecha* FinalReserva;
	int MontoTotal;


public:
	//---Constructor y Destructor----//
	cAlquiler(cCliente* cliente, cVehiculo* vehiculo, int adicional1, int adicional2, cFecha* inicioreserva, cFecha* finalreserva);  //Monto total lo inicializamos en cero en la definicion del constructor
	~cAlquiler();

	//-----Calcula dias de reserva---//
	int CalcularDiasReserva();
	//-------Verifica el tipo de vehiculo---------//
	bool EsMoto();
	bool EsAuto();
	bool EsCamioneta();
	bool EsCombi();
	//-----Calcula el monto Total del alquiler-----//
	int Monto_Total();
	//-----funciones de fecha---//
	void setInicio(string fecha);
	void setFinal(string fecha);
	//-----Imprime----//
	string to_stringAlquiler();
	void imprimirAlquiler();



};


