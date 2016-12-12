/*	CLASE METODOS 
Clase que define todos los eventos que se pueden producir en nuestro diagrama

Autor: Diego Garcia Perez-
Fecha: 06/12/2016
*/
#ifndef Eventos_h
#define Eventos_h
#include "Arduino.h"

class Eventos{
public: 
	virtual void pass(){};
	virtual void coin(){};
	virtual void failed(){};
	virtual void fixed(){};
}
;
#endif

