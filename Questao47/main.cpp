#include <iostream>
#include <string>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

using namespace std;

int main()
{
    SistemaGerenciaFolha sist = SistemaGerenciaFolha(20000);

    Assalariado as = Assalariado(381233, "Joao Pereira", 2800);
    Comissionado com = Comissionado(423240, "Maria Pessoa", 2400, 150000, 4);
    Horista hor = Horista(349882, "Lucas Andrade", 25, 50);

    sist.setFuncionario(&as);
    sist.setFuncionario(&com);
    sist.setFuncionario(&hor);

    cout << "O salario do/a funcionario/a assalariado " << as.getNome() << " vale " << sist.consultaSalarioFuncionario("Joao Pereira") << endl;
    cout << "O salario do/a funcionario/a comissionado " << com.getNome() << " vale " << sist.consultaSalarioFuncionario("Maria Pessoa") << endl;
    cout << "O salario do/a funcionario/a horista " << hor.getNome() << " vale " << sist.consultaSalarioFuncionario("Lucas Andrade") << endl;

    cout << "O gasto com a folha salarial da empresa vale " << sist.consultaValorTotalFolha() << " reais." << endl;


    return 0;
}
