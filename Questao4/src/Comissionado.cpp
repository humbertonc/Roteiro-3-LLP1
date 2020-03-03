#include "Comissionado.h"

Comissionado::Comissionado(int mat, string n, double salBase, double vend, double perc)
{
    matricula = mat;
    nome = n;
    salarioBase = salBase;
    vendasSemanais = vend;
    percentualComissao = perc;
}

double Comissionado::calculaSalario()
{
    return salarioBase + ((percentualComissao/100) * vendasSemanais);
}
