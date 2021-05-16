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
	const eCargoAdicional tipo;
	int precio;
};

