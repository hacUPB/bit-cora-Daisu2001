#include <iostream>
#include <cstdlib>
using namespace std;



int main() {    
		// Variable local (stack)    
		int a = 10;    
		int b = 20;
    /**********************************************************        
    EXPERIMENTO 1    
    ***********************************************************/
    void* ptr = reinterpret_cast<void*>(&main);    
    cout << "Voy a modificar la memoria en la dirección: " << ptr << endl;    
    *reinterpret_cast<int*>(ptr) = 0;
    /********************************************************/
    return 0;
    }

// Constante global
const char* const mensaje_ro = "Hola, memoria de solo lectura";

int main() {    
		// Variable local (stack)    
		int a = 10;    
		int b = 20;

    /**********************************************************        
    EXPERIMENTO 2    
    ***********************************************************/
    char* ptr = (char*)&mensaje_ro;    
    cout << "Voy a modificar la memoria en la dirección: " << ptr << endl;    
    *ptr = 0;
    /********************************************************/
    return 0;
    }



// Variables globales
int global_inicializada = 42;
int global_no_inicializada;

int main() {    // Variable local (stack)    
    int a = 10;
    int b = 20;
    /**********************************************************
    EXPERIMENTO 3
    ***********************************************************/
    cout << "global_inicializada: " << global_inicializada << endl;
    cout << "global_no_inicializada: " << global_no_inicializada << endl;

    global_inicializada = 69;
    global_no_inicializada = 666;
    cout << "global_inicializada: " << global_inicializada << endl;
    cout << "global_no_inicializada: " << global_no_inicializada << endl;
    /********************************************************/
    return 0;
}

void funcionConStatic() {
    static int var_estatica = 100;
    cout << "Dirección de var_estatica (static): " << &var_estatica << endl;
}

int main() {    // Variable local (stack)    
    int a = 10;
    int b = 20;
    /**********************************************************
    EXPERIMENTO 4
    ***********************************************************/
    var_estatica = 42;
    cout << "var_estatica: " << var_estatica << endl;
    /********************************************************/
    return 0;
}


void funcionConStatic() {    
		static int var_estatica = 100;    
		cout << "var_estatica: " << var_estatica << endl;    
		var_estatica++;
}
		
void funcionSinStatic() {    
		int var_no_estatica = 100;    
		cout << "var_no_estatica: " << var_no_estatica << endl;    
		var_no_estatica++;
}

int main() {    // Variable local (stack)    
		int a = 10;    
		int b = 20;
    /**********************************************************        
    EXPERIMENTO 5    
    ***********************************************************/
    for (int i = 0; i < 5; i++) {        
		    cout << "Iteración " << i << endl;        
		    funcionSinStatic();        
		    funcionConStatic();    
		}
    /********************************************************/
    return 0;
    }

int main() {    // Tamaño del arreglo dinámico    
		int tam = 5;
    // Asignar memoria en el Heap para un arreglo de enteros    
    int* arrayHeap = new int[tam];
    // Inicializar y mostrar los valores y direcciones de memoria    
    for (int i = 0; i < tam; i++) {        
		    arrayHeap[i] = (i + 1) * 10;        
		    cout << "arrayHeap[" << i << "] = " << arrayHeap[i] << " en dirección " << (arrayHeap + i) << endl;    
		    }
    // Liberar la memoria asignada en el Heap    
    delete[] arrayHeap;
    /**********************************************************        
    EXPERIMENTO 6    
    ***********************************************************/
    cout << arrayHeap[0] << endl;

    /********************************************************/
    return 0;
    }