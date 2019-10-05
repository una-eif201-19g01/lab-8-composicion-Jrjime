//
// Created by Rafael Jiménez  on 2019-10-03.
//

#ifndef LAB_8_COMPOSICION_VENTANA_H
#define LAB_8_COMPOSICION_VENTANA_H
#include <string>

class Ventana {

	bool polarizada;
	bool electrica;
	bool estado;

public:
	Ventana();
	Ventana(bool &,bool &,bool &);
	void abrir();
	void cerrar();
	void setPolarizada(bool);
	void setElectrica(bool);
	bool getPolarizada();
	bool getElectrica();
	bool getEstado();
	std::string toString();

};


#endif //LAB_8_COMPOSICION_VENTANA_H

