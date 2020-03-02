#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;
class Funcionario
{
    public:
        Funcionario();
        void setMatricula(int mat);
        void setNome(string n);
        int getMatricula();
        string getNome();

        virtual double calculaSalario() = 0;

    protected:

        int matricula;
        string nome;

    private:
};

#endif // FUNCIONARIO_H
