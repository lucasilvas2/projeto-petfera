#ifndef ANIMAIS
#define ANIMAIS

#include "tratador.hpp"

enum Habitat{
	nativo,
	exotico,
	domestico
};

class Animais{
protected:
	double preco;
	Habitat habitat;
	bool ameacado;
	Tratador* tratador=nullptr;

public:
	Animais(double preco, Habitat habitat, bool ameacado);
	Animais();
	void setPreco(double preco);
	double getPreco();
	void setAmeacado(bool ameacado);
	bool getAmeacado();
	void setHabitat(Habitat habitat);
	Habitat getHabitat();
	void setTratador(Tratador &tratador);
	Tratador* getTratador();

};


#endif