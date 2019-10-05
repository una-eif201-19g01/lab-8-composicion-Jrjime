//
// Created by Rafael Jiménez  on 2019-10-03.
//

#ifndef LAB_8_COMPOSICION_CARRO_H
#define LAB_8_COMPOSICION_CARRO_H

#include "Puerta.h"
#include "Motor.h"
#include "Rueda.h"
#include "Ventana.h"
#include <string>


class Carro {

	std::string placa;
	int litros;
	Puerta *puerta = new Puerta;
	Motor *motor;
	Rueda *rueda = new Rueda;

public:
	Carro();
	Carro(std::string, int, Puerta*, Motor*, Rueda*);
	~Carro();
	std::string toString();
	void encenderMotor();
	void apagarMotor();
	void abrirPuertas();
	void cerrarPuertas();
	void abrirVentanas();
	void cambiarPresionRueda(float);
};


#endif //LAB_8_COMPOSICION_CARRO_H


