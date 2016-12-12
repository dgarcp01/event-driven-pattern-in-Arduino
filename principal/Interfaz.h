/*CLASE INTERFAZ 
Esta clase contiene todo lo necesario para manejar la llegada de eventos
y despacharloss al estado activo.

Autor: Diego Garcia Perez
Fecha: 06/12/2016
*/

#ifndef Interfaz_h
#define Interfaz_h

#include "Arduino.h"
#include "Estado.h"
#include "Constantes.h"
#include "Connected.h"

class Interfaz: public Connected {

protected:
	Connected* estadoActivo;

public: 
	Interfaz(Connected* _estadoInicial);
	void despacharEvento(eventosPosibles eventosId);
	void actualizarEstado(Connected* nuevoEstado);
	void setEstadoInicial(Connected* _estadoInicial);

};

#endif
