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
	T* Operatorsuma(cListaT<T>& lista, T* objeto);
	T* QuitarObjeto();
	void EliminarObjeto();
	T* BuscarObjeto(string clave);
	T* Operatorcorchete(int pos);
};


