#pragma once
#include <string>
#define NMAX 100

using namespace std;
template <class T>

class cListaT
{
public:
//atributos
	T** lista;
	unsigned int CA, TAM;
	bool Eliminar_objetos;
	
	//contructor y destructor
	cListaT(int TAM = NMAX);
	~cListaT();
	//metodos de la lista
	void AgregarObjeto(T* objeto);
	T* QuitarObjeto();
	void EliminarObjeto();
	int BuscarObjetoPos(string clave);
	T* BuscarObjeto(string clave);
	//sobrecarga de operadores
	void operator+(T* objeto)
	{
		lista.AgregarObjeto(objeto);
	};
	T* operator[](string clave)
	{
		return BuscarObjeto(clave);
	};
};


