//
// Created by Rafael Jiménez  on 2019-10-03.
//

#include "Propietario.h"

Propietario::Propietario()
{
	nombre = "";
}

Propietario::Propietario(std::string & nombre)
{
	Propietario::nombre = nombre;
}

std::string Propietario::toString()
{
	std::string reporte;

	reporte = reporte + "El nombre del propietario es " + getNombre() + "\n";

	return reporte;
}

void Propietario::setNombre(std::string & nombre)
{
	Propietario::nombre = nombre;
}

std::string Propietario::getNombre()
{
	return nombre;
}
