#include <iostream>

#include "ListaDeCultivosPlantados.h"

using namespace std;



int main(){
	ListaDeCultivosPlantados unaLista;
	unaLista.agregarInfoCultivo(2,'C',1,2);
	unaLista.agregarInfoCultivo(3,'D',1,3);
	unaLista.agregarInfoCultivo(2,'C',1,5);
	unaLista.agregarInfoCultivo(3,'D',1,1);
	cout<<unaLista.obtenerInfoCultivo(1,2)->obtenerNombre()<<endl;
	cout<<unaLista.obtenerInfoCultivo(1,3)->obtenerNombre()<<endl;
	cout<<unaLista.obtenerInfoCultivo(1,5)->obtenerNombre()<<endl;
	unaLista.eliminarInfoCultivo(1,1,'0');
	//cout<<unaLista.obtenerInfoCultivo(1,3)->obtenerNombre();

	//unaLista.agregarInfoCultivo(2,'C',1,4);
	//cout<<unaLista.obtenerInfoCultivo(1,4)->obtenerNombre();
	return 0;

}

