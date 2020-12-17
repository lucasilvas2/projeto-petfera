#include "loja.hpp"
#include "animal.hpp"
#include <iostream>

/**
*@brief Método que inicia um menu para interface com o usuário
*/
void Loja::menu(){
	int opcao=0;
	int opcProf;
	string numero;
	string nome;
	string nomeFunc;
	cout << " _____           _        _____   _                     "<< endl;
	cout << "|  __ \\         | |      / ____| | |                    "<< endl;
	cout << "| |__) |   ___  | |_    | (___   | |__     ___    _ __  "<< endl;
	cout << "|  ___/   / _ \\ | __|    \\___ \\  | '_ \\   / _ \\  | '_ \\ "<< endl;
	cout << "| |      |  __/ | |_     ____) | | | | | | (_) | | |_) |"<< endl;
	cout << "|_|       \\___|  \\__|   |_____/  |_| |_|  \\___/  | .__/ "<< endl;
	cout << "                                                 | |    "<< endl;
	cout << "                                                 |_|    "<< endl;
	cout << "	 ____                        "<< endl;
	cout << "	|  _ \\                       "<< endl;
	cout << "	| |_) |   ___    _   _   ___ "<< endl;
	cout << "	|  _ <   / _ \\  | | | | / __|"<< endl;
	cout << "	| |_) | | (_) | | |_| | \\__ \\"<< endl;
	cout << "	|____/   \\___/   \\__, | |___/"<< endl;
	cout << "	                  __/ |      "<< endl;
	cout << "	                 |___/       "<< endl;
	//cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	pausar();
	limparTela();
	this->estoque.carregarAnimais();
	this->funcionarios.carregarFuncionarios();

	while(opcao!=11){
		cout<<"Digite a opção:"<<endl;
		cout<<"1 - Criar Animal"<<endl;
		cout<<"2 - Excluir Animal"<<endl;
		cout<<"3 - Atribuir vet/trat a Animal"<<endl;
		cout<<"4 - Listar Animais"<<endl;
		cout<<"5 - Criar Funcionario"<<endl;
		cout<<"6 - Excluir Funcionario"<<endl;
		cout<<"7 - Listar Funcionarios"<<endl;
		cout<<"8 - Alterar Animal"<<endl;
		cout<<"9 - Salvar Dados"<<endl;
		cout<<"10 - Alterar Funcionário"<<endl;
		cout<<"11- Sair"<<endl;
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
				cout<<"Digite o numero de identificacao do animal: ";
				cin>>numero;
				cout<<"Atribuir (1-Veterinario) (2-Tratador): ";
				cin>>opcProf;
				if(opcProf==1){
					cout<<"Digite o nome do veterinario: ";
					cin>>nome;
					shared_ptr<Animal> x;
					shared_ptr <Profissional> y;
					shared_ptr<Veterinario> z;
					x=this->estoque.encontrarAnimal(numero);
					y=this->funcionarios.encontrarFunc(nome);
					z=dynamic_pointer_cast<Veterinario>(y);
					x->setVeterinario(z);
				}else{
					cout<<"Digite o nome do tratador: ";
					cin>>nome;
					shared_ptr<Animal> x;
					shared_ptr <Profissional> y;
					shared_ptr <Tratador> z;
					x=this->estoque.encontrarAnimal(numero);
					y=this->funcionarios.encontrarFunc(nome);
					z=dynamic_pointer_cast<Tratador>(y);
					x->setTratador(z);
				}
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
				cout<<"Alterar Animal:"<<endl;
				cout<<"Digite o numero de identificacao do animal: ";
				cin>>numero;
				this->estoque.alterarAnimal(this->estoque.encontrarAnimal(numero));
				break;
			case 9:
				cout<<"Salvando Arquivo"<<std::endl;
				this->estoque.salvarAnimais();
				this->funcionarios.salvarFuncionarios();
				break;
			case 10:
				cout<<"Alterar Funcionário"<<std::endl;
				cin >> nomeFunc;
				this->funcionarios.alterarFuncionario(this->funcionarios.encontrarFunc(nomeFunc));
				break;
			case 11:
				cout<<"Sessão Encerrada"<<std::endl;
				break;
			default:
				cout<<"Opção inválida"<<endl;
				break;
		}
	}
}

/**
*@brief Método que pausa a execução do programa
*/
void Loja::pausar(){
    cout << "Pressione qualquer tecla para continuar...";
	cin.get();
	cin.ignore();
}

/**
*@brief Método que limpa a tela 
*/
void Loja::limparTela(){
	#if defined _WIN32
    	system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("clear");
	#elif defined (__APPLE__)
    	system("clear");
	#endif
}