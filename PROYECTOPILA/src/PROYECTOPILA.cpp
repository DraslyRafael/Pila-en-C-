//============================================================================
// Name        : PROYECTOPILA.cpp
// Author      : DRASLY RAFAEL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "PILA.H"
using namespace std;


int main() {
	cout << "********\tPROYECTO DRASLY *******" << endl;

pila pilita;
pilita.Push('D');
pilita.Push('R');
pilita.Push('A');
pilita.Push('S');
pilita.Push('L');
pilita.Push('Y');

pilita.mostrar();
pilita.tamanio();
pilita.Pop();

pilita.mostrar();

pilita.Top();

	return 0;
}

