#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

using namespace std;
class Conta : public IConta
{
    public:
        Conta(string n, double sal, double s, int num);

        string getNome();
        double getSalario();
        double getSaldo();
        double getLimite();
        int getNumero();

        void setNome(string n);
        void setSalario(double sal);
        void setSaldo(double s);
        void setLim(double lim);
        void setNum(int n);

        void definirLimite();
        void sacar(double valor);
        void depositar(double valor);

    protected:

        string nomeCliente;
        double salarioMensal, saldo, limite;
        int numeroConta;

    private:

};

#endif // CONTA_H
