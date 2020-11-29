#include "ave.hpp"
#include "exotico.hpp"

class AveExotica : public Ave, public Exotico{
    public:
        AveExotica(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string origem, formaIntroducao introducao);
        ~AveExotica();
};