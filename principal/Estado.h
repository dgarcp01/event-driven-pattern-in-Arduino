		/*
CLASE ESTADO

Clase de la cual heredaran todas los estados de nuestro diagrama y que engloba todo lo referente a un estado en nuestro diagrama, es decir:
información sobre los estados a los que puede transitar nuestro diagrama, métodos que puede recibir, acciones que puede llegar a realizar y
 por supuesto ha de ser capaz de enviar y recibir eventos, con lo cual debe tener acceso a la entidad que maneje los eventos (interfaz).

Autor: Diego Garcia Perez
Fecha: 06/12/2016
*/

#ifndef Estado_h
#define Estado_h
#include "Arduino.h"

#include "Acciones.h"
#include "Eventos.h"
#include "Constantes.h"
#include "Interfaz.h"
#include "Connected.h"


class Estado: public Connected{

protected:
	Connected* _Interfaz;
	int NumEstados;
	Connected** EstadosSig;
	estadosPosibles estadoID;
    

public: 
	Estado(int _NumEstados, Connected** _EstadosSig, Connected* __Interfaz);
	void cambioEstado(estadosPosibles _estadoIDSig);
	void setEstadosSig(Connected** _EstadosSig);
	void entry();
	void exit();
};

#endif
