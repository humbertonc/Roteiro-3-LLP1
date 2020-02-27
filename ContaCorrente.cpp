#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(string n, int num, double sal, double sala):
    Conta(n, num, sal)
{
    salario = sala;
}

void ContaCorrente::setSalario(double sala)
{
    salario = sala;
}

void ContaCorrente::setLimite(double lim)
{
    limite = lim;
}

double ContaCorrente::getSalario()
{
    return salario;
}

double ContaCorrente::getLimite()
{
    return limite;
}

double ContaCorrente::definirLimite()
{
    limite = 2 * salario;
    return limite;
}
