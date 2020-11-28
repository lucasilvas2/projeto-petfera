#pragma once
#include <iostream>

using std::string;

enum formaIntroducao{
    espontanea,
    introduzida
};

class Exotico{
    protected:
        string origem;
        formaIntroducao introducao;
    public:
        Exotico(string origem, formaIntroducao introducao);
        virtual ~Exotico();

        string getOrigem() const;
        formaIntroducao getIntroducao() const;

        void setOrigem(string origem);
        void setIntroducao(formaIntroducao introducao);
};