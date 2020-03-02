#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include <string>

using namespace std;
class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha(double orc);

        void setFuncionario(Funcionario *f);
        Funcionario* getFuncionario(int i);

        double consultaSalarioFuncionario(string n);
        double consultaValorTotalFolha();
    protected:

    private:
        double orcamento;
        int contador;
        Funcionario *func[];
};

#endif // SISTEMAGERENCIAFOLHA_H
