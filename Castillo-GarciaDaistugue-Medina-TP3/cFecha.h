#pragma once
#include <time.h>
using namespace std;
class cFecha
{
public://atributos publicos
	int Dia;
	int Mes;
	int Anio;
	//cFecha(int dia, int mes, int anio);
	//destructor
	~cFecha() {};
	//setters y to string e impimir
	void setFecha(int dia, int mes, int anio);
	void setMantenimiento();
	string to_stringFecha();
	void ImprimirFecha();
};
//setter de la fecha
inline void cFecha::setFecha(int dia, int mes, int anio)
{
	Dia = dia;
	Mes = mes;
	Anio = anio;

}
//setter de actualizar fecha de manteniiento
inline void cFecha::setMantenimiento()
{
	time_t t = time(0);
	tm* now = localtime(&t);
	setFecha(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);
}
//to string e impimir 
inline string cFecha::to_stringFecha()
{
	string s = to_string(Dia) + "/" + to_string(Mes) + "/" + to_string(Anio);
	return s;
}
inline void cFecha::ImprimirFecha()
{
	string s = to_stringFecha();
	cout << s << endl;
}
