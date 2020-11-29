#include "mamifero_exotico.hpp"

MamiferoExotico::MamiferoExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim, string origem, formaIntroducao introducao)
                :Mamifero(identificacao, preco, descricao, coloracao, ameacado, peso, sexo,tipoAlim), Exotico(origem, introducao){}
MamiferoExotico::~MamiferoExotico(){}