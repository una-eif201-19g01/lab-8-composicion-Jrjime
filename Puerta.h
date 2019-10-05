//
// Created by Rafael Jiménez  on 2019-10-03.
//

#ifndef LAB_8_COMPOSICION
#define LAB_8_COMPOSICION

#include "Ventana.h"
#include <string>
class Puerta {

	Ventana * ventana;
	bool estado;

public:
	Puerta();
	Puerta(Ventana*,bool &);
	void abrirPuerta();
	void cerrarPuerta();
	void abrirVentana();
	void cerrarVentana();
	bool getEstado();
	std::string toString();
};


#endif //LAB_8_COMPOSICION_PUERTA_H
