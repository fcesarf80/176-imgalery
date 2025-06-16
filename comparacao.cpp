

//     01) Desenvolva um programa q escreve na tela a frase Vou aprender a programar na
// Linguagem C
#include<iostream>
#include<stdlib.h>

   int main()
{
	std::cout<<std::endl;
    std::cout << "Vou aprender a programar na Linguagem C"<<std::endl;
    std::cout<<std::endl;


    system("pause");
    return 0;
}



// 02) Altere o programa do exercício 01 para que cada palavra da frase V ou aprender a
// programar na L inguagem C apar eça em linhas diferentes da seguinte forma:
// V
// ou
// aprender
// a
// programar
// na
// L inguagem C
// Obs: a) U se primeiramente comando std::endl p a ra quebra de linha(pular uma linha ENTER
// b) Depois substit ua o comando std::endl pelo cara ctere de escape nova linh a n New Line
// 03) No Código do exercício 02) utilize os atalhos do Visual Studio Community 2017 para:
// 
// Criar um comentário de uma linha de código com // colocando seu nome completo e
// dat a de criação do programa.
// 
// Criar um comentário de várias linhas de código /**/ explicando e descrevendo o que
// faz e qual objetivo d este programa
// 
// Aumentar e Diminuir o texto de seu Código F onte
// 
// Copiar sem selecionar a Linha de Código o nde está localizado o comando std:: cout e
// depois colar esta linha abaixo da mesma para que apareçam duas frases repetidas.
// 
// Compile o Código utilizando o Atalho do Visual Studio
// 
// Execute o Código utilizando o Atalho do Visual Studio
// 04) Utilizand o o comando System(COLOR CorFundoCorTexto) e altere a cor de exi bição da
// fonte no terminal de saí da para uma cor de sua preferência.
// Obs: Veja a seguir a lista de cores possíveis
    //...........................................................

/*
//Operadores logicos
#include<iostream>
#include<stdlib.h>
using namespace std;

    int main () {
        std::cout<<"Digite um numero no intervalo de 45 ate 72"<<endl;

        int i = 0;
        std::cin>> i;

        if(i >=45 && i<=72) {
            std::cout<<"Obrigado por informar o numero "<<" no intervalo solicitado"<<endl;

                if(i == 45 || i == 72) {
                std::cout<<"O valor de i eh igual de algum extremo"<<endl; }

         }
         else {
                std::cout<<"o numero digitado nao esta no intervalo solicitado"<<endl;
            }

        system("pause");
        return 0;
    }
*/

/*
//EXTRUTURA DE SELECAO MULTIPLA
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	
	double nota1, nota2, nota3, nota4;
	std::cout<<"Digite a sua primeira nota do semestre:>>> "<<endl;
	std::cin>>nota2;
	std::cout<<"Digite a sua segunda nota do semestre:>>> "<<endl;
	std::cin>>nota3;
	std::cout<<"Digite a sua terceira nota do semestre:>>> "<<endl;
	std::cin>>nota4;
	std::cout<<"Digite a sua quarta nota do semestre:>>> "<<endl;
	std::cin>>nota4;

	double soma = nota1 + nota2 + nota3 + nota4;
		soma = (soma / 4);

	std:cout<<"A sua media no semestre foi: "<<soma<<endl<<endl;

	if(soma >= 7){
		std::cout<<"Parabens! Voce foi aprovado!"<<endl;
	
	} else {
	   std::cout<<"Eita voce foi reprovado"<<endl;
    }
system("pause");
	return 0;
}
*/


/*
//EXTRUTURA ELSE
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int valor = 0;
	    std::cout<<"Digite um numero qualquer: "<<endl;
	    std::cin>>valor;

	if(valor > 50) {
	     std::cout<<"O valor digitado eh maior do que 50"<<endl;
 	} else {
	     std::cout<<"o valor digitado eh menor do que 50"<<endl;
	}

	std::cout<<"i eh diferente de i2?"<<endl;

	if(valor!=12){
	    std::cout<<"SIM! i eh diferente de i2"<<endl;
    }
	


    system("pause");
	return 0;
}


*/
/*
//CONDICOES EXTRUTURA IF
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() 
{
	int i = 5, i2 = 10;
	if(i ==i2)

	std::cout<<"A variavel i eh igual a variavel i2"<<endl";

	std::cout<<"i eh diferente de i2?"<<endl;
	if(i !=12)
	std::cout<<"SIM! i eh diferente de i2"<<endl;
	
	


system("pause");
	return 0;
}

*/

