/*
 * infoDeUnCultivo.h
 *
 *  Created on: 25 abr. 2018
 *      Author: jonathan
 */

#ifndef INFODEUNCULTIVO_H_
#define INFODEUNCULTIVO_H_

typedef unsigned ui;

class InfoDeUnCultivo{

	private:

        char nombre;
        ui fila,columna, posicionEnVectorCultivos;
        InfoDeUnCultivo* siguiente;

    public:


        /* pre: nombre pertenece [A,Z], 0<=fila<N, 0<columna<M, 0<posicionEnVector<=topeDelVector
         * post: el Nodo InfoDeUnCultivo resulta inicializado con los datos dados
         *       y sin un Nodo siguiente.
         */
        InfoDeUnCultivo(char nombre,ui fila, ui columna,ui posicionEnVectorCultivos);

        /*Pre:
         * post: Devuelve el nombreDelCultivo.
         */
        char obtenerNombre();

        /*Pre:
         * post: devuelve la posicion del cultivo en el vector de cultivos.
         */
        ui obtenerPosicionEnVectorCultivos();

        /*Pre:
         * Post: devuelve la coordenada 'fila' del cultivo plantado en el terreno.
         */
        ui obtenerFilaTerreno();

        /*
         * post: devuelve la coordenada 'columna' del cultivo plantado en el terreno.
         */
        ui obtenerColumnaTerreno();

        /*pre: el nombre pertenece [A,Z]
         * post: asigna el nombre del cultivo.
         */
        void asignarNombre(char nombre);

        /*pre:0<fila<N, 0<columna<M
         * post: guarda la posicion(en el nodo 'InfoDeUnCultivo' actual) del cultivo en el terreno .
         */
         void asignarPosicionTerreno(ui fila, ui columna);

        /*Pre:Recibe la posicion(en el vector) del cultivo plantado
         * post: la guarda en el nodo 'InfoDeUnCultivo' actual.
         */
         void asignarPosicionEnVector(ui posicion);

        /*pre:nuevoSiguiente es una direccion valida de un nodo creado en el heap
         * post: cambia el siguiente nodo de InfoDeUnCultivo por nuevoSiguiente.
         */
         void cambiarSiguiente(InfoDeUnCultivo* nuevoSiguiente);

         /*pre:
          * post: devuelve el siguiente nodo de InfoDeUnCultivo.
          */
         InfoDeUnCultivo* obtenerSiguiente();

};



#endif /* INFODEUNCULTIVO_H_ */
