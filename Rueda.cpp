//
// Created by Rafael Jiménez on 2019-10-03.
//

#include "Rueda.h"

Rueda::Rueda()
{
	tamano = 0.0;
	presion = 0.0;
}

Rueda::Rueda(float &tamano, float &presion)
{
	Rueda::tamano = tamano;
	Rueda::presion = presion;
}

void Rueda::cambiarPresion(float& presion)
{
	Rueda::presion = presion;
}

std::string Rueda::toString()
{
	std::string reporte;

	reporte = reporte + "La presion de las ruedas es " + std::to_string(presion) + "\n" + "El tamano de las ruedas es " + std::to_string(tamano) + "\n ";

	return reporte;
}
