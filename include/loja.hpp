#ifndef LOJA
#define LOJA

#include "animais.hpp"
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
};

#endif