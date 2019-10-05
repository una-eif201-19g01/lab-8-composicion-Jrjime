//
// Created by Rafael Jiménez  on 2019-10-03.
//

#ifndef LAB_8_COMPOSICION_MOTOR_H
#define LAB_8_COMPOSICION_MOTOR_H
#include <string>

class Motor {

	bool estado;

public:
	Motor();
	Motor(bool&);
	virtual ~Motor();
	void encender();
	void apagar();
	bool getEstado();
	std::string toString();
};


#endif //LAB_8_COMPOSICION_MOTOR_H

