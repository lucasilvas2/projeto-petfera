#include "funcloja.hpp"
#include <iostream>

using namespace std;

/**
*@brief Adiciona um funcionario ao vetor de profissionais
*@param profissional a ser adicionado
*/
bool FuncLoja::adicionarFunc(Profissional* profissional){
	this->funcionarios.push_back(profissional);
	return true;
}

/**
*@brief Menu de interface para criação de um funcionario
*/
bool FuncLoja::criarFunc(){
	int opcao;
	string nome;
	string contato;
	string endereco;
	cout << "(1-veterinario) | (2-tratador) ";
	cin >> opcao;
	cin.ignore();
	switch(opcao){
		case 1:{
			string crmv;
			cout << "nome ";
			std::getline(std::cin,nome);
			//cin >> nome;
			cout << "contato ";
			cin >> contato;
			cin.ignore();
			cout << "endereco ";
			std::getline(std::cin,endereco);
			//cin >> endereco;
			cout << "CRMV ";
			cin >> crmv;
			return adicionarFunc(new Veterinario(nome,contato,endereco,crmv));
		}
		case 2:
			int opc;
			Nivel nivel;
			cout << "nome ";
			std::getline(std::cin,nome);
			//cin >> nome;
			cout << "contato ";
			cin >> contato;
			cin.ignore();
			cout << "endereco ";
			std::getline(std::cin,endereco);
			//cin >> endereco;
			cout << "(0-verde) (1-azul) (2-vermelho) ";
			cin >> opc;
			if(opc==0){
				nivel=verde;
			}else if(opc==1){
				nivel=azul;
			}else{
				nivel=vermelho;
			}
			return adicionarFunc(new Tratador(nome,contato,endereco,nivel));
	}
	return 0;
}

/**
*@brief Imprime todos os funcionarios contidos no vetor de profissionais
*/
void FuncLoja::listarFunc(){
	for(auto& prof: this->funcionarios){
		cout <<*prof<<endl;
	}
}

/**
*@brief Encontra um funcionario específico no vetor de profissionais e imprime seus dados
*@param nome do funcionario
*@return ponteiro para profissional encontrado
*/
Profissional* FuncLoja::encontrarFunc(string nome){
	for(auto& prof: this->funcionarios){
		if(prof->getNome()==nome){
			cout<<"encontrado funcionario: "<<*prof<<endl;
			return prof;
		}
	}
	cout<<"não encontrado"<<endl;
	return nullptr;
}

/**
*@brief Remove um funcionario específico do vetor de profissionais e imprime seus dados
*@param nome do funcionario
*@return ponteiro para o profissional removido
*/
Profissional* FuncLoja::removerFunc(string nome){
	int index=0;
	for(auto& prof: this->funcionarios){
		if(prof->getNome()==nome){
			Profissional* removido=prof;
			cout<<"removido funcionario: "<<*prof<<endl;
			this->funcionarios.erase(this->funcionarios.begin()+index);
			return removido;
		}
		index++;
	}
	return nullptr;
}