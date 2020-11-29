#include "mamifero_nativo.hpp"

MamiferoNativo::MamiferoNativo(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
               double peso, tipoSexo sexo, Alimentacao tipoAlim, string estado, string licencaIBAMA)
               :Mamifero(identificacao, preco, descricao, coloracao, ameacado, peso, sexo,tipoAlim), Nativo(estado, licencaIBAMA){}
MamiferoNativo::~MamiferoNativo(){}