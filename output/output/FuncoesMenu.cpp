#include<iostream>  
#include<locale.h>   
#include"FuncoesMenu.h"
//#include <>, programa vai procurar a biblioteca no diretorio padrão include do compilador. Já #include "" procura no diretório corrente, atual do seu programa

//Aqui é COMO?... como as funções do arquivo .h serão implementadas?
//neste arquivo .cpp você coloca a implementação de todas as funções do arquivo .h relacionado
//Implementação das funções

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
    } while (ProcessarEscolha(RetornoEscolha)()!=3);//enquanto escolha for diferente de 3 o menu vai aparecer! Pois você esta solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while.
}
//ProcessarEscolha recebe como parâmetro um número inteiro e armazena este argumento passado no parâmetro TipoEscolha que é uma variável local a esta função. Significa que esta variável comente existe na memória quando a função está sendo executada. Quando a função chegar a seu final esta variável deixa de existir na memória.
//Portanto, funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis estivessem na função main elas somente seriam destruidas quando o rograma fosse fechado.
int ProcessarEscolha(int TipoEscolha)
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
     return TipoEscolha;
}