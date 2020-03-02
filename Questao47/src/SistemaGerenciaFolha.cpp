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
    try{
    for(int i = 0; i < contador; i++){
        if(func[i]->getNome() == n)
        return func[i]->calculaSalario();
    }
    throw new FuncionarioNaoExisteException;
    }catch(FuncionarioNaoExisteException funcEx){
        funcEx = FuncionarioNaoExisteException();
    }
}

double SistemaGerenciaFolha::consultaValorTotalFolha()
{
    double soma = 0;
    try{
    for(int i = 0; i < contador; i++){
        soma += func[i]->calculaSalario();
    }
    if(soma > orcamento)
        throw new OrcamentoEstouradoException;

    return soma;
    }catch(OrcamentoEstouradoException orcEx){
        orcEx = OrcamentoEstouradoException();
    }

}