/*
//RESTO DA DIVISAO
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() 
{
	int a = 5 / 2;
	int num1, num2;
	num1 = 10;
	num2 = 5;
	
	int div = num1 / num2;
	int resto = num1 % num2; 

	std::cout<<"A divisao de num1 e num2 eh igual a: "<<div<<endl;
	std::cout<<"A divisao de num1 por num2 tem resto: "<<resto<<endl;

	system("pause");
	return 0;
}
*/


/*
#include<iostream>
#include<stdlib.h>

using namespace std;

int main() 
{
	int num1, num2, soma, sub, multi, div, resto;

	std::cout<<"Seja bem vindo a nossa primeira calculadora"<<endl;
	std::cout<<"Digite o primeiro  numero: "<<endl;
	std::cin>>num1;
	std::cout<<"Digite o segundo numero: "<<endl;
	std::cin>>num2;

	soma  = num1 + num2;
	sub   = num1 - num2;
	multi = num1 * num2;
	div   = num1 / num2;
	resto = num1 % num2;

	std::cout<<"A soma eh: "<<soma<<endl;
	std::cout<<"A subtracao eh: "<<sub<<endl;
	std::cout<<"O produto eh: "<<multi<<endl;
	std::cout<<"A divisao eh: "<<div<<endl;
	std::cout<<"O resto da divisao eh: "<<resto<<endl;

	//ou pode-se utilizar menos linhas e deixar o codgo mais elegante:

	std::cout<<"A soma eh: "<<num1 + num2<<endl;
	std::cout<<"A subtracao eh: "<<num1 - num2<<endl;
	std::cout<<"O produto eh: "<<num1 * num2<<endl;
	std::cout<<"A divisao eh: "<<num1 / num2<<endl;
	std::cout<<"O resto da divisao eh: "<<num1 % num2<<endl;



	system("pause");
	return 0;
}
*/


/* 
 #include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int x, y;
	x = 9;
	y = 3;

	std::cout <<"O valor de x eh: "<<x<<" e o valor de y eh: "<<y<<"."<<endl;
	std::cout <<"A soma entre x e y eh: "<<x + y<<"."<<endl;
	std::cout<<"A subtracao entre x e y eh: "<<x - y<<"."<<endl;
	std::cout<<"A multiplicacao entre x e y eh: "<<x * y<<"."<<endl;
	std::cout<<"A divisao entre x e y eh: "<<x / y<<"."<<endl;

	system("pause");

		return 0;
}
*/

/*

 #include <iostream>
using namespace std;

int main () 
{
	cout<<"Informe um numero: "<<endl;
	int num1 = 0;
	
	cout<<"Informe outro numero: "<<endl;
	int num2 = 0;
	cin>>num2;

	cout<<"Os números digitados foram: "
		<<num1
		<<" e "
		<<num2
		<<endl;

		system("pause");

		return 0;

}

*/
/*
#include <iostream>
using namespace std;
int main() {
    
    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    std::cout<<"O valor da variavel varInt eh: "<<varInt<<endl;
    std::cout<<"O valor da variavel c eh: "<<c<<endl;
    std::cout<<"O valor da variavel pFlutuante eh: "<<pFlutuante<<endl;
    std::cout<<endl;
    std::cout<<"Memoria da variavel varInt: "<<sizeof(varInt)<<"bytes"<<endl;
    std::cout<<"Memoria da variavel c: "<<sizeof(c)<<"bytes"<<endl;
    std::cout<<"Memoria da variavel pFlutuante: "<<sizeof(pFlutuante)<<"bytes"<<endl;

    return 0;
}*/

 
 /*
 #include <iostream>
 #include <stdlib.h>
 #include <string>
 int main(int argc, char** argv)  {
    int myArray[10];

    for (int i = 0; i < 10; i++) {
        myArray[i] = i + 1;   
    }

    for (int i = 0; i < 10; i++) {
        std::cout<< myArray[i]<<"\n";
    }
   
    
    system("pause");
    return 0;
 }*/
 
 
 
 
 /*          
#include <iostream>
#include <string>
int main(int argc, char** argv) 
{
    while (true) {
    int myInt = -10;
    std::cout<<"Digite um numero: ";
    std::cin>> myInt;
    
    if (myInt==123) {
    break;
    }
    if (x > 0){
        std::cout<<"X é posistivo!\n";
    } (myInt > 0){
        std::cout<<"myInt eh positivo!\n";
    }
    else if (myInt < 0){
        std::cout<<"myInt eh negativo\n";
    }
    else {
        std::cout<<"myInt eh zero!\n";
    }
    system("pause");

    return 0;
}*/


        /* Em C++, int argc, char** argv são parâmetros     opcionais da função main, que permite que o programa receba argumentos passados na linha de comando quando é executado. argc é um inteiro que indica o número de argumentos, enquanto argv é um array de strings (ponteiros para strings, daí o **), onde cada string representa um argumento individual. 
*/

