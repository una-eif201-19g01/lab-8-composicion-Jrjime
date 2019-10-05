//
// Created by Rafael Jiménez  on 2019-10-03.
//

#include "Motor.h"

Motor::Motor()
{
	estado = false;
}

Motor::Motor(bool &estado)
{
	Motor::estado = estado;
}

Motor::~Motor()
{
}

void Motor::encender()
{
	estado = true;
}

void Motor::apagar()
{
	estado = false;
}

bool Motor::getEstado()
{
	return false;
}

std::string Motor::toString()
{
	std::string reporte;
	std::string estado;

	if (getEstado() == true) 
	{
		estado = "encendido";
	}
	else 
	{
		estado = "apagado";
	}
	reporte = reporte + "El motor esta " + estado + "\n";
	return reporte;
}
