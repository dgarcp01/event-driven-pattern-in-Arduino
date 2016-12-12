/*
IMPLEMENTACION DE LA CLASE ESTADO

Autor: Diego García Pérez
Fecha: 06/12/2016

*/

#include "Arduino.h"
#include "Interfaz.h"
#include "Estado.h"
#include "Constantes.h"
#include "Connected.h"

Estado :: Estado(int _NumEstados, Connected** _EstadosSig, Connected* __Interfaz){
	NumEstados = _NumEstados;
	EstadosSig = _EstadosSig;
	_Interfaz = __Interfaz;
}

void Estado :: cambioEstado(estadosPosibles _estadoIDSig ){
	
	_Interfaz->actualizarEstado( EstadosSig[_estadoIDSig] );
	exit();
	EstadosSig[_estadoIDSig]->entry();
} 

void Estado :: entry(){

}

void Estado :: exit(){

}

void Estado :: setEstadosSig(Connected** _EstadosSig){
	EstadosSig = _EstadosSig;
}

