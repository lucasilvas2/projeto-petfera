#pragma once

#include "profissional.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include <iostream>
#include <vector>

using std::vector;

class FuncLoja{
private:
	vector<Profissional*> funcionarios;
	void limparTelaFunc();
public:
	bool adicionarFunc(Profissional* profissional);
	bool criarFunc();
	void listarFunc();
	Profissional* encontrarFunc(string nome);
	Profissional* removerFunc(string nome);
};