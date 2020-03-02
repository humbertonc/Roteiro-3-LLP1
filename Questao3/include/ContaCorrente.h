#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"
#include <string>

using namespace std;
class ContaCorrente : public Conta
{
    public:
        ContaCorrente(string n, int num, double sal, double sala);

        void setSalario(double sala);
        void setLimite(double lim);

        double getLimite();
        double getSalario();

        double definirLimite();

    protected:
        double limite;
        double salario;

    private:
};

#endif // CONTACORRENTE_H
