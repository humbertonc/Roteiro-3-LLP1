#include "Conta.h"

Conta::Conta(string n, double sal, double s, int num)
{
    nomeCliente = n;
    salarioMensal = sal;
    saldo = s;
    numeroConta = num;
}

void Conta::depositar(double valor)
{
    saldo += valor;
}

void Conta::sacar(double valor)
{
    saldo -= valor;
}

void Conta::setNome(string n)
{
    nomeCliente = n;
}

void Conta::setSalario(double sal)
{
    salarioMensal = sal;
}

void Conta::setLim(double lim)
{
    limite = lim;
}

void Conta::setNum(int n)
{
    numeroConta = n;
}

void Conta::setSaldo(double s)
{
    saldo = s;
}

string Conta::getNome()
{
    return nomeCliente;
}

double Conta::getLimite()
{
    return limite;
}

double Conta::getSalario()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

int Conta::getNumero()
{
    return numeroConta;
}

void Conta::definirLimite()
{
    limite = 2 * salarioMensal;
}
