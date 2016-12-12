/* IMPLEMENTACION DE LA CLASE LOCKED */
/*
Autor: Diego Garcia Perez
Fecha: 08/12/2016
*/


#include "Arduino.h"
#include "Constantes.h"
#include "Locked.h"
#include "Estado.h"
#include "Connected.h"

Locked :: Locked(int _NumEstados, Connected** _EstadosSig, Connected* __Interfaz): Estado( _NumEstados,  _EstadosSig, __Interfaz){
	
	amount = 0.0;

}

void Locked :: outOfOrder(){
	Serial.println("Machine out of Order!");
}

void Locked :: failed(){
	estadoID = broken;
	outOfOrder();
	Estado :: cambioEstado(estadoID);
}

