#include "funcloja.hpp"
#include <iostream>

using namespace std;

bool FuncLoja::adicionarFunc(Profissional* profissional){
	this->funcionarios.push_back(profissional);
	return true;
}

bool FuncLoja::criarFunc(){
	int opcao;
	string nome;
	string contato;
	string endereco;
	cout << "(1-veterinario) | (2-tratador) ";
	cin >> opcao;
	switch(opcao){
		case 1:{
			string crmv;
			cout << "nome ";
			cin >> nome;
			cout << "contato ";
			cin >> contato;
			cout << "endereco ";
			cin >> endereco;
			cout << "CRMV ";
			cin >> crmv;
			return adicionarFunc(new Veterinario(nome,contato,endereco,crmv));
		}
		case 2:
			int opc;
			Nivel nivel;
			cout << "nome ";
			cin >> nome;
			cout << "contato ";
			cin >> contato;
			cout << "endereco ";
			cin >> endereco;
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

void FuncLoja::listarFunc(){
	for(auto& prof: this->funcionarios){
		cout <<*prof<<endl;
	}
}

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