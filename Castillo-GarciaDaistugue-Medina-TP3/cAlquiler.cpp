#include "cAlquiler.h"

cAlquiler::cAlquiler(cCliente* cliente, cVehiculo* vehiculo, int adicional1, int adicional2, cFecha* inicioreserva, cFecha* finalreserva)
{

	Cliente = cliente;
	Vehiculo = vehiculo;
	Adicional1 = adicional1;
	Adicional2 = adicional2;
	MontoTotal = 0;
	InicioReserva = inicioreserva;
	FinalReserva = finalreserva;

}

cAlquiler::~cAlquiler()
{

}

bool cAlquiler::EsMoto()
{
	cMoto* moto = dynamic_cast<cMoto*> (Vehiculo);
	bool bool_Moto;

	if (moto != NULL)
	{
		bool_Moto = true;
	}

	bool_Moto = false;

	delete moto;

	return bool_Moto;
}

bool cAlquiler::EsAuto()
{
	cAuto* Auto = dynamic_cast<cAuto*> (Vehiculo);
	bool bool_Auto;

	if (Auto != NULL)
	{
		bool_Auto = true;
	}

	bool_Auto = false;

	delete Auto;

	return bool_Auto;
}

bool cAlquiler::EsCamioneta()
{
	cCamioneta* Camioneta = dynamic_cast<cCamioneta*> (Vehiculo);
	bool bool_Camioneta;

	if (Camioneta != NULL)
	{
		bool_Camioneta = true;
	}
	bool_Camioneta = false;

	delete Camioneta;

	return bool_Camioneta;
}

bool cAlquiler::EsCombi()
{
	cCombi* Combi = dynamic_cast<cCombi*> (Vehiculo);
	bool bool_Combi;

	if (Combi != NULL)
	{
		bool_Combi = true;
	}

	bool_Combi = false;

	delete Combi;

	return bool_Combi;
}

int cAlquiler::Monto_Total()
{
	int var_diasAlquiler, tarifa = 0;
	var_diasAlquiler = CalcularDiasReserva();
	//----------------------------------------------------------------------------
	if (EsMoto())
	{
		cMoto* aux = dynamic_cast<cMoto*> (Vehiculo);
		tarifa = aux->CalcularTarifa(var_diasAlquiler, Adicional1, Adicional2);

	}
	if (EsAuto())
	{
		cAuto* p_auto = dynamic_cast<cAuto*> (Vehiculo);
		tarifa = p_auto->CalcularTarifa(var_diasAlquiler, Adicional1, Adicional2);
	}
	if (EsCamioneta())
	{
		cCamioneta* p_camioneta = dynamic_cast<cCamioneta*> (Vehiculo);
		tarifa = p_camioneta->CalcularTarifa(var_diasAlquiler, Adicional1, Adicional2);
	}
	if (EsCombi())
	{
		cCombi* p_combi = dynamic_cast<cCombi*> (Vehiculo);
		tarifa = p_combi->CalcularTarifa(var_diasAlquiler, Adicional1, Adicional2);
	}
	//----------------------------------------------------------------------------------------------


	return tarifa;
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

string cAlquiler::to_stringAlquiler()
{
	stringstream ss;
	ss << "Cliente" << Cliente->to_strigCliente() << endl;;
	ss << "Vehiculo: " << Vehiculo << endl;;
	ss << "Adicional: " << Adicional1 << endl;
	ss << "Adicional: " << Adicional2 << endl;;
	ss << "Inicio de incio de reserva del vehiculo: " << InicioReserva->to_stringfecha() << endl;
	ss << "Final de incio de reserva del vehiculo: " << FinalReserva->to_stringfecha() << endl;
	ss << "Monto total: " << Monto_Total() << endl;
	return ss.str();
}

void cAlquiler::imprimirAlquiler()
{
	ss imprimir2 = to_stringAlquiler();
	cout << imprimirAlquiler;
}