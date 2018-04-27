/*
 * ListaDeCultivosPlantados.cpp
 *
 *  Created on: 26 abr. 2018
 *      Author: jonathan
 */
#include "ListaDeCultivosPlantados.h"
#include <cstdlib>
#include <iostream>


ListaDeCultivosPlantados::ListaDeCultivosPlantados(){

	primero=NULL;
	cantidadPlantadosActual=0;

}

bool ListaDeCultivosPlantados::estaVacia(){
	return cantidadPlantadosActual==0;
}

void ListaDeCultivosPlantados::agregarInfoCultivo
     (ui posicionEnVectorCultivos,char nombreCultivo, ui fila,ui columna){
	 //creo el nodo nuevo primero: tiene direccion del heap
	 InfoDeUnCultivo *nuevoPrimero =
	 new InfoDeUnCultivo(nombreCultivo,fila,columna,posicionEnVectorCultivos);
	 //sino esta vacia la lista
	 //el siguiente nodo va ser el primero
	 if(!this->estaVacia()){
		 nuevoPrimero->cambiarSiguiente(this->primero);
	 }
	 //si esta vacia el primero es nuevoPrimero
	 this->primero=nuevoPrimero;

	 cantidadPlantadosActual++;
}

InfoDeUnCultivo * ListaDeCultivosPlantados:: obtenerInfoCultivo(ui fila,ui columna){

	InfoDeUnCultivo *nodoActual=primero;

	if(!estaVacia()){
		bool encontre=false;
		while(!encontre){
			if(nodoActual->obtenerFilaTerreno()==fila &&
			   nodoActual->obtenerColumnaTerreno()==columna){
				encontre=true;

			}else{
				nodoActual=nodoActual->obtenerSiguiente();
			}
		}
	}else{
		nodoActual=NULL;
	}
	return nodoActual;
}


void ListaDeCultivosPlantados::eliminarInfoCultivo(ui fil,ui col,char IDDeBorrado){
	InfoDeUnCultivo* actualInfo = primero;
	if (IDDeBorrado == '~' || (actualInfo->obtenerFilaTerreno()==fil &&
			actualInfo->obtenerColumnaTerreno()==col))
		//si el dato se encuentra en el primer nodo, se setea el siguiente como primero
	{
		primero=actualInfo->obtenerSiguiente();

	}else
		if(IDDeBorrado != '~'){
			while((actualInfo->obtenerFilaTerreno()!=fil &&
					actualInfo->obtenerColumnaTerreno()!=col) &&
				 !(actualInfo)){
				actualInfo=actualInfo->obtenerSiguiente();
			}
			actualInfo->cambiarSiguiente(actualInfo->obtenerSiguiente()->obtenerSiguiente());
			actualInfo=actualInfo->obtenerSiguiente();
		}
	if(actualInfo!=NULL)
		delete actualInfo;
	cantidadPlantadosActual--;
}

ListaDeCultivosPlantados::~ListaDeCultivosPlantados(){
	while(!estaVacia()){
		eliminarInfoCultivo(0,0,'~');
	}
}






