#include "Assalariado.h"

Assalariado::Assalariado(int mat, string n, double sal)
{
    matricula = mat;
    nome = n;
    salario = sal;
}

double Assalariado::calculaSalario()
{
    return salario;
}

double Assalariado::getSalario()
{
    return salario;
}

void Assalariado::setSalario(double sal)
{
    salario = sal;
}
