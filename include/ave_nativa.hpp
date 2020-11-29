#include "ave.hpp"
#include "nativo.hpp"

class AveNativa : public Ave, public Nativo{
    private:
        ostream& print(ostream& o) const;
    public:
        AveNativa(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string estado, string licencaIBAMA);
        ~AveNativa();
};