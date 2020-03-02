#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

void Funcionario::setMatricula(int mat)
{
    matricula = mat;
}

void Funcionario::setNome(string n)
{
    nome = n;
}

int Funcionario::getMatricula()
{
    return matricula;
}

string Funcionario::getNome()
{
    return nome;
}
