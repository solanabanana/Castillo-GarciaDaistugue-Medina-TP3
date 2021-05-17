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
	cListaT(int TAM = NMAX, bool eliminar_objetos = false, int ca);
	~cListaT();

	void AgregarObjeto(T* objeto);
	void QuitarObjeto();
	void EliminarObjeto();
	T* BuscarObjeto(string clave);
};

template<class T>
inline cListaT<T>::cListaT(int TAM, bool eliminar_objetos, int ca)
{
	this->CA = ca;
	if (ca == TAM)
	{
		cout << "No Hay espacio" << endl;
	}
	else {
		for (int i = 0; i < T; i++)
		{
			lista[i] = NULL;
		}
	}


}

template<class T>
inline cListaT<T>::~cListaT()
{
	if (lista != NULL) {
		for (int i = 0; i < ca; i++)
		{
			if (lista[i] != NULL)
				delete lista[i];
		}
		delete[]lista;
	}
}
