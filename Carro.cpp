#include "Carro.h"

Carro::Carro()
{
}

Carro::Carro(std::string placa, int litros, Puerta *puerta, Motor *motor, Rueda *rueda)
{
	Carro::placa = placa;
	Carro::litros = litros;
	Carro::puerta = puerta;
	Carro::rueda = rueda;
	Carro::motor = motor;


}

Carro::~Carro()
{
	delete puerta;
	delete motor;
	delete rueda;


	puerta = nullptr;
	motor = nullptr;
	rueda = nullptr;

}

std::string Carro::toString()
{
	std::string reporte;

	reporte = reporte + motor->toString() + puerta->toString() + rueda->toString();

	return reporte;
}

void Carro::encenderMotor()
{

	motor->encender();
}

void Carro::apagarMotor()
{
	motor->apagar();
}


void Carro::abrirPuertas()
{
	puerta->abrirPuerta();
}

void Carro::cerrarPuertas()
{
	puerta->cerrarPuerta();
}

void Carro::abrirVentanas()
{
	puerta->abrirVentana();
}

void Carro::cambiarPresionRueda(float presion)
{
	rueda->cambiarPresion(presion);
}
