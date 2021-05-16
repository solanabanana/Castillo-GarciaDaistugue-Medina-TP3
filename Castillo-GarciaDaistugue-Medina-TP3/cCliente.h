#pragma once
#include <sstream>
#include <string>
using namespace std;
class cCliente
{
private:
	string Nombre;
	string Apellido;
	string DNI;
public:
	cCliente(string nombre, string apellido, string DNI)
	{
		this->Nombre = nombre;
		this->Apellido = apellido;
		this->DNI = DNI;
	}
	~cCliente(){}
};

