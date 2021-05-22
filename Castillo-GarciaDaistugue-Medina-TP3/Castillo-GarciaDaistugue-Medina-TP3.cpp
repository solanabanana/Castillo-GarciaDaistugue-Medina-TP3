#include "cEmpresa.h"
#include "cAuto.h"
#include "cCombi.h"
#include "cCamioneta.h"
#include "cMoto.h"
#include "cAlquileres.h"
#include <iostream>

int main()
{
    //Nos creamos una lista de vehiculos y le agregamos algunos vehiculos
    cListaT<cVehiculo> lista_vehiculos;
    cVehiculo* nuevo;
    nuevo = new cMoto(100, 123, 987, 12345, 500, 2, "Negro");
    lista_vehiculos + nuevo;
    //cout << "Primer vehiculo que creamos: " << nuevo;//Probamos el operator <<
    nuevo = new cMoto(100, 456, 654, 6789, 500, 1, "Rosa");
    lista_vehiculos + nuevo;
    nuevo = new cAuto(100, 789, 321, 1357, 700, 5, "Rojo");
    lista_vehiculos + nuevo;
    nuevo = new cCamioneta(100, 101, 321, 2468, 900, 6, "Blanco");
    lista_vehiculos + nuevo;
    nuevo = new cCombi(100, 111, 654, 1928, 1000, 12, "Violeta");
    lista_vehiculos + nuevo;
    for (int i = 0; i < 4; ++i)//Probamos el operator <<
    {
        cout << "Vehiculo " << to_string(i + 1) << ": " << lista_vehiculos[i];
    }
    //Nos creamos una lista de clientes y le agregamos clientes
    cListaT<cCliente> lista_clientes;
    cCliente* cliente;
    cliente = new cCliente("Solana", "Castillo", "42116766");
    lista_clientes + cliente;
    cliente = new cCliente("Nahuel", "Russo", "42156988");
    lista_clientes + cliente;
    cliente = new cCliente("Juana", "Bettencourt", "20685689");
    lista_clientes + cliente;
    cliente = new cCliente("Sojourner", "Truth", "35421578");
    lista_clientes + cliente;
    cliente = new cCliente("Bianca", "Del Rio", "30912586");
    lista_clientes + cliente;
    cAlquileres alquileres;
    cEmpresa* empresa = new cEmpresa(lista_vehiculos, lista_clientes, alquileres);
    empresa->Alquiler("42116766", "123", 1, 0, "20/5/2021", "31/5/2021");
    empresa->Alquiler("42156988", "456", 2, 0, "30/5/2021", "8/6/2021");
    empresa->Alquiler("20685689", "789", 1, 0, "23/5/2021", "29/5/2021");
    empresa->Alquiler("35421578", "101", 1, 1, "15/5/2021", "21/6/2021");
    empresa->Alquiler("30912586", "111", 0, 3, "21/5/2021", "30/5/2021");
    alquileres.CalcularGananciaTotal();
    empresa->RealizarMantenimiento("123");
    empresa->RealizarMantenimiento("456");
    empresa->RealizarMantenimiento("789");
    empresa->RealizarMantenimiento("101");
    empresa->RealizarMantenimiento("111");
    //HACER LOS TRY-CATCHHHHHHH
}

