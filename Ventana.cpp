//
// Created by Rafael Jiménez  on 2019-10-03.
//

#include "Ventana.h"

Ventana::Ventana()
{
	polarizada = false;
	electrica = false;
	estado = false;
}

Ventana::Ventana(bool &electrica, bool &polarizada, bool &estado)
{
	Ventana::electrica = electrica;
	Ventana::polarizada = polarizada;
	Ventana::estado = estado;
}

void Ventana::abrir()
{
	estado = true;
}

void Ventana::cerrar()
{
	estado = false;
}

void Ventana::setPolarizada(bool polarizada)
{
	Ventana::polarizada = polarizada;
}

void Ventana::setElectrica(bool electrica)
{
	Ventana::electrica = electrica;
}

bool Ventana::getPolarizada()
{
	return polarizada;
}

bool Ventana::getElectrica()
{
	return electrica;
}

bool Ventana::getEstado()
{
	return estado;
}

std::string Ventana::toString()
{
	std::string reporte;
	std::string estado;
	std::string electrica;
	std::string polarizada;

	if (getEstado() == true) {
		estado = "abiertas";
	}
	else {
		estado = "cerradas";
	}

	if (getPolarizada() == true) {
		polarizada = "son polarizadas";
	}
	else 
	{
		polarizada = "no son polarizadas";
	}

	if (getElectrica() == true) {
		electrica = "son electricas";
	}
	else {
		electrica = "no son electricas";
	}
	reporte = reporte + "Las ventanas estan " + estado + ", " + electrica + " y " + polarizada + "\n";

	return reporte;
}
