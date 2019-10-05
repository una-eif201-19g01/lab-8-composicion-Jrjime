//
// Created by Rafael Jiménez on 2019-10-03.
//

#ifndef LAB_8_COMPOSICION_PROPIETARIO_H
#define LAB_8_COMPOSICION_PROPIETARIO_H
#include <string>

class Propietario {

	std::string nombre;

public:

	Propietario();
	Propietario(std::string &);
	std::string toString();
	void setNombre(std::string &);
	std::string getNombre();
};


#endif //LAB_8_COMPOSICION_PROPIETARIO_H

