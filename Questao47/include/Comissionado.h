#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"
#include <string>

using namespace std;
class Comissionado : public Funcionario
{
    public:
        Comissionado(int mat, string n, double salBase, double vend, double perc);

        double vendasSemanais, percentualComissao, salarioBase;

        double calculaSalario();
    protected:

    private:
};

#endif // COMISSIONADO_H
