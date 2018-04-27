/*
 * cultivosPlantados.h
 *
 *  Created on: 25 abr. 2018
 *      Author: jonathan
 */
#include "InfoDeUnCultivo.h"

#ifndef CULTIVOSPLANTADOS_H_
#define CULTIVOSPLANTADOS_H_

/*Esta clase albergara direcciones de los cultivos plantados en la matriz y del vector de cultivos
 * */
typedef unsigned long ul;

class ListaDeCultivosPlantados{

	private:

	    //contiene la direccion al primer nodo InfoDeUnCultivo;
		InfoDeUnCultivo * primero;

		//tope de la lista
		ul cantidadPlantadosActual;

	public:

		//Constructor sin parametros
		/*Pre:
		 * Post: inicializa las variables
		 */
		ListaDeCultivosPlantados();

		//Constructor sin parametros
	     /*Pre:
		  * Post: Devuelve si esta vacia.
		  */
		bool estaVacia();

		/*Pre:0<posicionEnVectorCultivos<topeDelVector, 0<fila<N, 0<columna<M, nombreCultivo pertence a [A,Z]
		 * Post:Sino existe la info del cultivo en la lista, crea la info y lo almacena en la misma
		 * 		Asigna informacion como nombreDeCultivoPlantado, direccionEnTerreno, direccionEnVectorCultivos
		 */
		void agregarInfoCultivo(ui posicionEnVectorCultivos,char nombreCultivo, ui fila,ui columna);

		/*Pre:0<fila<N, 0<columna<M, IDDeBorrado tiene un caracter ASCII cualquiera distinto de '~'
		 * Post:Elimina el nodo de la lista
		 */
		void eliminarInfoCultivo(ui fila,ui columna,char IDDeBorrado);

		/*Pre: 0<fila<N, 0<columna<M
		 * Post:Devuelve la direccion del nodo de la lista
		 */
	    InfoDeUnCultivo* obtenerInfoCultivo(ui fila,ui columna);

		/*Pre:
		  Post: libera memoria dinamica;
		  */
		~ListaDeCultivosPlantados();

};






#endif /* CULTIVOSPLANTADOS_H_ */
