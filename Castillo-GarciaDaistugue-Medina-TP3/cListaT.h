#pragma once
#include <string>
#define NMAX 100

using namespace std;
template <class T>

class cListaT
{
public:
	T** lista;
	unsigned int CA, TAM;
	bool Eliminar_objetos;
	

	cListaT(int TAM = NMAX);
	~cListaT();

	void AgregarObjeto(T* objeto);
	T* QuitarObjeto();
	void EliminarObjeto();
	int BuscarObjetoPos(string clave);
	T* BuscarObjeto(string clave);
	void operator+(T* objeto);
	T* operator[](string clave)
	{
		return BuscarObjeto(clave);
	}
};
template<class T>
void cListaT<T>::AgregarObjeto(T* objeto)
{

	if (CA < TAM)
	{
		lista[CA++] = objeto;
	}
	else throw new exception("No se puede un nuevo elemento a la lista");
}
template<class T>
void cListaT<T>::operator+(T* objeto)
{
	lista.AgregarObjeto(objeto);
}

