#include "loja.hpp"
#include <iostream>

void Loja::menu(){
	int opcao=0;
	string numero;
	string nome;
	while(opcao!=8){
		cout<<"Digite a opção:"<<endl;
		cout<<"1 - Criar Animal"<<endl;
		cout<<"2 - Excluir Animal"<<endl;
		cout<<"3 - Atribuir vet/trat a Animal"<<endl;
		cout<<"4 - Listar Animais"<<endl;
		cout<<"5 - Criar Funcionario"<<endl;
		cout<<"6 - Excluir Funcionario"<<endl;
		cout<<"7 - Listar Funcionarios"<<endl;
		cout<<"8 - Sair"<<endl;
		cin>>opcao;
		cout<<endl;
		switch(opcao){
			case 1:
				cout<<"Criar Animal:"<<endl;
				this->estoque.criarAnimal();
				break;
			case 2:
				cout<<"Excluir Animal:"<<endl;
				cout<<"Digite o numero de identificacao do animal a ser excluido: ";
				cin>>numero;
				this->estoque.removerAnimal(numero);
				break;
			case 3:
				cout<<"Atribuir vet/trat a Animal:"<<endl;
				break;
			case 4:
				cout<<"Listar Animais:"<<endl;
				this->estoque.listarAnimais();
				break;
			case 5:
				cout<<"Criar Funcionario:"<<endl;
				this->funcionarios.criarFunc();
				break;
			case 6:
				cout<<"Excluir Funcionario:"<<endl;
				cout<<"Digite o nome do funcionario a ser excluido: ";
				cin>>nome;
				this->funcionarios.removerFunc(nome);
				break;
			case 7:
				cout<<"Listar Funcionarios:"<<endl;
				this->funcionarios.listarFunc();
				break;
			case 8:
				cout<<"Sessão Encerrada"<<endl;
			default:
				break;
		}

	}
}

void Loja::pausar(){
	#if defined _WIN32
    	system("pause");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
	#elif defined (__APPLE__)
    	system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
	#endif	
}

void Loja::limparTela(){
	#if defined _WIN32
    	system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("clear");
	#elif defined (__APPLE__)
    	system("clear");
	#endif
}