#pragma once
#include <iostream>

using std::string;

enum formaIntroducao{
    espontanea,
    introduzida
};

class Exotico{
    private:
        string silvestre = "Exótico";
        string origem;
        formaIntroducao introducao;
    public:
        Exotico(string origem, formaIntroducao introducao);
        ~Exotico();

        string getSilvestre() const;
        string getOrigem() const;
        formaIntroducao getIntroducao() const;

        void setOrigem(string origem);
        void setIntroducao(formaIntroducao introducao);
};