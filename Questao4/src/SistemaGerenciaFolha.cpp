#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(double orc)
{
    orcamento = orc;
    contador = 0;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *f)
{
    func[contador] = f;
    contador++;
}

Funcionario* SistemaGerenciaFolha::getFuncionario(int i)
{
    return func[i];
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string n)
{

    for(int i = 0; i < contador; i++){
        if(func[i]->getNome() == n)
        return func[i]->calculaSalario();
    }
    throw new FuncionarioNaoExisteException;

}

double SistemaGerenciaFolha::consultaValorTotalFolha()
{
    double soma = 0;

    for(int i = 0; i < contador; i++){
        soma += func[i]->calculaSalario();
    }
    if(soma > orcamento)
        throw new OrcamentoEstouradoException;

    return soma;

}
