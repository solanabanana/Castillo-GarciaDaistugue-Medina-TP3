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
	void Redimensionalizar();
	T* QuitarObjeto();
	void EliminarObjeto();
	int BuscarObjetoPos(string clave);
	T* BuscarObjeto(string clave);
	//sobrecarga de operadores
	void operator+(T* objeto)
	{
		try {
			lista.AgregarObjeto(objeto);
		}
		catch (exception* e) {

			Redimensionalizar();
		}

		
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


//implementacion 

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
	{
		throw new exception("No se pueden agregar mas elementos a la lista");
	}
}

template<class T>
void cListaT<T>::Redimensionalizar()
{
	lista = new cListaT * [2 * TAM];
	for (int i = CA; i < 2 * TAM; i++)
	{
		lista[i] = NULL;
	}
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
	if(aux != NULL)
		delete aux;
}

template<class T>
int cListaT<T>::BuscarObjetoPos(string clave)
{
	for (int i = 0; i < CA; i++)
	{
		if (lista[i]->getClave() == clave)
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

