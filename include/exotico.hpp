#pragma once
#include <iostream>

using std::string;


class Exotico{
    protected:
        string origem;
    public:
        Exotico(string origem);
        virtual ~Exotico();

        string getOrigem() const;
        
        void setOrigem(string origem);
        
};