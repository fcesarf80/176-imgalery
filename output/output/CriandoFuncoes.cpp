#include<iostream> 			// class 125   //
#include<tchar.h>
//Agora vamos fazer o mesmo. A passagem de argumentos para a função por 
//referência. SDó que agora utilizando ponteiros.
//Lembre-se que ponteiros são variáveis que possuem dentro delas um endereço de outras variáveis Alem disse, eles precisão ser desreferenciado para chegar ao valor apontado ou alterá-lo
//Aqui foi indicado que a função deve receber endereços de memória pois
//trata-se de dois ponteiros...Então quando enviar para função você deve enviar o endereço de memória das variáveis. E estes endereços serão colocados nessas variáveis do tipo ponteiro
void TrocaNumeros(int* Num1, int* Num2);
int main()
{	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o 1° Número: ";
	std::cin >> Numero1;
	std::cout << "Digite o 2° Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca:\n";
	std::cout << "\tNumero1 = " << Numero1;
	std::cout << "\n\tNumero2 = " << Numero2;		
	TrocaNumeros(&Numero1, &Numero2);
	std::cout << "\nValores depois da troca:";
	std::cout << "\n\tNumero1 = " << Numero1;
	std::cout << "\n\tNumero2 = " << Numero2<< "\n";
	std::cout << "Endereço de memória de Numero1: " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2: " << &Numero2 << "\n\n";
	system("PAUSE");
	return 0;
}
void TrocaNumeros(int* Num1, int* Num2)
{	
	std::cout << "\nEndereço de memória de Num1 da função: " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função: " << &Num2<< "\n";
	std::cout << "\nEndereço de memória contido dentro de Num1: " << Num1;
	std::cout << "\nEndereço de memória contido dentro de Num2: " << Num2<< "\n";
	int Temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = Temp;	
}
//**********************************************************
/*
#include<iostream> 			// class 124   //
#include<tchar.h>

void TrocaNumeros(int& Num1, int& Num2);

int main()
{	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o 1° Número: ";
	std::cin >> Numero1;
	std::cout << "Digite o 2° Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca:\n";
	std::cout << "\tNumero1 = " << Numero1;
	std::cout << "\n\tNumero2 = " << Numero2;	
	
	TrocaNumeros(Numero1, Numero2);
	std::cout << "\nValores depois da troca:";
	std::cout << "\n\tNumero1 = " << Numero1;
	std::cout << "\n\tNumero2 = " << Numero2<< "\n";
	std::cout << "Endereço de memória de Numero1: " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2: " << &Numero2 << "\n\n";
	system("PAUSE");
	return 0;
}
//Agora Num1 e Num2 não recebem simplesmente uma cópia do valor de Numero1 e Numero2. Eles passam a ser referenciados de Numero1 e Numero2 respectivamente. Assim, se eles alteram o valor isso irá afetar as variáveis, pois agora eles são referências!
void TrocaNumeros(int& Num1, int& Num2)
{	
	std::cout << "\nEndereço de memória de Num1 da função: " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função: " << &Num2<< "\n";
	int Temp{ Num1 };
	//aqui está copiando em Numero1 o valor de Numero2 pois são referências. É como se fosse Numero1 = Numero2
	//Lembre que referências são alias para suas variáveis
	//Isso aqui (int& Num1 e int& Num2) é o mesmo que
	// int& Num1 = Bumero1 e int& Num2 = Numero2;
	//só que isso ocorre na chamada da função. 
	//A isso damos o nome de passagem de argumentos para função por referência!
	Num1 = Num2;
	
	Num2 = Temp;	
}
//**********************************************************
/*
#include<iostream> 			//	class 123    //
#include<tchar.h>

void TrocaNumeros(int Num1, int Num2);
int main()
{	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	std::cout << "\nDigite o 1° Número: ";
	std::cin >> Num1;
	std::cout << "Digite o 2° Número: ";
	std::cin >> Num2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\tNumero1 = " << Num1;
	std::cout << "\n\tNumero2 = " << Num2 << "\n";
	std::cout << "\nValores depois da troca\n";
	//Esta chamada de função, apenas COPIA o valor de Numero1 e Numero2
	//e coloca estes valores em Num1 e Num2 respectivamente da função
	//troca Numeros...
	//Não há relação alguma com essas variáveis...
	//Numero1 e Numero2 são variáveis locais a função main e
	//Num1 e Num2 são as variáveis locais a função TrocaNumeros
	TrocaNumeros(Num1, Num2);
	//Mesmo sendo o mesmo nome, sçao variáveis diferentes e com endereços de memória diferentes.
	//A isso chamamos de passagem de argumentos por valor!
	//Apenas uma copia do valor é enviado para a função
	std::cout << "\tNum1 = " << &Num1;
	std::cout << "\n\tNum2 = " << &Num2<< "\n\n";
	std::cout << "\tNum1 = " << Num1;
	std::cout << "\n\tNum = " << Num2<< "\n\n";
	system("PAUSE");
	return 0;
}
Passagem de argumentos para funções por referência utilizando referência
void TrocaNumeros(int Num1, int Num2)
{
	//Como fazer a troca de valores de dois números?
	//Para isso, precisamos de um local temporário para armazenar o valor de Num1, antes dele receber o novo valor!
	//Variável temporária que guarda o valor de Num1
	//Ex:Se for digitado 10 Temp=10 e se for digitado Num2=20, temos
	std::cout << "\tNum1 Função = " << &Num1;
	std::cout << "\n\tNum2 Função = " << &Num2<< "\n\n";
	int Temp{ Num1 };
	//Num1 passa a ser 20
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	Num2 = Temp;
	//Então aqui a troca ocorre apenas nas variáveis locais, Numero1 e Numero2 ficam intactos, sem alteração!

}
*/
//**********************************************************
/*
#include<iostream>
int main()
{
	int Numero{ 1024};
	int Numero2{ 2024};
	//Observe que a referência nãopode ficar sem ser atribuida logo que ela é criada
	int &RefNum{ Numero2 };
	//Agora está ok. Pois Ref passa a ser uma referência de Numero2
	RefNum =5644;
	//Podemos alterar o valor do referenciamento apenas com o nome da referência sem precisar de *
	int* ptr = &Numero;
	//Aqui não será permitido pois referência só pode ser atribuir uma única vez
	int* ptr = { nullptr };
	//Um ponteiro pode ser declarado sem ser inicializado!
	//Até mesmo assim é permitido!
	*ptr = 4048;
	std::cout << "\nValor de Número: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endereço, fazer ele apontar para outra variável.
	//Isso é permitido!
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "\nValor de Numero2: " << *ptr << "\n";
	system("pause");
	return 0;
}
*/
//**********************************************************
/*
#include<iostream>
#include <tchar.h> 
using namespace std;
int main()
{	setlocale(LC_ALL, "portuguese");
	int Numero{ 1024 };
	char Letra{ 'A' };
	//O que significa esse 'int &Ref = Numero', ele declara uma referência, significa que foi criado um elias (rotulo, apelido) para a variável número
	//Neste caso não é criada uma região de memória que vai conter algo dentro e que seria chamada Ref. Ref não tem endereço na RAM.
	//Não é uma variave, que podemos colocar algo dentro!
	//É apenas um atalho para Número.
	int &Ref = Numero;
	//Para colocar na tela o valor que a referência referencia, basta colocar o nome dela, da referência. Não precisa desreferenciar como nos ponteiros. *ptr 
	std::cout << "\nValor de Número usando Ref: " << Ref << "\n";
	std::cout << "Valor Endereço de Número: " << &Numero << "\n";
	//Observe que &Ref irá retornar o endereço de Número pois uma referência nasce e fica como novo rótulo da váriavel que ela rferencia estando portanto no mesmo endereço de número, neste caso.
	std::cout << "Valor Endereço de Ref: " << &Ref << "\n";
	//Já aqui, será criada uma variável, um espaço na memória RAM e dentro deste espaço de nome ptr será colocado o endereço de memória de Numero. É bem diferente de referência pois esta não contem um espaço alocado, ela apenas é mais um nome, um rótulo, um apelido para referenciar a variável.
	int* ptr = &Numero;
	std::cout << "Valor Endereço de prt na RAM: " << &ptr << "\n";
	std::cout << "\nValor de Númeoro usando ptr: " << *ptr << "\n";
	std::cout << "\nValor Endereço contido dentro de ptr: " << ptr << "\n";
	std::cout << endl;
	system("PAUSE");
	std::cout << endl;
	return 0;
}
*/
//**********************************************************
/*
//Para alterar o valor de Letra (código abaixo) utilizando ptr voê pode utilizar: ptr = 'C';
//	1| char* ptr;
//	2| ptr = &Letra;
//	3| ptr = 'B';

// R= ERRADO. Está ERRADO a frase pois, ptr ='B' estaria colocando 'B' dentro de ptr e isso daria erro pois podemos colocar somente endereço de memória dentro de ptr. O correto seria com o operador de desreferenciammento *Assim deveria ser: *ptr = 'C'; 
//

//**********************************************************
/*
//  119 Ponteiros  //
//Crie uma variável de nome Número do Tipo inteiro e valor inicial igual a 234;
//Crie um ponteiro de nome Ponteiro capaz de apontar para uma variável do tipo inteiro;
//Troque o valor do Número para 1456 usando Ponteiro
//Coloque o valor de Número na tela usando Ponteiro
//Mostre o endereço da memória RAM em que estão carregados, alocados as variáveis Ponteiro e Número;
//Crie um outro ponteiro de nome OutroPtr
//Faça PutroPtr apontar para a mesma variável que ptr aponta.
//Usando Ponteiro some 200 ao valor contido em Número
//Usando OutroPtr coloque na tela o valor de Número 
#include <iostream>				//  119 Ponteiros  //
#include <tchar.h> 
using namespace std;
int main()
{	setlocale(LC_ALL, "portuguese");	
	int Numero{ 234 };
	int* Ponteiro = &Numero; // forma direta
	// int* Ponteiro;		// forma em 2 parte
	// Ponteiro = &Numero;
	int* OutroPtr = Ponteiro;
	*Ponteiro = 1456;
	std::cout << "\nValor de Número: " << *Ponteiro << "\n";
	std::cout << "Endereço de Número: " << &Numero << "\n ";
	std::cout << "Endereço de Ponteiro: " << &Numero << "\n";
	std::cout << "Valor contido em DENTRO de Ponteiro: "<< Ponteiro << "\n";
	*Ponteiro += 200; //ou *Ponteiro += 200;
	std::cout << "Valor de Númeor: " << *OutroPtr << "\n";
	std::cout << endl;
	system("PAUSE");
	std::cout << endl;
	return 0;
}
*/
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