#include "Acciones.h"
#include "Eventos.h"
#include "Estado.h"
#include "Interfaz.h"
#include "Connected.h"
#include "Locked.h"
#include "Broken.h"

// Creamos el array de estados posibles
Connected* estados[3];
Connected* myInterfaz;


  // Indicamos el estado inicial del diagrama

void serialEvent();

void setup(){
  Serial.begin(9600);
  // Creamos los puntero
  myInterfaz =  new Interfaz(NULL);  
  estados[0] = new Broken(3,estados,myInterfaz);
  estados[1] = new Locked(3,estados,myInterfaz);
  estados[2] = NULL;
  myInterfaz->setEstadoInicial(estados[1]);

}

void loop(){
	
    serialEvent();

    //
}



void serialEvent(){
	// Si existe algo en el buffer del serial se produce el parseo y las posibles opciones de respuesta
 
  if(Serial.available() > 0){
    
    String inString =  Serial.readString();
    
    if (inString == "Failed"){
   		myInterfaz->despacharEvento(_failed);
      
    }
    
    else if (inString == "Fixed"){
      myInterfaz->despacharEvento(_fixed);
    }
    
    else{
      Serial.println("No se reconoce el comando");
    } 

}
}
