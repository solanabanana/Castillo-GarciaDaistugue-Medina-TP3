#pragma once
#include <string>
#define NMAX 100

using namespace std;
template <class T>

class cListaT
{
protected:
	T** lista;
	int CA, TAM;
	bool Eliminar_objetos;

public:
	cListaT(int TAM, bool eliminar_objetos, int ca);
	~cListaT();

	void AgregarObjeto(T* objeto);
	T* QuitarObjeto();
	void EliminarObjeto();
	T* BuscarObjeto(string clave);
};


