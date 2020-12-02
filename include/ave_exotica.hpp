#include "ave.hpp"
#include "exotico.hpp"

class AveExotica : public Ave, public Exotico{
    private:
        ostream& print(ostream& o) const;
    public:
        AveExotica(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string origem);
        ~AveExotica();
};