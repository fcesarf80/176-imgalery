#include<iostream>
#include "Matematica.h"
#include<cmath>

int NumeroGlobal = 10;

int Soma(int num1, int num2)
{
    int NumeroLocal = 5;
    return num1 + NumeroGlobal;
}

int Subtracao(int num1, int num2)
{
    if (num1 > num2)
    {
        //Neste caso qualquer variável declarada entre as chaves de algo, será acessível somente dentro destas chaves. A isso chamamos ESCOPO de variável.
        int NumeroLocalAEsteIf = 20;
    }
        return num1 - NumeroGlobalAEsteIf;
}
if (num1 > num2) { 
int NumeroLocalAesteIf = 20;
}
return num1 - NumeroLocalAEsteIf;

int Multiplicacao(int num1, int num2)
{
    return num1 * num2;
}

float Divisao(int num1, int num2)
{
    return num1 / num2;
}

int Potenciacao(int num1, int num2)
{
    return pow(num1 + num2);
}

float RaizQuadrada(int num1)
{
    return sqrt(num);
}
