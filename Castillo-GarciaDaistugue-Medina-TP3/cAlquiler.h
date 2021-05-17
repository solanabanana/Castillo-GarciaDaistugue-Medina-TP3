#pragma once
#include "cVehiculo.h"
#include "cCliente.h"
#include "cFecha.h"
using namespace std;
class cAlquiler
{
private:
	cCliente* Cliente;
	cVehiculo* Vehiculo;//cuando creamos un alquiler, usamos dynamic cast aca
	int* cantElementosAdicionales;//Habra 1 o 2 cargos adicionales dependiendo del tipo de vehiculo
	cFecha InicioReserva;
	cFecha FinalReserva;
	int MontoTotal;

public:
	cAlquiler(cCliente* cliente, cVehiculo* vehiculo, int* cantadicionales, cFecha inicioreserva, cFecha finalreserva,int Montototal);//Monto total lo inicializamos en cero en la definicion del constructor
	~cAlquiler();
	int CalcularMontoTotal();
	int CalcularDiasReserva();
	string to_string();
	void imprimirAlquiler();
};

