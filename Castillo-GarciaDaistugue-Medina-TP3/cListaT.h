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
	}
	T* operator[](int pos)
	{
		if (pos < CA) return lista[pos];
	}
};
template<class T>
void cListaT<T>::AgregarObjeto(T* objeto)
{

}
template<class T>
T* cListaT<T>::QuitarObjeto()
{
	T* aux = BuscarObjeto(clave);
	for (int k = i; k < CA - 1; k++)
	{
		lista[k] = lista[k + 1];

	}
	lista[CA--] = NULL;
	return aux;
}

template<class T>
void cListaT<T>::EliminarObjeto()
{

	T* aux = QuitarObjeto();
	IF(aux != NULL)
		delete aux;
}

template<class T>
int cListaT<T>::BuscarObjetoPos(string clave)
{
	for (int i = 0; i < CA; i++)
	{
		if (lista[i]->getClave() == Clave)
			return i;
	}
	return TAM;
}

template<class T>
T* cListaT<T>::BuscarObjeto(string clave)
{
	int pos = BuscarObjetoPos(clave);
	if (pos < ca)
		return lista[pos];
	return NULL;
}

