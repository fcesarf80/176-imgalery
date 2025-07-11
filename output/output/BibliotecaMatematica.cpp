#include<iostream>
#include "Matematica.h"

int NumeroGlobal = 5;
int main()
{
    int Numero1, Numero2;
    std::cout << "\nDigite Primeiro Número: ";
    std::cin >> Numero1;
    std::cout << "\nDigite Primeiro Número: ";
    std::cin >> Numero2;
    std::cout << "\nResultado Operadores Matematicos\n";
    std::cout << "\nSoma: " << Soma(Numero1, Numero2);
    std::cout << "\nSubtração: " << Subtracao(Numero1, Numero2);
    std::cout << "\nMultiplicação: " << Multiplicacao(Numero1, Numero2);
    std::cout << "\nDivisão: " << Divisao(Numero1, Numero2);
    std::cout << "\nPotenciação: " << Potenciacao(Numero1, Numero2);
    std::cout << "\nRaiz Quadrada do Número 1: " << RaizQuadrada(Numero1);
    std::cout << "\nRaiz Quadrada Número 2: " << RaizQuadrada(Numero2);
    system("PAUSE");

    return 0;
}