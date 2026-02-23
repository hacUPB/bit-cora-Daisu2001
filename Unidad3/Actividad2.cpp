#include <iostream>
using namespace std;


void SwapPorValor(int a, int b) {
	cout << "Valor inicial de a: " << a << endl;
	cout << "Valor inicial de b: " << b << endl;
	int swap = a;
	a = b; 
	b = swap;
	cout << "Ahora los valores de A y B son: " << a << " " << " y " << b << " " << "respectivamente en la funcion" << endl;
	;
}


void SwapPorReferencia(int& a, int& b) {

	cout << "Valor inicial de a: " << a << endl;
	cout << "Valor inicial de b: " << b << endl;
	int swap = a;
	a = b;
	b = swap;
	cout << "Ahora los valores de A y B son: " << a << " " << " y " << b << " " << "respectivamente en la funcion" << endl;
	;
}


void SwapPorPuntero(int* a, int* b) {
	cout << "Valor inicial de a: " << *a << endl;
	cout << "Valor inicial de b: " << *b << endl;
	int swap = *a;
	*a = *b;
	*b = swap;
	cout << "Ahora los valores de A y B son: " << *a << " " << " y " << *b << " " << "respectivamente en la funcion" << endl;
;
}

int main() {
	int a = 10;    int b = 5;    
	cout << "Valor inicial de a: " << a << endl;
	cout << "Valor inicial de b: " << b << "\n" << endl;

	
	cout << "Ahora aplicando swap por valor: " << endl;
	SwapPorValor(a, b);
	cout << "Ahora los valores de A y B son: " << a << " " << " y " << b << " " << "respectivamente en el main\n" << endl;
	
	cout << "Ahora aplicando swap por referencia:" << endl;
	SwapPorReferencia(a, b);
	cout << "Ahora los valores de A y B son: " << a << " " << " y " << b << " " << "respectivamente en el main\n" << endl;

	a = 10;    b = 5;

	cout << "Reseteamos los valores de A y B para los punteros, ya que fueron alterados por el cambio por referencia" << endl;

	cout << "Ahora aplicando swap por puntero:" << endl;
	SwapPorPuntero(&a, &b);
	cout << "Ahora los valores de A y B son:" << a << " " << " y " << b << " " << "respectivamente en el main\n" << endl;
	
	
	return 0;
}