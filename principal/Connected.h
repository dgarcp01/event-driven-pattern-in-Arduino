/* CLASE PARA CONECTAR LAS CLASES INTERFAZ Y ESTADO */

/*
Autor: Diego Garcia Perez
Fecha: 08/12/2016

*/

#ifndef connected_h
#define connected_h
#include "Eventos.h"
#include "Acciones.h"

class Connected: public Eventos, public Acciones {
public:
	virtual void actualizarEstado(Connected* nuevoEstado){};
	virtual void despacharEvento(eventosPosibles eventosId){};
	virtual void setEstadoInicial(Connected* _estadoInicial){};

	virtual void cambioEstado(estadosPosibles _estadoIDSig){};
	virtual void setEstadosSig(Connected** _EstadosSig){};
	virtual void entry(){};
	virtual void exit(){};
};
#endif
