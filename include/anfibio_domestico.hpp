#include "anfibio.hpp"
#include "domestico.hpp"

class AnfibioDomestico: public Anfibio , public Domestico{
    public:
        AnfibioDomestico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen);
        ~AnfibioDomestico();
};