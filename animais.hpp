#ifndef ANIMAIS
#define ANIMAIS

#include "tratador.hpp"
#include "veterinario.hpp"

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
	Veterinario* veterinario=nullptr;
	int idade;

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
	void setVeterinario(Tratador &tratador);
	Tratador* getVeterinario();

};


#endif