#ifndef ESTOQUE
#define ESTOQUE

#include "animais.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

class Estoque{
private:
	vector<Animais*> estoque;
public:
	bool criarAnimal();
	bool adicionarAnimal(Animais* animal);
	Animais* encontrarAnimal(string identificacao);
	void listarAnimais();
	Animais* removerAnimal(string identificacao);
	void teste();
};

#endif
