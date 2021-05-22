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
	string to_stringCliente();
	void ImprimirCliente();
};

string cCliente::to_stringCliente()
{
	stringstream ss;
	ss << "Cliente" << Nombre << endl;;
	ss << "Vehiculo: " << Apellido << endl;;
	ss << "Adicional: " << DNI << endl;
	return ss.str();
}

void cCliente::ImprimirCliente()
{
	string imprimir2 = to_stringCliente();
	cout << ImprimirCliente();

}