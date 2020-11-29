#include "ave_domestica.hpp"

AveDomestica::AveDomestica(string identificacao, double preco, string descricao,string coloracao, bool ameacado, double peso, tipoSexo sexo,HabilidadeVoo habVoo, 
                            double envergadura):Ave(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, habVoo, envergadura){}
AveDomestica::~AveDomestica(){}