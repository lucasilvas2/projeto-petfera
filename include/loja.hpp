#ifndef LOJA
#define LOJA

#include "animal.hpp"
#include "estoque.hpp"
#include "funcloja.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

class Loja{
public:
	FuncLoja funcionarios;
	Estoque estoque;

	void menu();
	void pausar();
	void limparTela();
};

#endif