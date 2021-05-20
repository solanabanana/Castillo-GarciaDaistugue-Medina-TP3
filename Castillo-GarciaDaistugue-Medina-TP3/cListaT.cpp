#include "cListaT.h"
#define NMAX = 100;

template<class T>
cListaT<T>::cListaT(int TAM)
{
	Eliminar_objetos = false;
	this->CA = ca;
	try {//NO ESTOY SEGURA DE ESTO


		if (ca == TAM)
		{
			throw new exception("No se puede un nuevo elemento a la lista");
		}
	}
	else {
		for (int i = 0; i < T; i++)
		{
			lista[i] = NULL;
		}
	}

}
template<class T>
cListaT<T>::~cListaT()
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









template<class T>
T* cListaT<T>::QuitarObjeto()
{
	T* aux = BuscarObjeto(clave);
	for ( int k = i; k < CA-1; k++)
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


