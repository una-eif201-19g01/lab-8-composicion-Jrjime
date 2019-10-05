//
// Created by Rafael Jiménez  on 2019-10-03.
//

#include "Puerta.h"

Puerta::Puerta()
{
	ventana = new Ventana();
	estado = false;
}

Puerta::Puerta(Ventana *ventana, bool &estado)
{
	Puerta::ventana = ventana;
	Puerta::estado = estado;
}

void Puerta::abrirPuerta()
{
	estado = true;
}

void Puerta::cerrarPuerta()
{
	estado = false;
}

void Puerta::abrirVentana()
{
	ventana->abrir();
}

void Puerta::cerrarVentana()
{
	ventana->cerrar();
}

bool Puerta::getEstado()
{
	return estado;
}

std::string Puerta::toString()
{
	std::string reporte;
	std::string estado;

	if (getEstado() == true) 
	{
		estado = "abiertas";
	}
	else 
	{
		estado = "cerradas";
	}

	reporte = reporte + "Las puertas estan " + estado + "\n" + ventana->toString();

	return reporte;
}
