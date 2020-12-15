#include "estoque.hpp"
#include "animal.hpp"
#include <iostream>

bool Estoque::adicionarAnimal(shared_ptr<Animal> novoAnimal){
	this->estoque.push_back(novoAnimal);
	return true;
}

void Estoque::listarAnimais(){
	for (auto& animal: this->estoque){
		cout<< animal<<endl;
	}
}

shared_ptr<Animal> Estoque::encontrarAnimal(string identificacao){
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			cout<<"encontrado: "<<animal<<endl;
			return animal;
		}
	}
	cout << "nao encontrado" << endl;
	return nullptr;
}

shared_ptr<Animal> Estoque::removerAnimal(string identificacao){
	int index=0;
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			shared_ptr<Animal> removido=animal;
			cout<<"removido animal: "<<animal<<endl;
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
			return adicionarAnimal(make_shared <AnfibioNativo>(identificacao, preco, descricao,peso, sexo,veneno, estado, ameacado, licencaIBAMA));
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
			return adicionarAnimal(make_shared <AnfibioExotico>(identificacao, preco, descricao,peso, sexo,veneno,origem));
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
			return adicionarAnimal(make_shared <AnfibioDomestico>(identificacao, preco, descricao,peso, sexo,veneno));
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
			return adicionarAnimal(make_shared <ReptilNativo>(identificacao, preco, descricao, peso, sexo, veneno, comprimento, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){
			
			string origem;
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(make_shared <ReptilExotico>(identificacao, preco, descricao, peso, sexo, veneno, comprimento, origem));
		}
		else if(opcHab == 2){
			limparTelaEstoque();
			return adicionarAnimal(make_shared <ReptilDomestico>(identificacao, preco, descricao, peso, sexo, veneno, comprimento));
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
			return adicionarAnimal(make_shared <AveNativa>(identificacao, preco, descricao, peso,sexo, habVoo, envergadura, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){
			string origem;
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AveExotica>(identificacao, preco, descricao, peso,sexo, habVoo, envergadura, origem));
		}
		else if(opcHab == 2){
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AveDomestica>(identificacao, preco, descricao, peso,sexo, habVoo, envergadura));
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
				return adicionarAnimal(make_shared <MamiferoNativo>(identificacao, preco, descricao, peso, sexo, alimentacao, estado, ameacado, licencaIBAMA));
			}
			else if(opcHab == 1){
				string origem;
				cout << "País de origem: ";
				getline(cin, origem);
				limparTelaEstoque();
				return adicionarAnimal(make_shared <MamiferoExotico>(identificacao, preco, descricao, peso, sexo, alimentacao, origem));
			}
			else if(opcHab == 2){
				limparTelaEstoque();
				return adicionarAnimal(make_shared <MamiferoDomestico>(identificacao, preco, descricao, peso, sexo, alimentacao));
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
	
}

void 
Estoque::alterarAnimal(shared_ptr <Animal> animal){
	int ver;
	int opc;
	string id_;
	double preco_;
	string descricao_;
	double peso_;
	tipoSexo sexo_;
	Venenosos ven; //anfibio
	Venomous ven1;// reptil

	do
	{
		cout <<"1  - Alterar identificação" << endl
			<< "2  - Alterar preço" << endl
			<< "3  - Alterar descrição" << endl
			<< "4  - Alterar peso" << endl
			<< "5  - Alterar sexo" << endl
			<< "6  - Alterar veneno" << endl
			<< "7  - Alterar comprimento" << endl
			<< "8  - Alterar habilidade de Voo" << endl
			<< "9  - Alterar envegadura" << endl
			<< "10 - Alterar alimentação" << endl
			<< "11 - Alterar estado" << endl
			<< "12 - Alterar ameaçado" << endl
			<< "13 - Alterar licença" << endl
			<< "14 - Alterar origem" << endl
			<< "0  - Finalizar alteração" << endl;
			cin >> ver;

		if(ver == 1){
		
			do
			{
				cout << "Nova identificação: ";
				cin >> id_;
			} while (encontrarAnimal(id_));
		
			animal->setIdentificacao(id_);
		}
		if(ver == 2){	
			cout << "Novo preço: ";
			cin >> preco_;
			animal->setPreco(preco_);
			
		}
		if(ver == 3){
			cin.ignore();
			cout << "Nova descrição: ";
			getline(cin, descricao_);
			animal->setDescricao(descricao_);
		}
		if(ver == 4){
			cout << "Nova peso: ";
			cin >> peso_;
			animal->setPeso(peso_);
		}
		if(ver == 5){
			cout << "Novo sexo: (1 - Macho)/(2 - Femea) ";
			cin >> opc;
			if(opc == 1){
				sexo_ = macho; 
				animal->setSexo(sexo_);
			}
			else if(opc == 2)
			{	
				sexo_ = femea;
				animal->setSexo(sexo_);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}	
			
		}
		if (ver == 6 ){
			cout << "Animal venenoso: (1 - Venenoso)/(2 - Não é Venenoso) ";
			cin >> opc;
			if(animal->getTipoAnimal() == anfibioDomestico  || animal->getTipoAnimal() == anfibioExotico || animal->getTipoAnimal() == anfibioNativo){
				shared_ptr<Anfibio> alterado = dynamic_pointer_cast <Anfibio>(animal);
				if (opc == 1){
					ven = Venenoso;
					alterado->setVenenoso(ven);
				}
				else if(opc == 2){
					ven = naoVenenoso;
					alterado->setVenenoso(ven);
				}
				else
				{
					cout << "Opção invalida..." << endl;
				}
				
				
			}
			else if(animal->getTipoAnimal() == reptilDomestico || animal->getTipoAnimal() == reptilExotico || animal->getTipoAnimal() == reptilNativo)
			{
				shared_ptr<Reptil> alterado = dynamic_pointer_cast<Reptil> (animal);
				if (opc == 1){
					ven1 = sim;
					alterado->setVeneno(ven1);

				}
				else if(opc == 2){
					ven1 = nao;
					alterado->setVeneno(ven1);
				}
				else
				{
					cout << "Opção invalida..." << endl;
				}				
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}		
		}
		if(ver == 7){
			double comprimento;
			cout << "Novo comprimento: ";
			cin >> comprimento;
			if(animal->getTipoAnimal() == reptilDomestico || animal->getTipoAnimal() == reptilExotico || animal->getTipoAnimal() == reptilNativo){
				shared_ptr<Reptil> alterado = dynamic_pointer_cast<Reptil> (animal);
				alterado-> setComprimento(comprimento);	
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}	
		}
		if(ver == 8){
			cout << "Habilidade de voo: (1 - Ratitas)/(2 - Carenata)";
			shared_ptr <Ave> alterado = dynamic_pointer_cast<Ave>(animal);
			cin >> opc;
			HabilidadeVoo habAlterada;
			if(opc == 1){
				habAlterada = ratitas;
				alterado -> setHabilidadeVoo(habAlterada);
			}
			else if(opc == 2){
				habAlterada = carenatas;
				alterado -> setHabilidadeVoo(habAlterada);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}	
		}
		if(ver == 9){
			double novaEnvergadura;
			cout << "Nova envergadura: ";
			cin >> novaEnvergadura;
			if(animal->getTipoAnimal() == aveDomestico || animal->getTipoAnimal() == aveExotico || animal->getTipoAnimal() == aveNativo){
				shared_ptr <Ave> alterado = dynamic_pointer_cast<Ave>(animal);
				alterado-> setEnvergadura(novaEnvergadura);
			}
			else{
				cout << "Opção invalida..." << endl;
			}
		}
		if(ver == 10){
			cout << "Tipo de alimentação: (1 - Carnivoro)/(2 - Herbivoro)/(3 - Onivoro) ";
			cin >> opc;
			shared_ptr <Mamifero> alterado = dynamic_pointer_cast <Mamifero>(animal);
			Alimentacao novaAlimentacao;
			if(opc == 1){
				novaAlimentacao = Carnivoro;
				alterado->setAlimentacao(novaAlimentacao);
			}
			else if(opc == 2){
				novaAlimentacao = Herbivoro;
				alterado->setAlimentacao(novaAlimentacao);
			}
			else if(opc == 3){
				novaAlimentacao = Herbivoro;
				alterado->setAlimentacao(novaAlimentacao);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}
		}
		if(ver == 11){
			string novaEstado;
			cout << "Nova estado: ";
			getline(cin, novaEstado);
			if(animal->getTipoAnimal() == reptilNativo){
				shared_ptr<ReptilNativo> alterado = dynamic_pointer_cast<ReptilNativo>(animal);
				alterado-> setEstado(novaEstado);
			}
			else if( animal->getTipoAnimal() == anfibioNativo){
				shared_ptr<AnfibioNativo> alterado = dynamic_pointer_cast<AnfibioNativo>(animal);
				alterado-> setEstado(novaEstado);
			}
			else if(animal->getTipoAnimal() == aveNativo){
				shared_ptr<AveNativa> alterado = dynamic_pointer_cast<AveNativa>(animal);
				alterado-> setEstado(novaEstado);
			}
			else if(animal-> getTipoAnimal() == mamiferoNativo){
				shared_ptr<MamiferoNativo> alterado = dynamic_pointer_cast<MamiferoNativo>(animal);
				alterado-> setEstado(novaEstado);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}
			
			
		}
		if(ver == 12){
			cout << "Animal ameaçado: (1 - Ameçado)/(2 - Não está ameaçado) ";
			cin >> opc;
			bool novoAmeacado = (opc == 1) ? 0 : 1;
			if(animal->getTipoAnimal() == reptilNativo){
				shared_ptr<ReptilNativo> alterado = dynamic_pointer_cast<ReptilNativo>(animal);
				alterado-> setAmeacado(novoAmeacado);
			}
			else if( animal->getTipoAnimal() == anfibioNativo){
				shared_ptr<AnfibioNativo> alterado = dynamic_pointer_cast<AnfibioNativo>(animal);
				alterado-> setAmeacado(novoAmeacado);
			}
			else if(animal->getTipoAnimal() == aveNativo){
				shared_ptr<AveNativa> alterado = dynamic_pointer_cast<AveNativa>(animal);
				alterado-> setAmeacado(novoAmeacado);
			}
			else if(animal-> getTipoAnimal() == mamiferoNativo){
				shared_ptr<MamiferoNativo> alterado = dynamic_pointer_cast<MamiferoNativo>(animal);
				alterado-> setAmeacado(novoAmeacado);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}
			
			
		}
		if(ver == 13){
			string novaLicenca;
			cout << "Nova licença: ";
			getline(cin, novaLicenca);
			if(animal->getTipoAnimal() == reptilNativo){
				shared_ptr<ReptilNativo> alterado = dynamic_pointer_cast<ReptilNativo>(animal);
				alterado-> setLicencaIBAMA(novaLicenca);
			}
			else if( animal->getTipoAnimal() == anfibioNativo){
				shared_ptr<AnfibioNativo> alterado = dynamic_pointer_cast<AnfibioNativo>(animal);
				alterado-> setLicencaIBAMA(novaLicenca);
			}
			else if(animal->getTipoAnimal() == aveNativo){
				shared_ptr<AveNativa> alterado = dynamic_pointer_cast<AveNativa>(animal);
				alterado-> setLicencaIBAMA(novaLicenca);
			}
			else if(animal-> getTipoAnimal() == mamiferoNativo){
				shared_ptr<MamiferoNativo> alterado = dynamic_pointer_cast<MamiferoNativo>(animal);
				alterado-> setLicencaIBAMA(novaLicenca);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}
			
		}
		if(ver == 14){
			string novaOrigem;
			cout << "Nova origem: ";
			getline(cin, novaOrigem);
			if(animal->getTipoAnimal() == reptilExotico){
				shared_ptr<ReptilExotico> alterado = dynamic_pointer_cast<ReptilExotico>(animal);
				alterado-> setOrigem(novaOrigem);
			}
			else if( animal->getTipoAnimal() == anfibioExotico){
				shared_ptr<AnfibioExotico> alterado = dynamic_pointer_cast<AnfibioExotico>(animal);
				alterado-> setOrigem(novaOrigem);
			}
			else if(animal->getTipoAnimal() == aveExotico){
				shared_ptr<AveExotica> alterado = dynamic_pointer_cast<AveExotica>(animal);
				alterado-> setOrigem(novaOrigem);
			}
			else if(animal-> getTipoAnimal() == mamiferoExotico){
				shared_ptr<MamiferoExotico> alterado = dynamic_pointer_cast<MamiferoExotico>(animal);
				alterado-> setOrigem(novaOrigem);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}

		}
	}while (ver != 0);
}

void Estoque::limparTelaEstoque(){
	#if defined _WIN32
    	system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("clear");
	#elif defined (__APPLE__)
    	system("clear");
	#endif
}