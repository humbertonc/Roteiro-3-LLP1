#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

class Poupanca : public Conta
{
    public:
        Poupanca(string n, int num, double sal, int var, double txRend);

        void setVar(int var);
        void setTaxa(double txRend);

        int getVar();
        double getTaxa();

        double render();

    protected:

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
