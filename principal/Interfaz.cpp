#include "Interfaz.h"
#include "Arduino.h"
#include "Constantes.h"
#include "Connected.h"

Interfaz :: Interfaz(Connected* _estadoInicial){

	estadoActivo = _estadoInicial;
}

void Interfaz :: despacharEvento(eventosPosibles _eventosID){
	switch(_eventosID){

	case _pass:
		estadoActivo->pass();
		break;

	case _coin:
		estadoActivo->coin();
		break;

	case _failed:
		estadoActivo->failed();
		break;

	case _fixed:
		estadoActivo->fixed();
		break;
}
}

void  Interfaz :: actualizarEstado(Connected* nuevoEstado){
	estadoActivo = nuevoEstado;
}

void Interfaz :: setEstadoInicial(Connected* _estadoInicial){
  //Serial.println("He cambiado de estado Inicial");	
  estadoActivo = _estadoInicial;
}
