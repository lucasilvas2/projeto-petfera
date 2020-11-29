#include "ave_nativa.hpp"

AveNativa::AveNativa(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string estado, string licencaIBAMA):
                Ave(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, habVoo, envergadura), Nativo(estado, licencaIBAMA){}
AveNativa::~AveNativa(){}