#include "ave_exotica.hpp"

AveExotica::AveExotica(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string origem, formaIntroducao introducao)
                :Ave(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, habVoo, envergadura),Exotico(origem, introducao){}
AveExotica::~AveExotica(){}