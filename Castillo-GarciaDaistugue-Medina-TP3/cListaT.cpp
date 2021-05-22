#include "cListaT.h"
#define NMAX = 100;
//constructor 
template<class T>
cListaT<T>::cListaT(int TAM)
{
	Eliminar_objetos = false;//por defaullt
	this->CA = ca;
	
	if (ca == TAM)//si no hay mas espacio
	{
			cout << "No se puede crear" << endl;
	}
	else {
		for (int i = 0; i < T; i++)
		{
			lista[i] = NULL;//creo y apunto a null
		}
	}

}
template<class T>
cListaT<T>::~cListaT()
{//borro memoria
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
void cListaT<T>::AgregarObjeto(T* objeto)
{

	if (CA < TAM)
	{
		lista[CA++] = objeto;
	}
	else
	{//excepcion
		cout << "No se puede agregar  un nuevo elemento a la lista" << endl;
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


