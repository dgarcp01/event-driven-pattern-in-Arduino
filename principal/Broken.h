/* 
IMPLEMENTACION DE LA CLASE BROKEN

Esta clase es diseñada acorde al estado Broken de nuestro diagrama, tendrá como posibles
estado siguientes el estado Broken y el estado Locked. 

Autor: Diego Garcia Perez
Fecha: 08/12/2016

*/
#ifndef Broken_h
#define Broken_h

#include "Arduino.h"
#include "Constantes.h"
#include "Interfaz.h"
#include "Estado.h"
#include "Connected.h"

class Broken: public Estado{

public:
	Broken(int _NumEstados, Connected** _EstadosSig, Connected* __Interfaz);
	void cambioEstado(eventosPosibles _eventoIDSig);
	void fixed();
	void inOrder();
};

#endif
