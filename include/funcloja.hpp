//#pragma once
#ifndef FUNCLOJA
#define FUNCLOJA

#include "profissional.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include <iomanip>
#include <memory>
#include <vector>

using std::vector;

class FuncLoja{
private:
	vector<std::shared_ptr<Profissional>> funcionarios;
	void limparTelaFunc();
public:
	bool adicionarFunc(std::shared_ptr <Profissional> profissional);
	bool criarFunc();
	void listarFunc();
	void salvarFuncionarios();
	std::shared_ptr <Profissional> encontrarFunc(string nome);
	std::shared_ptr <Profissional> removerFunc(string nome);
};

#endif