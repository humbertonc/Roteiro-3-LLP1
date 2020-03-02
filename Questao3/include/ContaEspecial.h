#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaEspecial.h"
#include "ContaCorrente.h"
#include <string>

using namespace std;
class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial(string n, int num, double sal, double sala);
        double definirLimite();
    protected:

    private:
};

#endif // CONTAESPECIAL_H
