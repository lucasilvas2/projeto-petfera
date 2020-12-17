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

/**
*@brief Método que inclui um profissional ao vetor de profissionais
*@param ponteiro para um profissional
*/
bool FuncLoja::adicionarFunc(std::shared_ptr <Profissional> profissional){
	this->funcionarios.push_back(profissional);
	return true;
}

/**
*@brief Método que instancia um profissional
*/
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

/**
*@brief Método que imprime todos os profissionais do vetor de profissionais
*/
void FuncLoja::listarFunc(){
	for(auto& prof: this->funcionarios){
		cout <<*prof<<endl;
	}
}

/**
*@brief Método que encontra um profissional específico dentro do vetor de profissionais
*@param nome do profissional
*@return ponteiro para o profissional encontrado
*/
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

/**
*@brief Método que exclui um profissional do vetor de profissionais
*@param nome do profissional
*@return ponteiro para o profissional removido
*/
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

/**
*@brief Método que salva os dados dos profissionais contidos no vetor de profissionais
*/
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

/**
*@brief Método que carrega os dados dos profissionais de um arquivo
*/
void FuncLoja::carregarFuncionarios(){
cout<<"Dados dos funcionarios foram carregados"<<endl;
	cout<<endl;
	ifstream arqDadosFunc("dados_funcionarios.dat");
	string linha;
	string palavra;
	while(getline(arqDadosFunc,linha)){
		stringstream s(linha);
		vector <string> tokens;
		while(getline(s,palavra,';')){
			tokens.push_back(palavra);
		}
		if(tokens.at(0)=="0"){
			adicionarFunc(make_shared <Veterinario>(tokens.at(1), tokens.at(2), 
				tokens.at(3),tokens.at(4)));
		}
		if(tokens.at(0)=="1"){
			Nivel nivel;
			if(tokens.at(4)=="0"){
				nivel=verde;
			}else if(tokens.at(4)=="1"){
				nivel=azul;
			}else{
				nivel=vermelho;
			}
			adicionarFunc(make_shared <Tratador>(tokens.at(1), tokens.at(2), 
				tokens.at(3), nivel));
		}
	}
}
void FuncLoja::alterarFuncionario(shared_ptr<Profissional> funcionario){
	int ver;
	int opc;
	string nome;
	string novoNome;
	string novoContato;
	string novoEndereco;

	do{
		cout << "1 - Alterar nome" << endl
		<< "2 - Alterar contato" << endl
		<< "3 - Alterar endereço" << endl
		<< "4 - Alterar CRMV" << endl
		<< "5 - Alterar nível tratador" << endl
		<< "0 - Finalizar alteração" << endl;
		cin >> ver;
		
		if(ver == 1){
			cin.ignore();
			cout << "Novo nome: ";
			//cin >> novoNome;
			getline(cin, novoNome);
			funcionario->setNome(novoNome);
		}
		else if(ver == 2){
			cin.ignore();
			cout << "Novo contato: ";
			getline(cin, novoContato);
			funcionario->setContato(novoContato);
		}
		else if(ver == 3){
			cin.ignore();
			cout << "Novo endereço: ";
			getline(cin, novoEndereco);
			funcionario-> setEndereco(novoEndereco);
		}
		else if(ver == 4){
			if(funcionario->getTipoProf() == 0){
				string novoCRMV;
				shared_ptr<Veterinario> alterado = dynamic_pointer_cast<Veterinario>(funcionario);
				cin.ignore();
				cout << "Novo CRMV: ";
				getline(cin, novoCRMV);
				alterado->setCrmv(novoCRMV);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}
					
		}
		else if(ver == 5)
		{
			if(funcionario->getTipoProf() == 1){
				Nivel novoNivel;
				shared_ptr<Tratador> alterado = dynamic_pointer_cast<Tratador>(funcionario);
				cout << "Novo nível: (1 - Verde)(2 - Azul) (3 - Vermelho) ";
				cin >> opc;
				if(opc == 1){
					novoNivel = verde;
					alterado->setNivel(novoNivel);
				}
				else if(opc == 2){
					novoNivel = azul;
					alterado->setNivel(novoNivel);
				}
				else if(opc == 3){
					novoNivel = vermelho;
					alterado->setNivel(novoNivel);
				}
						else{
					cout << "Opção invalida..." << endl;
				}
						
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}					
		}		
	
	}while (ver != 0);	
}

bool FuncLoja::findFunc(string nome){
	if(encontrarFunc(nome) == nullptr){
		return false;
	}
	return true;
}

/**
*@brief Método que limpa a tela 
*/
void FuncLoja::limparTelaFunc(){
	#if defined _WIN32
    	system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("clear");
	#elif defined (__APPLE__)
    	system("clear");
	#endif
}