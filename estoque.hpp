#ifndef ESTOQUE
#define ESTOQUE

#include "animais.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

class Estoque{
private:
	vector<Animais*> estoque;
public:
	bool criarAnimal();
	bool adicionarAnimal(Animais* animal);
	void listarAnimais();
	void teste();
};

#endif
