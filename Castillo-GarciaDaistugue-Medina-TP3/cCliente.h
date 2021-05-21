#pragma once
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
	~cCliente(){}
	//getter 
	string getClave() { return DNI; }
};

