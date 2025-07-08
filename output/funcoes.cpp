//PROTOTIPO DE FUNÇÕES
// Crie uma função que indique se um número é par ou impar.
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;
//Protótipo da função
bool isPar(int num);

int main()
{    
    int Numero;
    std::cout << "\nDigite um número inteiro: ";
    std::cin >> Numero;
    if (isPar(Numero) == true)
    {
        std::cout << "O número: " << Numero<<" é PAR.\n";
    }
    else if (isPar(Numero) == false)
    {
        std::cout <<"O número: " << Numero << " é IMPAR.\n";        
    }
    system("PAUSE");
    return 0;
}
//se o resto da divisão for 0 o número é par, retorne true
bool isPar(int num)
{
    if(num % 2 == 0)
        return true;
//obs que o return faz a saida imediata da função, logo se for par, o código else é desnecessário
        return false; 
}
