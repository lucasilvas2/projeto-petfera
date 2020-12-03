#include "anfibio.hpp"
#include "domestico.hpp"

class AnfibioDomestico: public Anfibio , public Domestico{
    private:
        ostream& print(ostream& o) const;
    public:
        AnfibioDomestico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venenosos tipoVen);
        ~AnfibioDomestico();
};