#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial: public Conta
{
    public:
        ContaEspecial(string n, double sala, double sd, int num);
        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
