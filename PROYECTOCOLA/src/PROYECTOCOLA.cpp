//============================================================================
// Name        : PROYECTOCOLA.cpp
// Author      : DRASLY RAFAEL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "COLA.H"
using namespace std;

int main() {
	cout << "!!!PROYECTO COLA ---- DRASLY RAFAEL---- !!" << endl;

	ProyectoCola Cola;

	Cola.Push('D');
	Cola.Push('R');
	Cola.Push('A');
	Cola.Push('S');
	Cola.Push('L');
	Cola.Push('Y');
	Cola.mostrar();
	Cola.tamanio();
	Cola.Pop();
	Cola.mostrar();
	Cola.Top();
	return 0;
}
