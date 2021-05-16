#pragma once
#include <string>
#define NMAX 100

using namespace std;
template <class T>

class cListaT
{
	T** lista;
	int CA, TAM;
	bool Eliminar_objetos;

public:
	cListaT(int TAM = NMAX, bool eliminar_objetos = false);
	~cListaT();

	void AgregarObjeto(T* objeto);
	void QuitarObjeto();
	void EliminarObjeto();
	T* BuscarObjeto(string clave);
};

