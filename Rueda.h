//
// Created by Rafael Jiménez  on 2019-10-03.
//

#ifndef LAB_8_COMPOSICION_RUEDA_H
#define LAB_8_COMPOSICION_RUEDA_H
#include <string>

class Rueda {

	float tamano;
	float presion;

public:
	Rueda();
	Rueda(float &, float &);
	void cambiarPresion(float&);
	std::string toString();
};


#endif //LAB_8_COMPOSICION_RUEDA_H

