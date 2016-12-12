/*
CONSTANTES Y TIPOS DE DATOS PROPIOS 
Se incluyen todos los enum para identificar acciones eventos y estados activos,
este archivo es el que mas se puede cambiar ante cambios en nuestro diagrama

Autor: Diego Garcia Perez
*/
#ifndef Constantes_h
#define Constantes_h
enum eventosPosibles{
  _pass,
  _coin,
  _failed,
  _fixed
};

// Los estados activos deben ir en el orden en el que se encuentran en el doble puntero
// se le pasa a cada estado.
enum estadosPosibles{
	broken,
	locked,
	unlocked
};
#endif

