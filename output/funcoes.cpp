#include<iostream>              //FUNÇÕES EM CÓDIGO
#include<locale.h>

void ExibirMenu();
void ProcessarEscolha(int TipoEscolha);

int main()
{   //Exibe o meu opções chamando a função Exibir uma vez!
    ExibirMenu();
    system("PAUSE");
    return 0;
} 
// a função não retorna nada, logo o tipo é void. Além disso a função não possui nenhuma variável local(Parâmentros). Como não retorna nada, não precsisamos usar o comando return.
void ExibirMenu()
{
    setlocale(LC_ALL, "portuguese");
    int escolha = 0;
    do // as instruções abaixo serão executadas pelo menos uma vez!
    {
        std::cout << "\n**** Tickts Cinema ****" << std::endl;
        std::cout << "1 - Para Meia Entrada\n";
        std::cout << "2 - Para Inteira\n";
        std::cout << "3 -Sair";
        std::cout << "\nEscolha uma das opções acima: ";
        std::cin  >> escolha;
        //Aqui a função chama outra função e passa como argumento pa ara função ProcessarEscolha a vari[avel escolha que contemo que foi digitado pelo usúario como opção de escolha de menu
        ProcessarEscolha(escolha);        
    } while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! Pois você esta solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while.
}
//ProcessarEscolha recebe como parâmetro um número inteiro e armazena este argumento passado no parâmetro TipoEscolha que é uma variável local a esta função. Significa que esta variável comente existe na memória quando a função está sendo executada. Quando a função chegar a seu final esta variável deixa de existir na memória.
//Portanto, funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis estivessem na função main elas somente seriam destruidas quando o rograma fosse fechado.
void ProcessarEscolha(int TipoEscolha)
{
    switch (TipoEscolha)
    {
            case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
                break;
            case 2: std::cout << "\nTicket Inteira Comprada\n";
                break;
            case 3: std::cout << "\nSaindo Menu Tickets...\n\n";
                break;
            default: std::cout << "\nOpção Inválida!!!\n";
    }
}

/*

#include<iostream>              //FUNÇÕES EM CÓDIGO
#include<locale.h>

void ExibirMenu();
void ProcessarEscolha(int TipoEscolha);

int main()
{   //Exibe o meu opções chamando a função Exibir uma vez!
    ExibirMenu();
    system("PAUSE");
    return 0;
} 
// a função não retorna nada, logo o tipo é void. Além disso a função não possui nenhuma variável local(Parâmentros). Como não retorna nada, não precsisamos usar o comando return.
void ExibirMenu()
{
    setlocale(LC_ALL, "portuguese");
    int escolha = 0;
    do // as instruções abaixo serão executadas pelo menos uma vez!
    {
        std::cout << "\n**** Tickts Cinema ****" << std::endl;
        std::cout << "1 - Para Meia Entrada\n";
        std::cout << "2 - Para Inteira\n";
        std::cout << "3 -Sair";
        std::cout << "\nEscolha uma das opções acima: ";
        std::cin  >> escolha;
        //Aqui a função chama outra função e passa como argumento pa ara função ProcessarEscolha a vari[avel escolha que contemo que foi digitado pelo usúario como opção de escolha de menu
        ProcessarEscolha(escolha);        
    } while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! Pois você esta solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while.
}
//ProcessarEscolha recebe como parâmetro um número inteiro e armazena este argumento passado no parâmetro TipoEscolha que é uma variável local a esta função. Significa que esta variável comente existe na memória quando a função está sendo executada. Quando a função chegar a seu final esta variável deixa de existir na memória.
//Portanto, funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis estivessem na função main elas somente seriam destruidas quando o rograma fosse fechado.
void ProcessarEscolha(int TipoEscolha)
{
    switch (TipoEscolha)
    {
            case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
                break;
            case 2: std::cout << "\nTicket Inteira Comprada\n";
                break;
            case 3: std::cout << "\nSaindo Menu Tickets...\n\n";
                break;
            default: std::cout << "\nOpção Inválida!!!\n";
    }
}
*/
/*
//PROTOTIPO DE FUNÇÕES - calculadora
#include<iostream>
double Soma(char Operacao, double Num1, double Num2);
int main()
 {
    char reply;
    do{    
        double Num1, Num2;
        char Operacao;
        std::cout << "\nDigite o 1° número: ";
        std::cin >> Num1;
        std::cout << "Digite o 2° número: ";
        std::cin >> Num2;
        std::cout << "Operações realizáveis\n + Soma \n - Subtração \n * Multiplicação \n / Divisão: ";
        std::cout << "\n\n Digite o simbolo da operação desejada: ";
        std::cin >> Operacao;
        std::cout << "\nO resultado da operação é: " << Soma(Operacao, Num1, Num2);
        std::cout << std::endl;        
        std::cout <<"\nGostaria de verificar outro valor? (S) ou (N): ";        
        std::cin >> reply;
    } while (reply == 'S' || reply == 's');
    std::cout << "\n" << "Fim da verificação..." << std::endl;
    std::cout << std::endl;
    system("Pause");

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
                case '/':
                if (Num2 != 0) {
                    return Num1 / Num2;
                } else {
                    std::cout << "\nErro: Divisão por zero!" << std::endl;
               }
                break;
            default:
                std::cout << "\nOperador inválido!" << std::endl;
        }
    }
   
  */  





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