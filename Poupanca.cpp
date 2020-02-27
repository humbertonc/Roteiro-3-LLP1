#include "Poupanca.h"

Poupanca::Poupanca(string n, int num, double sal, int var, double txRend):
    Conta(n, num, sal)
{
    variacao = var;
    taxaRendimento = txRend;
}

void Poupanca::setVar(int var)
{
    variacao = var;
}

void Poupanca::setTaxa(double txRend)
{
    taxaRendimento = txRend;
}

int Poupanca::getVar()
{
    return variacao;
}

double Poupanca::getTaxa()
{
    return taxaRendimento;
}

double Poupanca::render()
{
    if(variacao == 1){
        saldo *= (1 + (taxaRendimento / 100));
        taxaRendimento += 0.5;
    }

    if(variacao == 51){
        saldo *= (1 + (taxaRendimento / 100));
    }
}
