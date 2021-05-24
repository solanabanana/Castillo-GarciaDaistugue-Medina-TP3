#include "cEmpresa.h"
#include <iostream>
#include "cVehiculo.h"
#include "cListaT.h"
int main()
{
    //Nos creamos una lista de vehiculos y le agregamos algunos vehiculos
    cListaT<cVehiculo> lista_vehiculos;
    cListaT<cCliente> lista_clientes;
    cAlquileres alquileres;
    cVehiculo* nuevo;
    nuevo = new cMoto(100, 123, 987, 12345, 500, 2, "Negro");
    lista_vehiculos + nuevo;
    nuevo = new cMoto(100, 456, 654, 6789, 500, 1, "Rosa");
    lista_vehiculos + nuevo;
    nuevo = new cAuto(100, 789, 321, 1357, 700, 5, "Rojo");
    lista_vehiculos + nuevo;
    nuevo = new cCamioneta(100, 101, 321, 2468, 900, 6, "Blanco");
    lista_vehiculos + nuevo;
    nuevo = new cCombi(100, 111, 654, 1928, 1000, 12, "Violeta");
    lista_vehiculos + nuevo;
    for (int i = 0; i < 5; ++i)//Probamos el operator <<
    {
        cout << "Vehiculo " << to_string(i + 1) << ": " << lista_vehiculos[i] << endl;
    }
    //Nos creamos una lista de clientes y le agregamos clientes
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
    //Nos creamos una empresa con la lista de vehiculos, la lista de clientes y una lista de alquileres
    cEmpresa* empresa = new cEmpresa(lista_vehiculos, lista_clientes, alquileres);
    //Realizamos los alquileres, si el vehiculo ya esta alquilado, nos tira una excepcion y la imprimimos
    try
    {
        empresa->Alquiler("42116766", "123", 1, 0, "20/5/2021", "31/5/2021");
        //alquileres.CA++;
    }
    catch (exception* e) { 
        cout << e->what() << endl;
        delete e;
    }
    try
    {
        empresa->Alquiler("42156988", "456", 2, 0, "30/5/2021", "8/6/2021");
    }
    catch (exception* e){
        cout << e->what() << endl;
        delete e;
    }
    try
    {
        empresa->Alquiler("20685689", "789", 1, 0, "23/5/2021", "29/5/2021");
    } 
    catch (exception* e) {
        cout << e->what() << endl;
    }
    try
    {
        empresa->Alquiler("35421578", "101", 1, 1, "15/5/2021", "21/6/2021");
    }
    catch (exception* e) {
        cout << e->what() << endl;
    }
    try
    {
        empresa->Alquiler("30912586", "111", 0, 3, "21/5/2021", "30/5/2021");
    } 
    catch (exception* e) {
        cout << e->what() << endl;
    }
    try//Intentamos alquilar un vehiculo que ya esta alquilado
    {
        empresa->Alquiler("42116766", "111", 2, 2, "1/7/2021", "27/7/2021");
    }
    catch (exception* e) {
        cout << e->what() << endl;
    }
    //Entregamos algunos de los vehiculos que estaban alquilados
    empresa->EntregaDeVehiculo("123");
    empresa->EntregaDeVehiculo("456");
    empresa->EntregaDeVehiculo("789");
    empresa->CalcularGananciaTotal();
    //Calculamos la ganancia total de los alquileres que se pudieron hacer
    //Como RealizarMantenimiento nos tira una excepcion si el vehiculo esta en buen estado y si esta alquilado, se debe hacer un try-catch para cada llamado a este método.
    //Imprimimos la excepcion
    try
    {
        empresa->RealizarMantenimiento("123");
    }
    catch (exception* e) {
        cout << e->what() << endl;
    }
    try
    {
        empresa->RealizarMantenimiento("456");
    }
    catch (exception* e) {
        cout << e->what() << endl;
    }
    try
    {
        empresa->RealizarMantenimiento("789");
    }
    catch (exception* e) {
        cout << e->what() << endl;
    }
    try
    {
        empresa->RealizarMantenimiento("101");
    }
    catch (exception* e) {
        cout << e->what() << endl;
    }
    try
    {
        empresa->RealizarMantenimiento("111");
    }
    catch (exception* e) {
        cout << e->what() << endl;
    }
   empresa->ImprimirAlquileres();//Vemos q onda los alquileres
   empresa->ImprimirAlquileresOrdenados();
}

