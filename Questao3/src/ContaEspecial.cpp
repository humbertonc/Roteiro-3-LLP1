#include "ContaEspecial.h"
#include <string>

using namespace std;
ContaEspecial::ContaEspecial(string n, int num, double sal, double sala):
    ContaCorrente(n, num, sal, sala)
{
}

double ContaEspecial::definirLimite()
{
    limite = 4 * salario;
    return limite;
}
