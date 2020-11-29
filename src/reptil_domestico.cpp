#include "reptil_domestico.hpp"

ReptilDomestico::ReptilDomestico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento):Reptil( identificacao, preco, descricao, coloracao,  ameacado, 
                 peso, sexo,veneno,  comprimento){}
ReptilDomestico::~ReptilDomestico(){}