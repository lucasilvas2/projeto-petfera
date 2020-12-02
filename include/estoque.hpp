#ifndef ESTOQUE
#define ESTOQUE

#include "animal.hpp"
#include "funcloja.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

class Estoque{
private:
	vector<Animal*> estoque;
public:
	bool criarAnimal();
	bool adicionarAnimal(Animal* animal);
	Animal* encontrarAnimal(string identificacao);
	void listarAnimais();
	Animal* removerAnimal(string identificacao);
	void menu();
};

#endif