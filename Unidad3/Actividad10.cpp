#include <iostream>
#include <string>
class Personaje {
public:
	std::string nombre;
	int* estadisticas;
	Personaje(std::string n, int vida, int ataque, int defensa) {
		nombre = n;
		estadisticas = new int[3];
		estadisticas[0] = vida;
		estadisticas[1] = ataque;
		estadisticas[2] = defensa;
		std::cout << "Constructor: nace " << nombre << std::endl;
	}
	void imprimir() {
		std::cout << "Personaje " << nombre << " [Vida: " << estadisticas[0] << ", ATK: " << estadisticas[1] << ", DEF: " << estadisticas[2] << "]" << std::endl;
	}
	~Personaje() {
		std::cout << "Destructor: muere " << nombre << std::endl;
		delete[] estadisticas;
	}
};
void simularEncuentro() {
	std::cout << "\n--- Iniciando encuentro ---" << std::endl;
	Personaje heroe("Aragorn", 100, 20, 15);
	Personaje* copiaHeroe = &heroe; // Copias la dirección, no el objeto
	std::cout << "copia de" << copiaHeroe->nombre << std::endl;
	std::cout << "Saliendo del encuentro..." << std::endl;
}
int main() {
	simularEncuentro();
	std::cout << "\nSimulación terminada." << std::endl;	 
	return 0;
}