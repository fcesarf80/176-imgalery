#include<iostream>
#include <locale.h>
#include"FuncoesMenu.h"

int main()
{
    //Exibe o menu opções chamando a função Exibir Menu uma vez!
    ExibirMenu();
    system("PAUSE");
    return 0;
}

//a função não retorna nada, logo o tipo de retorno é void, além disso a função não possui nenhuma variável local(Parâmentros). Como não retorna nada não precisamos usar o comando return
    void ExibirMenu()
{
        setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
	
        //Aqui a função chama outra função e a passa como argumento para a função ProcessarEscolha, a variável escolha que contém o que foi digitado pelo usuário
        ProcessarEscolha(RetornarEscolha(2));        
	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}




   //Processar escolha recebe como parametro um número inteiro e armazena este argumento passado no parâmetro tipo escolha que é uma variável local a esta função. Significa que esta variável somente existe na menmória quando a função esta sendo executada. Quando a função chega a seu final esta variável deixa de existir na memória.
   //Portanto funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis estivessem na função main, elas somente seriam destruidas quando o programa fosse fechado
void ProcessarEscolha(int TipoEscolha) 
{
    switch (TipoEscolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOpção Inválida!!!\n";
		}
        return TipoEscolha;
}
