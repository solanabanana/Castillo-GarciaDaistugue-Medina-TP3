#pragma once
using namespace std;
typedef enum//enum para clasificar tipo de cargos
{
	CASCO,
	SILLAS_SEGURIDAD,
	PORTAEQUIPAJES,
	ASIENTO_REBATIBLE
} eCargoAdicional;
class cCargoAdicional
{// atrubutos
	const eCargoAdicional Tipo;
	int Precio;
public:
	//constructor y getter
	cCargoAdicional(eCargoAdicional tipo, int precio): Tipo(tipo)
	{
		this->Precio = precio;
	}
	int getPrecio() { return Precio; };
	~cCargoAdicional() {};
};

