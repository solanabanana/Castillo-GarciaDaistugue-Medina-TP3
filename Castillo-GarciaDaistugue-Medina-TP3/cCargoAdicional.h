#pragma once
using namespace std;
typedef enum
{
	CASCO,
	SILLAS_SEGURIDAD,
	PORTAEQUIPAJES,
	ASIENTO_REBATIBLE
} eCargoAdicional;
class cCargoAdicional
{
	const eCargoAdicional Tipo;
	int Precio;
public:
	cCargoAdicional(eCargoAdicional tipo, int precio): Tipo(tipo)
	{
		this->Precio = precio;
	}
	int getPrecio() { return Precio; };
};