//..............................................

/* ex.1 m3.6_Escreva um programa que:
Declare duas variáveis int e float;
Atriba um valor interio à variável int e um valor decimal à float;
Converta explicitamente float para int;
Converta implicitamente int para float;
Imprima os valores antes e depois da converão:

#include <iostream> //ex m3.6
using namespace std;
int main ()
{ 
    int n=5;
    float x=1.2;
    int xInt = (int) x;
    cout<<"x="<<x<<endl;
    cout<<"xInt="<<xInt<<endl;
    float nF=n;
    cout<<"n="<<n<<endl;
    cout<<"nF="<<nF<<endl;    
    return 0;
}
*/

/*ex.2_ Crie um programa que:
peça ao utilizador dois números inteiros;
Divida um pelo outro normalmente e mostre o resultado
Use um cast para converter um dos números para float
antes da divisão e mostre o novo resultado.  
 #include <iostream>
 using namespace std;
 int main ()
 {
     int n1=5, n2=2;
     int result=n1/n2;
     float r=(float)n1/n2;
     cout<<"Resultado int= "<<result<<endl;
     cout<<"Resultado float= "<<r<<endl;
     return 0;
 }
*/

/*ex.3_Crie um programa que:
Solicite ao utilizadpr que digite um ùnico caractere.
Converta esse caractere (char)para seu valor numérico na tela ASCII.
Exiba o valor inteiro correspondente ao caractere digitado.

    #include <iostream>
    using namespace std;
    int main ()
    {
    char tecla='a';
    int AsciiTecla= (int) tecla;
    cout<<"Tecla em ASCII= "<< AsciiTecla<<endl;
    return 0;
    }
*/

/*  int main()
    {
    int a = 5;
    float b = 4.9;
    float resul_a = static_cast<float>(a);
    int resul_b = static_cast<int>(b);    
    float resul_c = a + b;// Operação sem conversão    
    int resul_d = static_cast<int>(resul_a);//Conversão explícita
    cout<<"O valor da variavel 'a' do tip inteiro eh: 5"<<endl;
    cout<<"O valor da variavel 'b' do tip float eh: 4.9"<<endl;
    cout<<"O valor de 'a' convertido para float eh: "<<resul_a<<endl;
    cout<<"O valor de 'b' convertido para inteiro eh: "<<resul_b<<endl;
    cout<<"A soma das variaveis 'a' e 'b' eh: "<<resul_c<<endl;
    cout<<"A soma das variaveis 'a' e 'b' convertida para inteiro eh: "<<resul_d<<endl;
*/

/*  int x=16, y=3;
    int result= x/y;
    cout<<"Resultado int= "<<result<<endl; 
    float r=(float)x/y;
    cout<<"Resultado float= "<<r<<endl;
    //C++ static_cast
    char c='a';
    int i=static_cast<int>(c);
    cout<<"i = "<<i<<endl;
    return 0;
    }
*/

//Em C++, "cast" é traduzido para conversão de tipo ou conversão explícita. Refere-se à alteração do tipo de um objeto ou valor de um tipo para outro..

/*Exercício de C++:Faça um programa que pede 2 valores, em seguida exiba operações de comparação.
#include <iostream>
using namespace std;
int main ()
    {
    int vl1, vl2;
    std::cout<<"Insira o 1° valor: ";
    std::cin>>vl1;
    std::cout<<"Insira o 2° valor: ";
    std::cin>>vl2;
    std::cout<<vl1<<" > " <<vl2<<" : "<<(vl1>vl2) <<endl; 
    std::cout<<vl1<<" < " <<vl2<<" : "<<(vl1<vl2) <<endl;
    std::cout<<vl1<<" >= "<<vl2<<" : "<<(vl1>=vl2)<<endl;
    std::cout<<vl1<<" <= "<<vl2<<" : "<<(vl1<=vl2)<<endl;
    std::cout<<vl1<<" == "<<vl2<<" : "<<(vl1==vl2)<<endl;
    std::cout<<vl1<<" != "<<vl2<<" : "<<(vl1!=vl2)<<endl;
    return 0;
    }
*/
