#pragma once

#include "profissional.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include <iostream>
#include <vector>

class FuncLoja{
private:
	std::vector<Profissional*> funcionarios;
public:
	bool adicionarFunc(Profissional* profissional);
	bool criarFunc();
	void listarFunc();
	Profissional* encontrarFunc(string nome);
	Profissional* removerFunc(string nome);
};
