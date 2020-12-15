#include "funcloja.hpp"
#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>
#include <string>
/*
using std::stringstream;
using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::endl;
using std::ios;
using std::vector;
using std::fixed;
using std::setprecision;
using std::ostream;
using std::istream;*/

using namespace std;

bool FuncLoja::adicionarFunc(std::shared_ptr <Profissional> profissional){
	this->funcionarios.push_back(profissional);
	return true;
}

bool FuncLoja::criarFunc(){
	int opcao;
	string nome;
	string contato;
	string endereco;
	cout << "(1-veterinario) | (2-tratador): ";
	cin >> opcao;
	switch(opcao){
		case 1:{
			string linha;
			getline(cin, linha);
			string crmv;
			cout << "Nome: ";
			getline(cin, nome);
			cout << "Contato: ";
			getline(cin, contato);
			cout << "Endereço: ";
			getline(cin, endereco);
			cout << "CRMV: ";
			cin >> crmv;
			limparTelaFunc();
			return adicionarFunc(make_shared <Veterinario>(nome,contato,endereco,crmv));
		}
		case 2:
			int opc;
			Nivel nivel;
			string linha;
			getline(cin, linha);
			string crmv;
			cout << "Nome: ";
			getline(cin, nome);
			cout << "Contato: ";
			getline(cin, contato);
			cout << "Endereço: ";
			getline(cin, endereco);
			cout << "CRMV: ";
			cin >> crmv;
			cout << "(0-verde) (1-azul) (2-vermelho): ";
			cin >> opc;
			if(opc==0){
				nivel=verde;
			}else if(opc==1){
				nivel=azul;
			}else{
				nivel=vermelho;
			}
			limparTelaFunc();
			return adicionarFunc(make_shared <Tratador>(nome,contato,endereco,nivel));
	}
	return 0;
}

void FuncLoja::listarFunc(){
	for(auto& prof: this->funcionarios){
		cout <<*prof<<endl;
	}
}

shared_ptr <Profissional> FuncLoja::encontrarFunc(string nome){
	for(auto& prof: this->funcionarios){
		if(prof->getNome()==nome){
			cout<<"encontrado funcionario: "<<*prof<<endl;
			return prof;
		}
	}
	cout<<"não encontrado"<<endl;
	return nullptr;
}

shared_ptr<Profissional> FuncLoja::removerFunc(string nome){
	int index=0;
	for(auto& prof: this->funcionarios){
		if(prof->getNome()==nome){
			shared_ptr <Profissional> removido=prof;
			cout<<"removido funcionario: "<<*prof<<endl;
			this->funcionarios.erase(this->funcionarios.begin()+index);
			return removido;
		}
		index++;
	}
	return nullptr;
}

void FuncLoja::salvarFuncionarios(){
	ofstream arqDadosFunc("dados_funcionarios.dat");
	shared_ptr <Veterinario> v; 
	shared_ptr <Tratador> t;
	for(auto& prof: this->funcionarios){
		if(prof->getTipoProf()==veterinario){
			v=dynamic_pointer_cast<Veterinario>(prof);
			arqDadosFunc<<v->getTipoProf()<<";"<<v->getNome()<<";"<<v->getContato()<<";"
				<<v->getEndereco()<<";"<<v->getCrmv()<<endl;
		}
		if(prof->getTipoProf()==tratador){
			t=dynamic_pointer_cast<Tratador>(prof);
			arqDadosFunc<<t->getTipoProf()<<";"<<t->getNome()<<";"<<t->getContato()<<";"
				<<t->getEndereco()<<";"<<t->getNivel()<<endl;
		}
	}
}


void FuncLoja::limparTelaFunc(){
	#if defined _WIN32
    	system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("clear");
	#elif defined (__APPLE__)
    	system("clear");
	#endif
}

/*
string nome, string contato, string endereco, string crmv)

(string nome, string contato, string endereco,Nivel nivel)*/