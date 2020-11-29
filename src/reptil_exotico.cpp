#include "reptil_exotico.hpp"

ReptilExotico::ReptilExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string origem, formaIntroducao introducao):Reptil( identificacao, preco, descricao, coloracao,  ameacado, 
                 peso, sexo,veneno,  comprimento), Exotico(origem, introducao){}
ReptilExotico::~ReptilExotico(){}