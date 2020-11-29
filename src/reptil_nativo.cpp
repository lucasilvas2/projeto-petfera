#include "reptil_nativo.hpp"

ReptilNativo::ReptilNativo(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string estado, string licencaIBAMA)
                :Reptil( identificacao, preco, descricao, coloracao,  ameacado, peso, sexo,veneno,  comprimento), Nativo(estado, licencaIBAMA){}
ReptilNativo::~ReptilNativo(){}