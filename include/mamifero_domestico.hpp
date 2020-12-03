#include "mamifero.hpp"
#include "domestico.hpp"

class MamiferoDomestico : public Mamifero, public Domestico{
    private:
        ostream& print(ostream& o) const;
    public:
        MamiferoDomestico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Alimentacao tipoAlim);
        ~MamiferoDomestico();
};