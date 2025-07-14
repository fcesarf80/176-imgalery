#include <iostream>				//  119 Ponteiros  //
#include <tchar.h> 
using namespace std;
int main()
{	setlocale(LC_ALL, "portuguese");	
	int Numero{ 4890 };
	char Letra {'E'};
}

//**********************************************************
/*
#include <iostream>				//  118 Ponteiros  //
#include <tchar.h> 
using namespace std;
int main()
{	setlocale(LC_ALL, "portuguese");	
	int Numero{ 4890 };
	char Letra {'E'};
	//Declarei ponteiro genérico ou vazio (void)...
	//Isso significa que ele não tem ainda um tipo que possa apontar.
	//O que é útil quando você por exemplo, retorna algo de alguma função e atribui, de antemão, que tipo de dado você vai retornar sendo assim, depois você pode especificar qual tipo de dado o ponteiro void* passará a apontar 
	void *ptrG;
	//Agora ptrG passa a apontar para a variavel Letra, pois ele recebeu o endereço de memória desta variável 
	ptrG = &Letra;
	//Por que deu ERRO?
	//Lembre-se que o endereço de uma variável é apenas o 1° byte desta variável, o que elea esta carregada.
	//Assim... como o compilador vao saber como LER a variável
	//ex.: a partir do endereço 105 eu devo percorrer quantos bytes?
	//Ele só saberá isso quando você indicar o tipo do ponteiro ptrG
	//Por enquanto ele é void!
	//Logo, já que Letra é do tipo char você deve indicar que o ponteiro ptrG está apontando para um char.
	//Isso é feito via cast
	//Porque ptrG não sabe
	std::cout << "\nValor de Letra via ptrG: " << *(char*)ptrG << "\n";
	std::cout << "endl";
	//Primeiro você faz o cast e depois coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//agora o compilador sabe que deverá ler 1(byte) para colocar um char na tela!	
	ptrG = &Numero;
	std::cout << "Valor de Número via ptrG: " << *(int*)ptrG << "\n";
	std::cout << endl;
	system("PAUSE");
	return 0;
}
*/
//**********************************************************
/*
#include <iostream>				//  117 Ponteiros  //
#include <tchar.h> 
using namespace std;
int main()
{	setlocale(LC_ALL, "portuguese");	
	int Numero{ 4890 };
	char Letra {'E'};
	//Declarei ponteiro genérico ou vazio (void)...
	//Isso significa que ele não tem ainda um tipo que possa apontar.
	//O que é útil quando você por exemplo, retorna algo de alguma função e atribui, de antemão, que tipo de dado você vai retornar sendo assim, depois você pode especificar qual tipo de dado o ponteiro void* passará a apontar 
	void *ptrG;
	//Agora ptrG passa a apontar para a variavel Letra, pois ele recebeu o endereço de memória desta variável 
	ptrG = &Letra;
	//Por que deu ERRO?
	//Lembre-se que o endereço de uma variável é apenas o 1° byte desta variável, o que elea esta carregada.
	//Assim... como o compilador vao saber como LER a variável
	//ex.: a partir do endereço 105 eu devo percorrer quantos bytes?
	//Ele só saberá isso quando você indicar o tipo do ponteiro ptrG
	//Por enquanto ele é void!
	//Logo, já que Letra é do tipo char você deve indicar que o ponteiro ptrG está apontando para um char.
	//Isso é feito via cast
	//Porque ptrG não sabe
	std::cout << "\nValor de Letra via ptrG: " << *(char*)ptrG << "\n";
	std::cout << "endl";
	//Primeiro você faz o cast e depois coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//agora o compilador sabe que deverá ler 1(byte) para colocar um char na tela!	
	ptrG = &Numero;
	std::cout << "Valor de Número via ptrG: " << *(int*)ptrG << "\n";
	std::cout << endl;
	system("PAUSE");
	return 0;
}
*/
//**********************************************************
/*
#include <iostream>		//Variáveis de memória
#include <tchar.h> 
using namespace std; 
int main()
{	setlocale(LC_ALL, "portuguese");
	//Então, para declarar uma variável que seja considerada um ponteiro basta colocar <tipo a ser apontado> *<nome da variável>
	int *ptr;
	//Obs.: A posição do asterisco neste caso não importa
	//int* ptr; //dá no mesmo!
	int Numero = 101;
	//Aqui vamos colocar na tela o endereço de mémoria da variável número, ou seja onde ela está carregada na memória RAM
	//Lembre-se que o que vai para tela é o primeiro endereço da variável número pois ela ocupa 4 endereços, pois tem 4 bytes de tamanho
	std::cout << "\nEndereço de número: " << &Numero;
	//Obs.: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro, ou seja, qual lugar da RAM ele está alocado?
	//Veja nós ainda não estamos colocando na tela nada que esteja dentro das variáveis. Pois para colocar o que esta dentro das variáveis, ns usamos apenas o nome da variável!
	//ex.: std::cout << Numero
	//std::cout << ptr
	std::cout << "\nEndereço de ptr: " << &ptr <<"\n";
	std::cout << endl;
	system("pause");	
	return 0;
}
*/
//**********************************************************
/*#
include <iostream>		//Variáveis de memória
#include <tchar.h> 
using namespace std; 
int main()
{	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\nTamanho variável número: " << sizeof(Numero)<< "bytes";
	std::cout << "\nTamanho variável salário: " << sizeof(Salario) << "bytes\n";
	std::cout << "\nEndereço de memória da variável número: " << &Numero;
	std::cout << "\nEndereço de memória da variável sálario: " << &Salario << "\n\n";
	system("pause");
	return 0;
}
*/
//**********************************************************
/*
#include<iostream>
#include<tchar.h>  // PT-BR
#include<iomanip> // para formatar casas décimais
void MostrarCarrinho(float Total, float MeiaEntrada, float InteiraEntrada) 
{
    Total = (MeiaEntrada * 10.50) + (InteiraEntrada * 21.0);

    std::cout << "\n***SEU CARRINHO DE COMPRAS***\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "[MEIA ENTRADA]:\t\t" << MeiaEntrada << "\t" << "R$ " << MeiaEntrada * 10.50 << "\n";
    std::cout << "[ENTRADA INTEIRA]:\t" << InteiraEntrada << "\t" << "R$ " << InteiraEntrada * 21.0 << "\n";
    std::cout << "[TOTAL]:\t\t" << "\t" << "R$ " << Total << "\n\n\n";    
}

int main()
{
    _tsetlocale(LC_ALL, _T("portugue"));
    float MeiaEntrada = 0.0;
    float InteiraEntrada = 0.0;
    float Total = 0.0;
    char Choice;
	do
    {
        std::cout << "\n\t\t\t=== MENU DE OPÇÕES: ===\n";
        std::cout << "-----------------------------------------------\n";

        std::cout << std::endl;        
        std::cout << "Selecione [1] para COMPRAR 01\t\tMEIA ENTRADA\t(+R$ 10,50)\n";
        std::cout << "Selecione [2] para COMPRAR 01\t\tENTRADA INTEIRA\t(+R$ 21,00)\n";
        std::cout << "Selecione [3] para RETIRAR 01\t\tMEIA ENTRADA\t(-R$ 10,50)\n";
        std::cout << "Selecione [4] para RETIRAR 01\t\tENTRADA INTEIRA\t(-R$ 21,00)\n";
        std::cout << "Selecione [5] para ZERAR o Carrinho\n";
        std::cout << "Selecione [6] para MOSTRAR o Carrinho\n";
        std::cout << "Selecione [7] para SAIR.\n";
        
        std::cout << std::endl;
        std::cout << "\t -> Entre com um número para realizar as compras: ";
        std::cin >> Choice;

            switch (Choice)
            {
                case '1' :
                    system("CLS"); //limpa a tela do console, removendo todo o texto exibido anteriormente
                    std::cout << "\nMEIA ENTRADA adicionada!\n";
                    MeiaEntrada++;
                    MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
                    break;
                case '2' :
                    system("CLS");
                    std::cout << "\nENTRADA INTEIRA adicionada!\n";
                    InteiraEntrada++;
                    MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
                    break;
                case '3' :                    
                    if (MeiaEntrada == 0)
                    {
                        std::cout << "\n[ERRO]: Impossível retirar entrada (0 compras realizadas)\n";
                        break; 
                    }                    
                    else
                    {
                        system("CLS");
                        std::cout << "\nMEIA ENTRADA retirada!\n";
                        MeiaEntrada--;
                        MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
                        break;
                    }
                case '4' :
                    if (InteiraEntrada == 0)
                    {
                        std::cout << "\n[ERRO]: Impossível retirar entrada (0 compras realizadas)\n";
                        break;
					}
                    else
                    {
                        system("CLS");
                        std::cout << "\nENTRADA INTEIRA retirada!\n";
                        InteiraEntrada--;
                        MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
                        break;
                    }
                case '5' :
                    system("CLS");
                    std::cout << "\nCARRINHO ZERADO!\n";
                    MeiaEntrada = 0;
                    InteiraEntrada = 0;
                    MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
                    break;
                case '6' :
                    system("CLS");
                    MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
                    break;
                case '7' :
                    std::cout << "\nFechando o Carrinho...\n";
                    break;
                default:
                    std::cout << "\n[ERRO]: Opção Inválida! Verifique o MENU de opções!\n";
                    break;
            }
    } while (Choice != '7');
      return 0;
}
*/
//**********************************************************
/*
#include<iostream>
#include<tchar.h>
#include<iomanip>// para casas decimais

void MostrarCarrinho(float Total, float MeiaEntrada, float InteiraEntrada)
{
    Total = (MeiaEntrada * 10.50) + (InteiraEntrada * 21.0);

    std::cout << "\n***SEU CARRINHO DE COMPRAS***\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "[MEIA ENTRADA]:\t\t" << MeiaEntrada << "\t" << "R$ " << InteiraEntrada * 21.0 << "\n";
    std::cout << "[TOTAL]:\t\t" << "\t" << "R$ " << Total << "\n\n";
 }

 int main ()
 {   _tsetlocale(LC_ALL, "portuguese");
    float MeiaEntrada = 0.0;
	float InteiraEntrada = 0.0;
	float Total = 0.0;
	char Escolha;
 
	do
	{
		std::cout << "\nMENU DE OPÇÕES" << "\n";
		std::cout << "--------------" << "\n";
 
		std::cout << std::endl; 
		std::cout << "Selecione [1] para COMPRAR 01 \tMEIA ENTRADA\t(+R$ 10,50)" << "\n";
		std::cout << "Selecione [2] para COMPRAR 01 \tENTRADA INTERA\t(+R$ 21,00)" << "\n";
		std::cout << "Selecione [3] para RETIRAR 01 \tMEIA ENTRADA\t(-R$ 10,50)" << "\n";
		std::cout << "Selecione [4] para RETIRAR 01 \tENTRADA INTEIRA\t(-R$ 21,00)" << "\n";
		std::cout << "Selecione [5] para ZERAR o carrinho" << "\n";
		std::cout << "Selecione [6] para MOSTRAR o carrinho" << "\n";
		std::cout << "Selecione [7] para SAIR" << "\n";
 
		std::cout << std::endl; 
		std::cout << "Entre com o número para realizar as compras: ";
		std::cin >> Escolha;
 
		switch (Escolha)
		{ 
		case '1': 
			system("CLS");
			std::cout << "\nMEIA ENTRADA adicionada!" << "\n";
			MeiaEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break; 
		case '2': 
			system("CLS");
			std::cout << "\nENTRADA INTEIRA adicionada!" << "\n";
			InteiraEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break; 
		case '3': 
			if (MeiaEntrada == 0)
			{
				std::cout << "\n[ERRO]: Impossível retirar entrada (0 compradas)" << "\n";
				break;
			} 
			else
			{
				system("CLS");
				std::cout << "\nMEIA ENTRADA retirada!" << "\n";
				MeiaEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			} 
		case '4': 
			if (InteiraEntrada == 0)
			{
				std::cout << "\n[ERRO]: Impossível retirar entrada (0 compradas)" << "\n";
				break;
			} 
			else
			{
				system("CLS");
				std::cout << "\nENTRADA INTEIRA retirada!" << "\n";
				InteiraEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			} 
		case '5': 
			system("CLS");
			std::cout << "\nCARRINHO ZERADO!" << "\n";
			MeiaEntrada = 0;
			InteiraEntrada = 0;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break; 
		case '6': 
			system("CLS");
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break; 
		case '7': 
			std::cout << "\nFechando o carrinho..." << "\n";
			break; 
		default: 
			std::cout << "\n[ERRO]: Opção inválida! Verifique o MENU de opções!" << "\n";
			break;
		}

	} while (Escolha != '7'); 
	return 0;
}
*/
//**********************************************************
/*
#include<iostream>      //  *** PROTOTYPE ***  //
//Você pode colocar valores padrões no protótipo e então quando
//você chamar a função, poderá omitir argumentos, pois a função irá
//utilizar o argumento padrão (se você não informar o argumento quando da chamada da função.
//Para colocar um valor padrão basta colocar =
void Coordenadas(int x, int y, int z = 8);
//Você não é obrigado a inserir todos os argumentos padrão. Porém,
//se deixar algum de fora deve seguir a regra, que precisa colocar
//valores da esquerda para a direita;

int main()
{
    //Apesar da função solicitar na chamada o emprego de 3 
    //argumentos que serão enviados aos parâmentros x, y, e z.
    //Esta chamada sem você empregar argumentos irá funcionar,
    //pois els tem argumentos padrão;
    Coordenadas(5, 6);
    system("PAUSE");
    return 0;
}

void Coordenadas(int x, int y, int z)
{
    x *= 10; //This is the same as x = x * 10;
    y *= 10; //This is the same as y = y * 10;
    z *= 10;
    std::cout << "(" << x << " - " << y << " - " << z << ")";
}
*/