#include "cEmpresa.h"
#include "cAuto.h"
#include "cCombi.h"
#include "cCamioneta.h"
#include "cMoto.h"
#include "cAlquileres.h"
#include <iostream>

int main()
{
    cMoto* moto1 = new cMoto(100, 123, 987, 12345, 500, 2, "Negro");
    cMoto* moto2 = new cMoto(100, 456, 654, 6789, 500, 1, "Rosa");
    cAuto* auto1 = new cAuto(100, 789, 321, 1357, 700, 5, "Rojo");
    cCamioneta* camioneta1 = new cCamioneta(100, 101, 321, 2468, 900, 6, "Blanco");
    cCombi* combi1 = new cCombi(100, 111, 654, 1928, 1000, 12, "Violeta");
    cListaT<cVehiculo>* lista_vehiculos = new cListaT<cVehiculo>();
    lista_vehiculos = moto1 + moto2 + auto1 + camioneta1 + combi1;
    cEmpresa* empresa = new cEmpresa();//Aca hay q especificar las listas
}

