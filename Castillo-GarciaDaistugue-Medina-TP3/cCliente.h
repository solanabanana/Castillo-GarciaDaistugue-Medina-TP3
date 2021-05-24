#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class cCliente
{//attributos
private:
	string Nombre;
	string Apellido;
	string DNI;
public:
	//contructor y destructor
	cCliente(string nombre, string apellido, string DNI)
	{
		this->Nombre = nombre;
		this->Apellido = apellido;
		this->DNI = DNI;
	}
	~cCliente() {};
	//getter 
	string getClave() { return DNI; }
	string to_stringCliente();
	void ImprimirCliente();
};

inline string cCliente::to_stringCliente()
{
	stringstream ss;
	ss << "Cliente: " << Nombre << ", " << Apellido << endl;
	ss << "DNI: " << DNI << endl;
	return ss.str();
}

inline void cCliente::ImprimirCliente()
{
	string imprimir2 = to_stringCliente();
	cout << imprimir2;

}