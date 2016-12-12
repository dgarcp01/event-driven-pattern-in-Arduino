/* IMPLEMENTACION DE LA CLASE BROLEN */
/*
Autor: Diego Garcia Perez
Fecha: 08/12/2016
*/


#include "Arduino.h"
#include "Constantes.h"
#include "Broken.h"
#include "Estado.h"
#include "Connected.h"

Broken :: Broken(int _NumEstados, Connected** _EstadosSig, Connected* __Interfaz): Estado( _NumEstados, _EstadosSig, __Interfaz){
	
}

void Broken :: inOrder(){
	Serial.println("Machine fixed and ready!");
}


void Broken :: fixed(){
	estadoID = locked;
	inOrder();
	Estado :: cambioEstado(estadoID);
}

