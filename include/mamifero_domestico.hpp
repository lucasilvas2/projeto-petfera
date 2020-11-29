#include "mamifero.hpp"
#include "domestico.hpp"

class MamiferoDomestico : public Mamifero, public Domestico{
    public:
        MamiferoDomestico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim);
        ~MamiferoDomestico();
};