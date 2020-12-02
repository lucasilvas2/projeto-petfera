#include "estoque.hpp"
#include "animal.hpp"
#include "ave.hpp"
#include "anfibio.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"

#include <iostream>

bool Estoque::adicionarAnimal(Animal* novoAnimal){
	this->estoque.push_back(novoAnimal);
	return true;
}

void Estoque::listarAnimais(){
	for (auto& animal: this->estoque){
		cout<<*animal<<endl;
	}
}

Animal* Estoque::encontrarAnimal(string identificacao){
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			cout<<"encontrado: "<<*animal<<endl;
			return animal;
		}
	}
	cout << "nao encontrado" << endl;
	return nullptr;
}

Animal* Estoque::removerAnimal(string identificacao){
	int index=0;
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			Animal* removido=animal;
			cout<<"removido animal: "<<*animal<<endl;
			this->estoque.erase(this->estoque.begin()+index);
			return removido;
		}
		index++;
	}
	return nullptr;
}

bool Estoque::criarAnimal(){
	int opcao;
	string identificacao;
	double preco;
	string descricao;
	string coloracao;
	int opcHab;
	bool ameacado;
	double peso;
	int opcSexo;
	tipoSexo sexo;
	cout << "(1-Anfibio) | (2-Reptil) | (3-Ave) | (4-Mamifero): ";
	cin >> opcao;
	cout << "Identificacao: ";
	cin >> identificacao;
	cout << "Preco: ";
	cin >> preco;
	cout << "Descricao: ";
	cin >> descricao;
	cout << "Coloracao: ";
	cin >> coloracao;
	cout << "Habitat (0-nativo),(1-exotico) ou (2-domestico): ";
	cin >> opcHab;
	if(opcHab==0){
		habitat=nativo;
	}else if(opcHab==1){

		habitat=exotico;
	}else{
		habitat=domestico;
	}
	cout << "ameaçado 0(nao) ou 1(sim) ";
	cin >> ameacado;
	cout << "Peso: ";
	cin >> peso;
	cout << "(0-Macho) ou (1-Femea)";
	cin >> opcSexo;
	if(opcSexo==0){
		sexo=macho;
	}else{
		sexo=femea;
	}
	switch(opcao){
		case 1:
			Venenosos venenoso;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso)";
			cin >> opcVen;
			if(opcVen==0){
				venenoso=naoVenenoso;
			}else{
				venenoso=Venenoso;
			}
			
			return adicionarAnimal(new Anfibios(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,venenoso));

		case 2:
			Venomous veneno;
			int opcVene;
			double comprimento;
			cout << "(0-Nao Venenoso) ou (1-Venenoso)";
			cin >> opcVene;
			if(opcVene==0){
				veneno=nao;
			}else{
				veneno=sim;
			}
			cout << "Comprimento: ";
			cin >> comprimento;
		 	return adicionarAnimal(new Reptil(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,veneno,comprimento));

		case 3:
			HabilidadeVoo habVoo;
			int opcVoo;
			double envergadura;
			cout << "(0-Ratita) ou (1-Carenata)";
			cin >> opcVoo;
			if(opcVoo==0){
				habVoo=ratitas;
			}else{
				habVoo=carenatas;
			}
			cout <<"Envergadura: ";
			cin >> envergadura;
		 	return adicionarAnimal(new Aves(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,habVoo,envergadura));
		
		case 4:
			Alimentacao alimentacao;
			int opcAlim;
			cout << "(0-Carnivoro), (1-Herbivoro) ou (2-Onivoro)";
			cin >> opcAlim;
			if(opcAlim==0){
				alimentacao=Carnivoro;
			}else if(opcAlim==1){
				alimentacao=Herbivoro;
			}else{
				alimentacao=Onivoro;
			}
		 	return adicionarAnimal(new Mamiferos(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,alimentacao));
		
		default:
			break;
	}
	return 0;
}

/*
void Estoque::menu(){
	int opcao=0;
	string numero;
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
				this->criarAnimal();
				break;
			case 2:
				cout<<"Excluir Animal:"<<endl;
				cout<<"Digite o numero de identificacao do animal a ser excluido: ";
				cin>>numero;
				this->removerAnimal(numero);
				break;
			case 3:
				cout<<"Atribuir vet/trat a Animal:"<<endl;
				break;
			case 4:
				cout<<"Listar Animais:"<<endl;
				this->listarAnimais();
				break;
			case 5:
				cout<<"Criar Funcionario:"<<endl;
				break;
			case 6:
				cout<<"Excluir Funcionario:"<<endl;
				break;
			case 7:
				cout<<"Listar Funcionarios:"<<endl;
				break;
			case 8:
				cout<<"Sessão Encerrada"<<endl;
			default:
				break;
		}

	}
}*/