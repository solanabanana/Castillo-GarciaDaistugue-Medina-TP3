#include "cAlquiler.h"
//constructor y destructor 
cAlquiler::cAlquiler(cCliente* cliente, cVehiculo* vehiculo, int adicional1, int adicional2)
{
	Cliente = cliente;
	Vehiculo = vehiculo;
	Adicional1 = adicional1;
	Adicional2 = adicional2;
	InicioReserva = new cFecha();
	FinalReserva = new cFecha();
	MontoTotal = 0;
}

cAlquiler::~cAlquiler()
{
	if (Cliente != NULL) delete Cliente;
	if (Vehiculo != NULL) delete Vehiculo;
	if (InicioReserva != NULL) delete InicioReserva;
	if (FinalReserva != NULL) delete FinalReserva;
}

int cAlquiler::CalcularMontoTotal()
{
	int var_diasAlquiler, tarifa = 0;
	var_diasAlquiler = CalcularDiasReserva();
	//calculamos la tarifa total dependiendo el tipo de vehiculo alquolado
	if (EsMoto())
	{
		cMoto* moto = dynamic_cast<cMoto*>(Vehiculo);
		tarifa = moto->CalcularTarifa(var_diasAlquiler, Adicional1, Adicional2);

	}
	if (EsAuto())
	{
		cAuto* automovil = dynamic_cast<cAuto*>(Vehiculo);
		tarifa = automovil->CalcularTarifa(var_diasAlquiler, Adicional1, Adicional2);
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

	MontoTotal = tarifa;
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
//setters y getters
void cAlquiler::setInicio(string fecha)
{
	string dia, mes, anio;
	int init = 0;
	int end = 0;
	end = fecha.find("/", init);
	dia = fecha.substr(init, end - init);
	init = end + 1;
	end = fecha.find("/", init);
	mes = fecha.substr(init, end - init);
	init = end + 1;
	anio = fecha.substr(init, sizeof(fecha) - init);
	InicioReserva->setFecha(stoi(dia), stoi(mes), stoi(anio));

}

void cAlquiler::setFinal(string fecha)
{
	string dia, mes, anio;
	int init = 0;
	int end = 0;
	end = fecha.find("/", init);
	dia = fecha.substr(init, end - init);
	init = end + 1;
	end = fecha.find("/", init);
	mes = fecha.substr(init, end - init);
	init = end + 1;
	anio = fecha.substr(init, sizeof(fecha) - init);
	FinalReserva->setFecha(stoi(dia), stoi(mes), stoi(anio));
}
string cAlquiler::getPatente()
{
	return Vehiculo->getClave();
}
string cAlquiler::getClienteDNI()
{
	return Cliente->getClave();
}
//metodos que nos ayudan a saber el tipo de veiculo alquilado
bool cAlquiler::EsMoto()
{
	cMoto* moto = dynamic_cast<cMoto*> (Vehiculo);
	bool bool_Moto;

	if (moto != NULL)
	{
		bool_Moto = true;
	}
	else bool_Moto = false;
	return bool_Moto;
}

bool cAlquiler::EsAuto()
{
	cAuto* Auto = dynamic_cast<cAuto*> (Vehiculo);
	bool bool_Auto;

	if (Auto != NULL)
	{
		bool_Auto = true;
	} else bool_Auto = false;
	return bool_Auto;
}

bool cAlquiler::EsCamioneta()
{
	cCamioneta* Camioneta = dynamic_cast<cCamioneta*> (Vehiculo);
	bool bool_Camioneta;

	if (Camioneta != NULL)
	{
		bool_Camioneta = true;
	} else bool_Camioneta = false;
	return bool_Camioneta;
}

bool cAlquiler::EsCombi()
{
	cCombi* Combi = dynamic_cast<cCombi*> (Vehiculo);
	bool bool_Combi;

	if (Combi != NULL)
	{
		bool_Combi = true;
	} else bool_Combi = false;
	return bool_Combi;
}
//to string e imprmir 
string cAlquiler::to_stringAlquiler()
{
	stringstream ss;

	ss << Cliente->to_stringCliente() << endl;
	ss << "Vehiculo: " << Vehiculo << endl;
	ss << "Inicio de incio de reserva del vehiculo: " << InicioReserva->to_stringFecha() << endl;
	ss << "Final de incio de reserva del vehiculo: " << FinalReserva->to_stringFecha() << endl;
	ss << "Monto total: " << MontoTotal << endl;
	return ss.str();

}

void cAlquiler::imprimirAlquiler()
{
	string imprimir2 = to_stringAlquiler();
	cout << imprimir2;

}
