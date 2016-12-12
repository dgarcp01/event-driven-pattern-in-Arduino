/* 
IMPLEMENTACION DE LA CLASE LOCKED

Esta clase es diseñada acorde al estado Locked de nuestro diagrama, tendrá como posibles
estado siguientes el estado Broken y el estado Unlocked. 

Autor: Diego Garcia Perez
Fecha: 08/12/2016

*/
#ifndef Locked_h
#define Locked_h

#include "Arduino.h"
#include "Constantes.h"
#include "Interfaz.h"
#include "Estado.h"
#include "Connected.h"

class Locked: public Estado{

protected:
	float amount;

public:
	Locked(int _NumEstados, Connected** _EstadosSig, Connected* __Interfaz);
	void failed();
	void outOfOrder();
};

#endif
