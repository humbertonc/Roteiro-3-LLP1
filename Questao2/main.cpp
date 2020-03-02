#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include <string>

using namespace std;

int main()
{
    Conta contaNormal = Conta("Joao da Silva", 2800, 9342.12, 24230);
    ContaEspecial contaEsp = ContaEspecial("Luan Pereira", 3750, 5421.08, 126346);

    contaNormal.definirLimite();
    contaEsp.definirLimite();

    cout << "A conta " << contaNormal.getNumero() << " de " << contaNormal.getNome() << " possui um saldo de " <<
    contaNormal.getSaldo() << " reais." << endl;
    cout << "Por ser uma conta regular que recebe salario mensal de " << contaNormal.getSalario() <<
    " reais, seu limite mensal vale " << contaNormal.getLimite() << endl;

    contaNormal.depositar(400);

    cout << "Depositando 400 reais, o novo saldo vale " << contaNormal.getSaldo() << " reais" << endl;

    contaNormal.sacar(1500);

    cout << "Sacando 1500 reais, o novo saldo vale " << contaNormal.getSaldo() << " reais" << endl;

    cout << endl;

    cout << "A conta " << contaEsp.getNumero() << " de " << contaEsp.getNome() << " possui um saldo de " <<
    contaEsp.getSaldo() << " reais." << endl;
    cout << "Por ser uma conta especial que recebe salario mensal de " << contaEsp.getSalario() <<
    " reais, seu limite mensal vale " << contaEsp.getLimite() << endl;

    contaEsp.depositar(400);

    cout << "Depositando 400 reais, o novo saldo vale " << contaEsp.getSaldo() << " reais" << endl;

    contaEsp.sacar(1500);

    cout << "Sacando 1500 reais, o novo saldo vale " << contaEsp.getSaldo() << " reais" << endl;
}
