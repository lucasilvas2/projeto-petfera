#include "ave.hpp"
#include "nativo.hpp"

class AveNativa : public Ave, public Nativo{
    public:
        AveNativa(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string estado, string licencaIBAMA);
        ~AveNativa();
};