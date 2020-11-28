#include "loja.hpp"
#include <iostream>

void Loja::menu(){
	int opcao=0;
	int opcProf;
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
				cout<<"Digite o numero de identificacao do animal: ";
				cin>>numero;
				cout<<"Atribuir (1-Veterinario) (2-Tratador): ";
				cin>>opcProf;
				if(opcProf==1){
					cout<<"Digite o nome do veterinario: ";
					cin>>nome;
					Animais* x;
					Profissional* y;
					Veterinario* z;
					x=this->estoque.encontrarAnimal(numero);
					y=this->funcionarios.encontrarFunc(nome);
					z=dynamic_cast<Veterinario*>(y);
					x->setVeterinario(*z);
				}else{
					cout<<"Digite o nome do tratador: ";
					cin>>nome;
					Animais* x;
					Profissional* y;
					Tratador* z;
					x=this->estoque.encontrarAnimal(numero);
					y=this->funcionarios.encontrarFunc(nome);
					z=dynamic_cast<Tratador*>(y);
					x->setTratador(*z);
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
				cout<<"Sessão Encerrada"<<endl;
			default:
				break;
		}

	}
}