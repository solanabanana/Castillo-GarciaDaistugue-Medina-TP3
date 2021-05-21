#pragma once
#include <time.h>
using namespace std;
class cFecha
{
public:
	int Dia;
	int Mes;
	int Anio;
	//cFecha(int dia, int mes, int anio);//Revisar las definiciones de variables const pq me olvide como hacerlo
	~cFecha() {}
	void setFecha(int dia, int mes, int anio);//creo cpp?
	void setMantenimiento();
};
//constructor que no resulto ser necesario ya que es como el setter
//cFecha::cFecha(int dia, int mes, int anio)
//{
//	this->Dia = dia;
//	this->Mes = mes;
//	this->Anio = anio;
//}
//setter de fecha
void cFecha::setFecha(int dia, int mes, int anio)
{
	Dia = dia;
	Mes = mes;
	Anio = anio;

}
//setter de actualizar fecha de manteniiento
void cFecha::setMantenimiento()
{
	time_t t = time(0);
	tm* now = localtime(&t);
	setFecha(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);
}
