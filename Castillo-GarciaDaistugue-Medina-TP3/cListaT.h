#pragma once
#include <string>
#include <exception>
#include <stdio.h>
#include <iostream>
#define NMAX 100

using namespace std;
template <class T>

class cListaT
{
public:
//atributos
	T** lista;
	unsigned int CA, TAM;
	bool EliminarObjetos;
	
	//contructor y destructor
	cListaT(unsigned int TAM = NMAX);
	~cListaT(void);
	//metodos de la lista
	void AgregarObjeto(T* objeto);
	void Redimensionar();
	T* QuitarObjeto(string clave);
	void EliminarObjeto(string clave);
	int BuscarObjetoPos(string clave);
	T* BuscarObjeto(string clave);
	//sobrecarga de operadores
	void operator+(T* objeto);
	T* operator[](string clave)
	{
		return BuscarObjeto(clave);
	}
	T* operator[](unsigned int pos)
	{
		if (pos < CA) return lista[pos];
	}
};


//implementacion 

//constructor 
template<class T>
inline cListaT<T>::cListaT(unsigned int TAM)
{
	CA = 0;
	lista = new T * [TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		lista[i] = NULL;
	}

	this->TAM = TAM;
	EliminarObjetos = false;

}
template<class T>
inline cListaT<T>::~cListaT(void)
{//borro memoria
	if (lista != NULL && EliminarObjetos == true) {
		for (unsigned int i = 0; i < CA; i++)
		{
			if (lista[i] != NULL)
				delete lista[i];
		}
		delete[]lista;
	}
}
//implementacion de metodos propios de la lista
template<class T>
inline void cListaT<T>::AgregarObjeto(T* objeto)
{
	if (CA < TAM)
	{
		lista[CA++] = objeto;
	}
	else
	{
		throw new exception("No se pueden agregar mas elementos a la lista");
	}
}
template<class T>
inline void cListaT<T>::operator+(T* objeto)
{
		try {
			AgregarObjeto(objeto);
		}
		catch (exception* e) {//Si no hay mas lugar en la lista, lo imprimimos y la redimensionalizamos
			cout << e->what() << endl;
			delete e;
			Redimensionar();
		}
}
template<class T>
inline void cListaT<T>::Redimensionar()
{
	TAM = TAM * 2;//Duplicamos el tamaño
	T** aux = new T * [TAM];//Nos creamos un doble puntero con este nuevo tamaño
	for (unsigned int i = 0; i < TAM / 2; i++)
	{
		aux[i] = lista[i];//Copiamos los datos del array original a este auxliar
	}
	lista = aux;//Cambiamos la dirección del doble puntero original por la del auxiliar. 
}



template<class T>
inline T* cListaT<T>::QuitarObjeto(string clave)
{
	T* aux = BuscarObjeto(clave);
	int i = BuscarObjetoPos(clave);
	for (int k = i; k < CA - 1; k++)
	{
		lista[k] = lista[k + 1];

	}
	lista[CA--] = NULL;
	return aux;
}

template<class T>
inline void cListaT<T>::EliminarObjeto(string clave)
{

	T* aux = QuitarObjeto(clave);
	if(aux != NULL)
		delete aux;
}

template<class T>
inline int cListaT<T>::BuscarObjetoPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (lista[i]->getClave() == clave)
			return i;
	}
	return TAM;
}

template<class T>
inline T* cListaT<T>::BuscarObjeto(string clave)
{
	unsigned int pos = BuscarObjetoPos(clave);
	if (pos < CA)
		return lista[pos];
	return NULL;
}

