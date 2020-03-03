#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <string>
#include <iostream>
#include <exception>

using namespace std;
class FuncionarioNaoExisteException : public exception
{
    public:
        FuncionarioNaoExisteException();

    protected:

    private:
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
