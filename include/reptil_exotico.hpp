#include "reptil.hpp"
#include "exotico.hpp"

class ReptilExotico: public Reptil, public Exotico{
    private:
        ostream& print(ostream& o) const;    
    public:
        ReptilExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string origem, formaIntroducao introducao);
        ~ReptilExotico();
};