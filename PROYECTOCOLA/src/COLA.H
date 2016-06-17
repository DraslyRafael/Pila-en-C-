/*
 * COLA.H
 *
 *  Created on: 14/06/2016
 *      Author: Seida
 */

#ifndef COLA_H_
#define COLA_H_
#include <iostream>

using namespace std;

struct ProyectoCola{
	char datos;
	struct ProyectoCola *siguiente;

	ProyectoCola *inicio=NULL;
	ProyectoCola *ultimo=NULL;
	ProyectoCola *aux;

int elemntos;
int bytePila;

	void Push(char letras){

	aux=new(ProyectoCola);
	aux->datos=letras;
	if(inicio==NULL){
		inicio=ultimo=aux;
		aux->siguiente=NULL;
		}else{
			aux->siguiente=NULL;
			ultimo->siguiente=aux;
			ultimo=aux;
		}
	}

	void Pop(){
	if (inicio==NULL){
		cout <<"NO HAY NADA QUE DESCOLAR " <<endl;
	}else{
	ultimo = inicio;
	inicio=ultimo->siguiente;
	delete (ultimo);

	cout << "LO INGRESADO HA SIDO DESCOLADO" <<endl;
		}
	}

	void mostrar (){
		int cont=0;
		int t=sizeof(ProyectoCola);
	ultimo = inicio;
	if (inicio==NULL){
		cout << "LO SENTIMOS COLA VACIA" <<endl;

	}else{
		while (ultimo!=NULL){
			cout << ultimo->datos <<endl;
			ultimo = ultimo->siguiente;
			cont=cont+1;


		}
		bytePila=cont*t;
		elemntos=cont;

		cout << "EL NUMERO DE ELEMENTOS SON "<< cont <<endl;
	}
	}

	void tamanio(){
		cout<<"EL TAMAÑO DE LA COLA ES:" << bytePila <<endl;

	}

	void Top (){
if (inicio==NULL){
	cout << "UuPSSS LA COLA ESTA VACIA";
}else {
		cout << " ES = ";
		cout<<inicio->datos<<endl;

	}
}

};



#endif /* COLA_H_ */
