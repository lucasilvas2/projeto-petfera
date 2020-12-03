#include "reptil.hpp"
#include "domestico.hpp"

class ReptilDomestico: public Reptil, public Domestico{
    private:
        ostream& print(ostream& o) const;
    public:
        ReptilDomestico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venomous veneno, double comprimento);
        ~ReptilDomestico();
};
