#include "cAlquiler.h"

cAlquiler::cAlquiler(cCliente* cliente, cVehiculo* vehiculo, int adicional1, int adicional2)
{
	Cliente = cliente;
	Vehiculo = vehiculo;
	Adicional1 = adicional1;
	Adicional2 = adicional2;
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
	dias1 = ((InicioReserva->Anio * 365) + ((InicioReserva->Mes - 1) * 30) + InicioReserva->Dia);
	dias2 = ((FinalReserva->Anio * 365) + ((FinalReserva->Mes - 1) * 30) + FinalReserva->Dia);

	diasreserva = dias2 - dias1;

	return diasreserva;
}

void cAlquiler::setInicio(string fecha)
{
	string dia, mes, anio;
	int init = 0;
	int end = 0;
	end = fecha.find("/", init);
	dia.substr(init, end - init);
	init = end + 1;
	end = fecha.find("/", init);
	mes.substr(init, end - init);
	init = end + 1;
	anio.substr(init, sizeof(fecha) - init);
	InicioReserva->setFecha(stoi(dia), stoi(mes), stoi(anio));

}

void cAlquiler::setFinal(string fecha)
{
	string dia, mes, anio;
	int init = 0;
	int end = 0;
	end = fecha.find("/", init);
	dia.substr(init, end - init);
	init = end + 1;
	end = fecha.find("/", init);
	mes.substr(init, end - init);
	init = end + 1;
	anio.substr(init, sizeof(fecha) - init);
	FinalReserva->setFecha(stoi(dia), stoi(mes), stoi(anio));
}
