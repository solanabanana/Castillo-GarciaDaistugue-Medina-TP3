#pragma once
using namespace std;
class cFecha
{
public:
	const int Dia;
	const int Mes;
	const int Anio;

	cFecha(int dia, int mes, int anio) : Dia(dia), Mes(mes), Anio(anio) {}//Revisar las definiciones de variables const pq me olvide como hacerlo
	~cFecha() {}
};

