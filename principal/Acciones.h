//CLASE ACCIONES 
/*
Clase abstracta que recoge todas las acciones de nuestro diagrama, en un principio se intentara que sea
totalmente abstracta, en el caso de que el compilador de arduino falle se hara con funciones virtuales vacias.

Autor: Diego García Pérez
*/

#ifndef Acciones_h
#define Acciones_h
#include "Arduino.h"

class Acciones{
public: 
	virtual void lock(){};
	virtual void unlock(){};
	virtual void alarm(){};
	virtual void thankYou(){};
	virtual void outOfOrder(){};
	virtual void inOrder(){};
};

#endif
