#include "Conta.h"
#include <iostream>

Conta::Conta(string n, int num, double sal)
{
    nomeCliente = n;
    numero = num;
    saldo = sal;
}

void Conta::setNome(string n)
{
    nomeCliente = n;
}

void Conta::setNum(int num)
{
    numero = num;
}

void Conta::setSaldo(double sal)
{
    saldo = sal;
}

string Conta::getNome()
{
    return nomeCliente;
}

int Conta::getNum()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::sacar(double valor)
{
    if(valor < 0)
    {
        cout << "Nao foi possivel realizar o saque, valor inserido eh negativo" << endl;
        return;
    }
    if(valor > saldo)
    {
        cout << "Nao foi possivel realizar o saque, valor inserido eh maior que o saldo disponivel" << endl;
        return;
    }

    saldo -= valor;
}
