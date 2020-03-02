#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"
#include <string>

using namespace std;
class Assalariado : public Funcionario
{
    public:
        Assalariado(int mat, string n, double sal);

        void setSalario(double sal);
        double getSalario();

        double calculaSalario();
    protected:

    private:
        double salario;
};

#endif // ASSALARIADO_H
