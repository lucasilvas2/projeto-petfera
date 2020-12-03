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
	int opcHab;
	string identificacao;
	double preco;
	string descricao;
	double peso;
	int opcSexo;
	tipoSexo sexo;
	bool ameacado;

	string linha;
	getline(cin, linha);

	cout << "Descricao: ";
	getline(cin,descricao);
	cout << "Identificacao: ";
	getline(cin, identificacao);
	cout << "(1-Anfibio) | (2-Reptil) | (3-Ave) | (4-Mamifero): ";
	cin >> opcao;
	cout << "Habitat (0 - Nativo), (1 - Exotico) ou (2 - Domestico): ";
	cin >> opcHab;	
	cout << "Peso: ";
	cin >> peso;
	cout << "(0 - Macho) ou (1 - Femea): ";
	cin >> opcSexo;
	if(opcSexo==0){
		sexo=macho;
	}else{
		sexo=femea;
	}
	cout << "Preco: ";
	cin >> preco;

	if (opcao == 1){ //Anfibio
		if(opcHab == 0){//Nativo
			Venenosos veneno;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso) ";
			cin >> opcVen;
			if(opcVen==0){
				veneno=naoVenenoso;
			}else{
				veneno=Venenoso;
			}
			string estado;
			cout << "Estado UF: ";
			cin >> estado;
			cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
			cin >> ameacado;
			string licencaIBAMA;
			cout << "Licença para transporte IBAMA: ";
			cin >> licencaIBAMA;
			limparTelaEstoque();
			return adicionarAnimal(new AnfibioNativo(identificacao, preco, descricao,peso, sexo,veneno, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){ //exotico
			Venenosos veneno;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso) ";
			cin >> opcVen;
			if(opcVen==0){
				veneno=naoVenenoso;
			}else{
				veneno=Venenoso;
			}
			string origem;
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(new AnfibioExotico(identificacao, preco, descricao,peso, sexo,veneno,origem));
		}
		else if (opcHab == 2) //domestico
		{
			Venenosos veneno;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso) ";
			cin >> opcVen;
			if(opcVen==0){
				veneno=naoVenenoso;
			}else{
				veneno=Venenoso;
			}
			limparTelaEstoque();
			return adicionarAnimal(new AnfibioDomestico(identificacao, preco, descricao,peso, sexo,veneno));
		}
		else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}

		
	}
	else if(opcao == 2){ //reptil
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
		if(opcHab == 0){
			
			string estado;
			cout << "Estado UF: ";
			cin >> estado;
			cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
			cin >> ameacado;
			string licencaIBAMA;
			cout << "Licença para transporte IBAMA: ";
			cin >> licencaIBAMA;
			limparTelaEstoque();
			return adicionarAnimal(new ReptilNativo(identificacao, preco, descricao, peso, sexo, veneno, comprimento, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){
			
			string origem;
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(new ReptilExotico(identificacao, preco, descricao, peso, sexo, veneno, comprimento, origem));
		}
		else if(opcHab == 2){
			limparTelaEstoque();
			return adicionarAnimal(new ReptilDomestico(identificacao, preco, descricao, peso, sexo, veneno, comprimento));
		}
		else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}


	}
	else if(opcao ==3){//ave
		HabilidadeVoo habVoo;
		int opcVoo;
		double envergadura;
		cout << "(0 - Ratita) ou (1 - Carenata)";
		cin >> opcVoo;
		if(opcVoo==0){
			habVoo=ratitas;
		}else{
			habVoo=carenatas;
		}
		cout <<"Envergadura: ";
		cin >> envergadura;
		if(opcHab == 0){
			
			string estado;
			cout << "Estado UF: ";
			cin >> estado;
			cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
			cin >> ameacado;
			string licencaIBAMA;
			cout << "Licença para transporte IBAMA: ";
			cin >> licencaIBAMA;
			limparTelaEstoque();
			return adicionarAnimal(new AveNativa(identificacao, preco, descricao, peso,sexo, habVoo, envergadura, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){
			string origem;
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(new AveExotica(identificacao, preco, descricao, peso,sexo, habVoo, envergadura, origem));
		}
		else if(opcHab == 2){
			limparTelaEstoque();
			return adicionarAnimal(new AveDomestica(identificacao, preco, descricao, peso,sexo, habVoo, envergadura));
		}
		else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}

	}
	else if (opcao == 4){ //mamifero
			Alimentacao alimentacao;
			int opcAlim;
			cout << "(0 - Carnivoro), (1 - Herbivoro) ou (2 - Onivoro)";
			cin >> opcAlim;
			if(opcAlim==0){
				alimentacao=Carnivoro;
			}else if(opcAlim==1){
				alimentacao=Herbivoro;
			}else{
				alimentacao=Onivoro;
			}
			if(opcHab == 0){
				string estado;
				cout << "Estado UF: ";
				cin >> estado;
				cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
				cin >> ameacado;
				string licencaIBAMA;
				cout << "Licença para transporte IBAMA: ";
				cin >> licencaIBAMA;
				limparTelaEstoque();
				return adicionarAnimal(new MamiferoNativo(identificacao, preco, descricao, peso, sexo, alimentacao, estado, ameacado, licencaIBAMA));
			}
			else if(opcHab == 1){
				string origem;
				cout << "País de origem: ";
				getline(cin, origem);
				limparTelaEstoque();
				return adicionarAnimal(new MamiferoExotico(identificacao, preco, descricao, peso, sexo, alimentacao, origem));
			}
			else if(opcHab == 2){
				limparTelaEstoque();
				return adicionarAnimal(new MamiferoDomestico(identificacao, preco, descricao, peso, sexo, alimentacao));
			}
			else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}

	}
	else
	{
		cout << "Opção selecionada invalida..." << endl;
		return false;
	}
	
	
	/*
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
	}*/
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

void Estoque::limparTelaEstoque(){
	#if defined _WIN32
    	system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("clear");
	#elif defined (__APPLE__)
    	system("clear");
	#endif
}