
#include <iostream>
#include "Carro.h"
#include "Propietario.h"

int main() {


	Carro *carro = new Carro;
	Propietario *propietario;

	std::cout << carro->toString();

	std::cout << "---------------------------- \n";

	carro->encenderMotor();
	carro->abrirPuertas();
	carro->abrirVentanas();
	carro->cambiarPresionRueda(30.50);

	std::cout << carro->toString();
	return 0;
}