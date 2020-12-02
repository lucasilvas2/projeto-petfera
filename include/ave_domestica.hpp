#pragma once
#include "ave.hpp"
#include "domestico.hpp"

class AveDomestica : public Ave, public Domestico{
    private:
        ostream& print(ostream& o) const;
    public:
        AveDomestica(string identificacao, double preco, string descricao,
			double peso, tipoSexo sexo,
             HabilidadeVoo habVoo, double envergadura);
        ~AveDomestica();
};