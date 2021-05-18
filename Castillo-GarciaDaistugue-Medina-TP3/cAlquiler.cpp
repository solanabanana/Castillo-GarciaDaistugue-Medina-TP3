#include "cAlquiler.h"

cAlquiler::cAlquiler(cCliente* cliente, cVehiculo* vehiculo, int* cantadicionales, cFecha inicioreserva, cFecha finalreserva)
{
	Cliente = cliente;
	Vehiculo = vehiculo;
	cantElementosAdicionales = cantadicionales;
	MontoTotal = 0;


}

cAlquiler::~cAlquiler()
{
}

int cAlquiler::CalcularMontoTotal()
{


	return 0;
}

int cAlquiler::CalcularDiasReserva()
{
	//inicializo 3 variables para calcular la diferencia entre las dos fechas
	int dias1, dias2, diasreserva;
	//calculamos los dias desde el inicio de la era hasta esa fecha en las dos ocasiones y luego se restan 
	dias1 = ((InicioReserva.Anio * 365) + ((InicioReserva.Mes - 1) * 30) + InicioReserva.Dia);
	dias2 = ((FinalReserva.Anio * 365) + ((FinalReserva.Mes - 1) * 30) + FinalReserva.Dia);

	diasreserva = dias2 - dias1;

	return diasreserva;
}
