/*
 * PILA.H
 *
 *  Created on: 10/06/2016
 *      Author: Seida
 */

#ifndef PILA_H_
#define PILA_H_
#include <iostream>

using namespace std;
struct pila{
	char datos;
	struct pila *siguiente;

	pila *inicio=NULL, *cima;
int elemntos;
int bytePila;

	void Push(char letras){
	cima=new(pila);
	cima->datos=letras;
	cima->siguiente=inicio;
	inicio = cima;
	}
	void Pop(){
	if (inicio==NULL){
		cout <<"\t NO HAY NADA QUE DESAPILAR " <<endl;
	}else{
	cima = inicio;
	inicio=cima->siguiente;
	delete (cima);

	cout << "LO INGRESADO HA SIDO DESAPILADO" <<endl;
		}
	}

	void mostrar (){
		int cont=0;
		int t=sizeof(pila);
	cima = inicio;
	if (inicio==NULL){
		cout << "LO SENTIMOS PILA VACIA" <<endl;

	}else{
		while (cima!=NULL){
			cout << cima->datos <<endl;
			cima = cima->siguiente;
			cont=cont+1;


		}
		bytePila=cont*t;
		elemntos=cont;

		cout << "\t EL NUMERO DE ELEMENTOS ES: "<< cont <<endl;
	}
	}

	void tamanio(){
		cout<<"\t EL TAMAÑO DE LA PILA ES: " << bytePila <<endl;

	}

	void Top (){
if (inicio==NULL){
	cout << "OPSSS LA PILA ESTA VACIA";
}else {
		cout << "\t LA CIMA DE LA PILA AHORA ES = ";
		cout<<inicio->datos<<endl;

	}
}

};

#endif /* PILA_H_ */
