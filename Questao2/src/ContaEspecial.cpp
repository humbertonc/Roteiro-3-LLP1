#include "ContaEspecial.h"

ContaEspecial::ContaEspecial (string n, double sala, double sd, int num):
    Conta(n, sala, sd, num)
{
    nomeCliente = n;
    salarioMensal = sala;
    saldo = sd;
    numeroConta = num;
}

void ContaEspecial::definirLimite()
{
    limite = 3*salarioMensal;
}
