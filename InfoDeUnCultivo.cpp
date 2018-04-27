/*
 * InfoDeUnCultivo.cpp
 *
 *  Created on: 26 abr. 2018
 *      Author: jonathan
 */
#include "InfoDeUnCultivo.h"
#include <cstdlib>

InfoDeUnCultivo::InfoDeUnCultivo(char nombre,ui fila, ui columna,ui posicionEnVector){
	this->nombre=nombre;
	this->fila=fila;
	this->columna=columna;
	this->posicionEnVectorCultivos=posicionEnVector;
    this->siguiente=NULL;
}

char InfoDeUnCultivo::obtenerNombre(){
    return nombre;
}

ui InfoDeUnCultivo::obtenerPosicionEnVectorCultivos(){
	return posicionEnVectorCultivos;
}

ui InfoDeUnCultivo::obtenerFilaTerreno(){
	return fila;
}

ui InfoDeUnCultivo::obtenerColumnaTerreno(){
	return columna;
}

void InfoDeUnCultivo::asignarNombre(char nombre){
	this->nombre=nombre;
}

void InfoDeUnCultivo::asignarPosicionTerreno(ui fila, ui columna){
	this->fila=fila;
	this->columna=columna;
}

void InfoDeUnCultivo::asignarPosicionEnVector(ui posicion){
	this->posicionEnVectorCultivos=posicion;
}

void InfoDeUnCultivo::cambiarSiguiente(InfoDeUnCultivo* nuevoSiguiente){
	this->siguiente=nuevoSiguiente;
}

InfoDeUnCultivo* InfoDeUnCultivo::obtenerSiguiente(){
	return siguiente;
}





