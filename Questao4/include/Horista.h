#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"
#include <string>

using namespace std;
class Horista : public Funcionario
{
    public:
        Horista(int mat, string n, double salHo, double horas);

        double salarioPorHora, horasTrabalhadas;

        double calculaSalario();
    protected:

    private:
};

#endif // HORISTA_H
