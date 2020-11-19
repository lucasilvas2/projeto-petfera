#ifndef ESTOQUE
#define ESTOQUE

#include "animais.hpp"
#include <iostream>
#include <vector>

class Estoque{
private:
	std::vector<Animais*> estoque;
public:
	bool criarAnimal();
	bool adicionarAnimal(Animais* animal);
	void listarAnimais();
	
};

#endif
