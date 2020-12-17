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
using std::shared_ptr;

class FuncLoja{
private:
	vector<std::shared_ptr<Profissional>> funcionarios;
	void limparTelaFunc();
public:
	bool adicionarFunc(std::shared_ptr <Profissional> profissional);
	bool criarFunc();
	void listarFunc();
	void salvarFuncionarios();
	void carregarFuncionarios();
	std::shared_ptr <Profissional> encontrarFunc(string nome);
	std::shared_ptr <Profissional> removerFunc(string nome);
	bool findFunc(string nome);
	void alterarFuncionario(shared_ptr<Profissional> funcionario);
};

#endif