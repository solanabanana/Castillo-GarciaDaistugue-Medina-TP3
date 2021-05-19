#pragma once
#include <time.h>
using namespace std;
class cFecha
{
public:
	int Dia;
	int Mes;
	int Anio;
	cFecha(int dia, int mes, int anio) : Dia(dia), Mes(mes), Anio(anio) {}//Revisar las definiciones de variables const pq me olvide como hacerlo
	~cFecha() {}
	void setFecha(int dia, int mes, int anio);//creo cpp?
};

void cFecha::setFecha(int dia, int mes, int anio)
{
	this->Dia=dia;
	this->Mes = mes;
	this->Anio - anio;

}