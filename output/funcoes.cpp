//PROTOTIPO DE FUNÇÕES - calculadora
#include<iostream>
double Soma(char Operacao, double Num1, double Num2);

int main()
{
    double Num1, Num2;
    char Operacao;
    std::cout << "\nDigite o 1° número: ";
    std::cin >> Num1;
    std::cout << "Digite o 2° número: ";
    std::cin >> Num2;
    std::cout << "\n + Soma \n - Subtração \n * Multiplicação \n / Divisão: ";
    std::cout << "\n\n Digite o simbolo da operação desejada: ";
    std::cin >> Operacao;
    std::cout << "\nO resultado da operação: " << Soma(Operacao, Num1, Num2);
    std::cout << std::endl;
    std::cout << std::endl;

        return 0;
}
// Aqui o case vai selecionar a operação e fará o digitado e selecionado pelo usúario
    double Soma(char Operacao, double Num1, double Num2)
    {   
        switch (Operacao)
        { 
        case '+': return Num1 + Num2;
        case '-': return Num1 - Num2;
        case '*': return Num1 * Num2;
        case '/': return Num1 / Num2;
        defaul: std::cout << "Operador invalido!";
        break;
    }
    return 0;
}
/*
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
    // if (isPar(Numero) == true)
      if (isPar(Numero))// profissionalmente só se usa assim
    {
        std::cout << "O número: " << Numero<<" é PAR.\n";
    }//se não for PAR já sabemos que é impar, tbm então removemos o if
    else
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

*/

/*
//PROTOTIPO DE FUNÇÕES - calculadora
#include<iostream>
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);

int main()
{
    float Num1, Num2;

    std::cout << "\nDigite o 1° número: ";
    std::cin >> Num1;
    std::cout << "\nDigite o 2° número: ";
    std::cin >> Num2;

   

    std::cout << "\n*** Resultado das operações***\n";
    std::cout << Num1 << " e " << Num2 << "\n";
    std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
    std::cout << "Subtracao: " << Subtracao(Num1, Num2) << "\n";
    std::cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
    std::cout << "Divisao: " << Divisao(Num1, Num2) << "\n";

     system("PAUSE");
     return 0;
}

float Soma(float num1, float num2)
{
return num1 + num2;
}
float Subtracao(float num1, float num2)
{
return num1 - num2;
}
float Mutiplicacao(float num1, float num2)
{
return num1 * num2;
}
float Divisao(float num1, float num2)
{
return num1 / num2;
}

*/