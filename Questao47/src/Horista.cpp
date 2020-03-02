#include "Horista.h"

Horista::Horista(int mat, string n, double salHo, double horas)
{
    matricula = mat;
    nome = n;
    salarioPorHora = salHo;
    horasTrabalhadas = horas;
}

double Horista::calculaSalario()
{
    if(horasTrabalhadas > 40){
        return 4 * ((40 * salarioPorHora) + ((horasTrabalhadas - 40) * (salarioPorHora * 1.5)));
    }
    else{
        return 4 * horasTrabalhadas * salarioPorHora;
    }
}
