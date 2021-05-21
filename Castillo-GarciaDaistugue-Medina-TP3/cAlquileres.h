#pragma once
#include "cListaT.h"
#include "cAlquiler.h"
#include<cVehiculo.h>
#include"cAuto.h"
#include <sstream>
#include <string>
using namespace std;
class cAlquileres :
    public cListaT<cAlquiler>
{
private:
    int Ganancia_Total;

public:
    //------Constructor y Destructor---//
    cAlquileres(Ganancia_Total);
    ~cAlquileres();
    //-----Verifica tipo de Vehiculo------//
    bool EsMoto(cVehiculo* TIPO);
    bool EsAuto(cVehiculo* TIPO);
    bool EsCamioneta(cVehiculo* TIPO);
    bool EsCombi(cVehiculo* TIPO);
    //------Calcula la Ganancia Total-----//
    int CalcularGananciaTotal();
    //----Listamos vehiculos---//
    cAlquileres* ListarPorTipoVehiculo();
    //------Imprimimos-----//
    string to_stringAlquileres();
    void imprimir();
};
