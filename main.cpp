#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    ContaCorrente contCor = ContaCorrente("Joao da Silva", 54353, 2831.73, 2100);
    ContaEspecial contEsp = ContaEspecial("Luana Azevedo", 21493, 8402.51, 3200);
    Poupanca poup = Poupanca("Joaquim Batista", 43209, 1000, 1, 1.0);

    contCor.definirLimite();
    contEsp.definirLimite();

    cout << "O dono/a " << contCor.getNome() << ", da conta " << contCor.getNum() << " possui salario de " <<
    contCor.getSalario() << " reais.\n Por sua conta ser corrente, seu limite vale " << contCor.getLimite() << endl << endl;

    cout << "O dono/a " << contEsp.getNome() << ", da conta " << contEsp.getNum() << " possui salario de " <<
    contEsp.getSalario() << " reais.\n Por sua conta ser especial, seu limite vale " << contEsp.getLimite() << endl << endl;

    cout << "Antes do rendimento, a conta " << poup.getNum() << " que pertence a " << poup.getNome() << "\npossuia um saldo de " <<
    poup.getSaldo() << " reais, e a taxa de rendimento da poupanca era " << poup.getTaxa() << endl << endl;

    poup.render();

    cout << "Depois do rendimento, a conta " << poup.getNum() << " que pertence a " << poup.getNome() << "\npossui um saldo de " <<
    poup.getSaldo() << " reais, e a taxa de rendimento da poupanca eh " << poup.getTaxa() << endl;

    return 0;
}
