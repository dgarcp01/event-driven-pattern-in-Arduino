# PRUEBA DE CONCEPTO PARA CREAR UN PATRON DE PROGRAMACION BASADO EN STATECHART EN ARDUINO

Autor: Diego García Pérez.



## INTRODUCCIÓN

En el siguiente desarrollo se va a implementar el statechart definido en la siguiente figura "StateChart.png" con el fin de definir
un patrón de programación de statechart dentro de arduino.

En esta prueba se va ha hacer uso de conceptos definidos por Miro Sammek en "Practical StateChart in C, C++", el cual plantea
una implementación basada en programación dedicada a objetos. En dicho patrón cada estado es una instacia de una clase que posee 
información sobre el propio estado, sobre los posibles estados futuros además de los métodos necesarios para llevar a cabo las 
acciones asociadas con el estado. 

Nuestro sistema es un sistema reactivo, es decir, ha de responder ante ciertos estímulos de su entorno o ante evetos temporales,
para poder provar su funcionamiento sin más material que el propio arduino, los eventos de entorno se simularán a traves del bus
serie. 


## ACCIONES EVENTOS

Son clases abstractas con los métodos acorde a los métodos y acciones que se encuentran en nuestro diagrama.



## ESTADO

Entidad que engloba todo lo referente a un estado en nuestro diagrama, es decir: información sobre los estados a los que puede 
transitar nuestro diagrama, métodos que puede recibir, acciones que puede llegar a realizar y por supuesto ha de ser capaz de
enviar y recibir eventos, con lo cual debe tener acceso a la entidad que maneje los eventos (interfaz).

Atributos: 
	Interfaz* _Interfaz --> puntero a interfaz para el envio broadcast de los eventos
	int NumEstados --> Numero de estados posibles para hacer un array con los posibles estado activos.
	Estado** EstadosSig --> Array de punteros a los posibles estados futuros.   

Metodos:
	void CambioEstado --> es una función que cambia el estado activo de interfaz. Para ello accede al puntero de EstadosSig y se
							lo pasa a _Interfaz.ActualizarEstado()
	void entry()
	void exit()


## INTERFAZ

Esta clase contiene todo lo necesario para manejar la llegada de eventos
y despacharloss al estado activo. Para ello tiene la siguiente estructura:

Atributos:
	Estado* EstadoActivo --> Puntero a un estado activo 

Métodos:
	void DespacharEvento( event evento) --> Redirecciona el método entrante al estado activo
	void ActualizarEstado(Estado* NuevoEstado) --> Cambia el puntero al estado activo 
	
