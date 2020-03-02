#ifndef CONTA_H
#define CONTA_H
#include <string>

using namespace std;
class Conta
{
    public:
        Conta(string n, int num, double sal);

        void setNome(string n);
        void setNum(int num);
        void setSaldo(double sal);

        string getNome();
        int getNum();
        double getSaldo();

        void sacar(double valor);
        void depositar(double valor);

    protected:
        string nomeCliente;
        int numero;
        double saldo;

    private:
};

#endif // CONTA_H
