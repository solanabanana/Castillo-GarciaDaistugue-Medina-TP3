#pragma once
#include "cListaT.h"
#include "cAlquiler.h"
#include <sstream>
#include <string>
using namespace std;
class cAlquileres :
    public cListaT<cAlquiler>//recibe la lista template 
{
private://atributo privado
    int GananciaTotal;
public:
    //constructor y destructor
    cAlquileres();
    ~cAlquileres();
    //metodos 
    void CalcularGananciaTotal();
    void OrdenarPorTipoVehiculo(cAlquileres& aux );
    void ListarPorTipoVehiculo();
    string to_stringAlquileres();
    void imprimirAlquileres();

};

