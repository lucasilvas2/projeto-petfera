#include "ave.hpp"
#include "nativo.hpp"

class AveNativa : public Ave, public Nativo{
    private:
        ostream& print(ostream& o) const;
    public:
        AveNativa(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string estado, bool ameacado,string licencaIBAMA);
        ~AveNativa();
};