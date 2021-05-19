#pragma once
#include <string>
#define NMAX 100

using namespace std;
template <class T>

class cListaT
{
public:
	T** lista;
	int CA, TAM;
	bool Eliminar_objetos;
	

	cListaT(int TAM, bool eliminar_objetos, int ca);
	~cListaT();

	void AgregarObjeto(T* objeto);
	T* operator+(cListaT<T>& lista, T* objeto)
	{
		lista.AgregarObjeto(objeto);
		return lista;
	}
	T* QuitarObjeto();
	void EliminarObjeto();
	T* BuscarObjeto(string clave);
	T* operator[](unsigned int pos)
	{
		if (pos < CA)
		{
			return lista[pos];
		}
		return NULL;
	}
};


