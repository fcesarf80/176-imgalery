//PROTOTIPO DE FUNÇÕES
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;

float soma(float num1, float num2) {
    return (num1, num2);
} 

int main() {
    std::cout << soma(100,500) << "\n";
    system("Pause");
    return 0;
}

//FUNÇÕES
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;

// O que a função vai retornar?
// Tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
    return Numero + NumeroASerSomado;
}
int main()
{
    int Numero, NumeroASerSomado;
    std:: cout << "\nDigite um número: ";
    std::cin >> Numero;
    std::cout << "Digite o número a ser somado: ";
    std::cin >> NumeroASerSomado;
    std::cout << "A soma desse número: [ " << Numero << " ] com o núrmero: [ " << NumeroASerSomado << " ] será: [ " << SomaAUmNumero(Numero, NumeroASerSomado) <<" ]\n";
    system("PAUSE");
    return 0;
}

/*
//FUNÇÕES
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;

// O que a função vai retornar?
// Tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
    return Numero + NumeroASerSomado;
}

void Mensagem()
{
    std::cout<< "\nMensagem de Marte... Chegamos bem...\n";
}


int main()
{
    int Numero, NumeroASerSomado, RetornoDaFuncao;
    Mensagem();
    std:: cout << "\nDigite um número: ";
    std::cin >> Numero;
    std::cout << "Digite o número a ser somado: ";
    std::cin >> NumeroASerSomado;
    std::cout << "A soma desse número: [ " << Numero << " ] com o núrmero: [ " << NumeroASerSomado << " ] será: [ " << SomaAUmNumero(Numero, NumeroASerSomado) <<" ]\n";
    RetornoDaFuncao = SomaAUmNumero(200, -500);

    std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400));

    std::cout << "Soma de 200 com - 500: " << RetornoDaFuncao;
    std::cout << std::endl;
    system("PAUSE");
    return 0;
}
/*#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
#include<algorithm>
using namespace std;

void eleicao(int matz[4][4], int freguesias, int candidatos){
    //total de votos
    int total = 0;

    int votosCandidato[4]={0};

    for (int i = 0; i < candidatos; i++) {
        for  (int j=0; j<freguesias; j++) {
            total = total + matz [i][j];
            votosCandidato[j] = votosCandidato [j] +matz[i][j];
        }
    }
    cout << "O total de votos é: "<< total << endl;
    for (int i = 0; i < candidatos; i++) {
        cout<<votosCandidato[i]<<" ";
        if (votosCandidato[i]>(total/2)) {
            cout<<"O candidato com os votos "<<votosCandidato[i]<<"teve a maior é vencedor"<<endl;
        }
    }
    //ordenar o vetor de candidados ordem decrescente
    sort(votosCandidato, votosCandidato+candidatos, greater<int>());
    cout<<endl;
    for(int i= 0; i<candidatos; i++) {
        cout<<votosCandidato[i]<<" ";
    }
    cout<<"\nOs candidatos que vão concorrer no próximo turno são:"<<endl;
    cout<<votosCandidato[0]<<endl;
    cout<<votosCandidato[1]<<endl;
}

int main() {
            setlocale(LC_ALL, "portuguese");
    int matriz[4][4] = {{19, 21, 15, 25}, {18, 20, 16, 17}, {12, 19, 14, 24}, {15, 27, 24, 32}};
    eleicao(matriz, 4, 4);
    return 0;
}
*/





/*
#include <iostream>

using namespace std;

void func(int arr[], int size) {

    for (int i = 0; i < size; i++) {

        arr[i] = arr[i]+i;

    }

}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    func(arr, 5);

        for (int i = 0; i < 5; i++) {

        cout << arr[i] << " ";

    }

    return 0;

}*/

/*
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;

        int main() {
            setlocale(LC_ALL, "portuguese");
            char matriz[3][3];

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << "Intriduza uma letra: ";
                    cin >> matriz[i][j];
                }
            }

            int conta = 0;
            for (int i = 0; i < 3; i++){
                for(int j = 0; j < 3; i++){
                    if (matriz[i][j]== 'a' || matriz[i][j]=='A'){
                        conta++;
                    }
                    if (matriz[i][j]== 'e' || matriz[i][j]=='E'){
                        conta++;
                    }
                    if (matriz[i][j]== 'i' || matriz[i][j]=='I'){
                        conta++;
                    }
                    if (matriz[i][j]== 'o' || matriz[i][j]=='O'){
                        conta++;
                    }
                        if (matriz[i][j]== 'u' || matriz[i][j]=='U'){
                        conta++;
                    }
                }
            }
            cout << "O quantidade de vogais da matriz é: " << conta <<endl;
            return 0;

        }
        */

/*
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;

        int somaVetor(int arr[], int tam){
            int soma = 0;
            for(int i = 0; i < tam; i++){
                soma+=arr[i];
            }
            return soma;             
        }
    int main() {      
        setlocale(LC_ALL, "portuguese");   
        int numero[6]= {12, 5, 8, 7, 11, 89};
        int resultado = somaVetor(numero, 6);
        cout << "A soma dos valores do vetor é " <<resultado;

        return 0;
    }
    */

/*//M6- calcula o fatorial de um número
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;    
    int main() {
                    setlocale(LC_ALL, "portuguese");
//Declara matriz
    int arrayDados[4][4]={{4,7,4,1},{1,8,0,7
    }, {3,6,8,2},{4,9,1,3}};
    //Imprimir os valore do array Matriz
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout<< arrayDados[i][j]<<" ";
        }
        cout<<endl;
    }
    //novos valores no array
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << "Valor da posição [" << i << "] e [" << j << "]:";
            cin >> arrayDados[i][j];
        }
    }
    //Mostrar os novos valores do array
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++) {
            cout<<arrayDados[i][j]<<" ";
        }
        cout<<endl;
       }
        return 0;
}*/
    
    // //Leitura de valores do array utilizando o ciclo FOR
    //     for (int i = 0; i < 3; i++) {
    //         cout << "\nDigite a marca do " << i+1 << "° carro: " << i+1 << "?";
    //         cin >> carros[i];            
    //     }

    //    // Escrita de valores do array utilizando o ciclo for 
    //    for (int i = 0; i<3; i++) { 
        
    //         cout << "\nA marca do " << i+1 << "° carro é "<< carros[i]<<endl;
    //     }
        

  
    















/*
#include <iostream>
#include<iomanip>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br
using namespace std;

int main {
    int x = 0;
    if ( x >= 0)
        x = x + 1;
    else if ( x >= 1)
        x = x + 2;
        
        cout<<"x = "<<x<<"\n" 

        if ( x >= 0 )
            x = x + 1;
        if (x >= 1 )
            x = x + 2; 


    return 0;
}
******************************************************************************

/*#include <iostream>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br

int main() {
  setlocale (LC_ALL, "portuguese");
  int 5, 7, 10, 8, 10, 12, ;
  // Igual a (==) Retorna 1 para true se os operandos forem iguais, caso contrário, retorna 0 para false.
  std::cout << "10 > 5: " << (num1 == num2) << std::endl; // Output: 0 (false)
  // Diferente de (!=) Retorna 1 para true se os operandos forem diferentes, caso contrário, retorna 0 para false.
  std::cout << "7 <= 7: " << (num1 != num2) << std::endl; // Output: 1 (true)
  // Maior que (>) Retorna 1 para true se o operando esquerdo for maior que o direito, caso contrário, retorna 0 para false.
  std::cout << "8 == 10: " << (num1 > num2) << std::endl; // Output: 1 (true)
  // Menor que (<) Retorna 1 para true se o operando esquerdo for menor que o direito, caso contrário, retorna 0 para false.
  std::cout << "15 != 20: " << (num1 < num2) << std::endl; // Output: 0 (false)
  // Maior ou igual a (>=) Retorna 1 para true se o operando esquerdo for maior ou igual ao direito, caso contrário, retorna 0 para false.
  std::cout << "12 >= 18 " << (num1 >= num2) << std::endl; // Output: 1 (true)
  return 0;
}
 Qual será o resultado das expressões abaixo?
 a) 10 > 5   TRUE
 b) 7 <= 7   TRUE
 c) 8 == 10  FALSE
 d) 15 != 20 TRUE
 e) 12 >= 18 FALSE
 */
// //Compiled successfully!
/*
#include <iostream>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br

int main() {
  setlocale (LC_ALL, "portuguese");
  int num1 = 10;
  int num2 = 5;

  // Igual a (==) Retorna 1 para true se os operandos forem iguais, caso contrário, retorna 0 para false.
  std::cout << "num1 == num2: " << (num1 == num2) << std::endl; // Output: 0 (false)

  // Diferente de (!=) Retorna 1 para true se os operandos forem diferentes, caso contrário, retorna 0 para false.
  std::cout << "num1 != num2: " << (num1 != num2) << std::endl; // Output: 1 (true)

  // Maior que (>) Retorna 1 para true se o operando esquerdo for maior que o direito, caso contrário, retorna 0 para false.
  std::cout << "num1 > num2: " << (num1 > num2) << std::endl; // Output: 1 (true)

  // Menor que (<) Retorna 1 para true se o operando esquerdo for menor que o direito, caso contrário, retorna 0 para false.
  std::cout << "num1 < num2: " << (num1 < num2) << std::endl; // Output: 0 (false)

  // Maior ou igual a (>=) Retorna 1 para true se o operando esquerdo for maior ou igual ao direito, caso contrário, retorna 0 para false.
  std::cout << "num1 >= num2: " << (num1 >= num2) << std::endl; // Output: 1 (true)

  // Menor ou igual a (<=) Retorna 1 para true se o operando esquerdo for menor ou igual ao direito, caso contrário, retorna 0 para false. 
  std::cout << "num1 <= num2: " << (num1 <= num2) << std::endl; // Output: 0 (false)

  return 0;
}
*/
//********************

/*#include <iostream>
using namespace std;
int n, n1, n2;
int Soma(int n1, int n2);
int Sutracao(int n1, int n2);
int Multiplicacao(int n1, int n2);
int Divisao(int n1, int n2);
int Potencia(int n1, int n2);
int RaizQuadrada(int n1, int n2);

int Soma(int n2, int n2)
{
    return n1 + n2;
}
int Sutracao(int n1, int n2);
{
    return n1 - 2;
}
int Multiplicacao(int n1, int n2)
{
    return n1 * n2;
}
int Divisao(int n1, int n2)
{
    return (float)n1 / (float)n2;
}
int Potencia(int n1, int n2)
{
    return pow(n1, n2);
}
int RaizQuadrada(int n1, int n2)
{
    return sqrt(n);
}
std::cout << "\nDigite o 1° número: ";
std::cin >> n1;
std::cout << "\nDigite o 2° número: ";
std::cout >> n2;

std::cout << "n\Resultado operadores Matemáticos\n ";
std::cout << "\nSoma: " << Soma(n1, n2);
std::cout << "\nSubtração: " << Subtração(n1, n2);
std::cout << "\nMultiplicação: " << Multiplicação(n1, n2);
std::cout << "\nDivisão: " << Divisão(n1, n2);
std::cout << "\nPotenciação: " << Potencia(n1, n2);
std::cout << "\nRaiz quadrada do 1° número é " << RaizQuadrada(n1);
std::cout << "\nRaiz quadrada do 2° número é " << RaizQuadrada(n2);
system("pause");
return 0;
*/
//***********************************
// atividade6
// int n, multiplo;

// cout<<"introduza um valor inteiro:"
// ccin>>n;
// cout<<"introduza um valor multiplo:"
// ccin>>multiplo;

// int=i=1;
// do{
    
//     if(i % multiplo == 0){
//             cout<<i<<" ";
//     }
//     i++;
    // }while(i<=n);

 //  ********************************************************* 

// #include <iostream>
// using namespace std;

// int main()
// {
    //M2.1 ciclo while
    //While(teste logico igual True) {comandos}
/*
    int x=0;
    while (x<=3){
        cout<<"x="<<x<<endl;
        x++;
    
    }
        //M5.2 ciclo for 
        //for(int i = 0; i < 5; i++) {comandos}

        for (int i= 0; i < 10; i=i+2)
        {
            cout<<i<<" ";
        }
        //decrementar
          for (int i= 10; i >=0; i=i-2)
        {
            cout<<i<<" ";
        }
        //M5.3 do...while (condicao)
        //do {comandos} while (teste lógico igua a true)

        cout<<endl;

        int y=0;
        do{
            cout<<"y="<<y<<endl;
            y++;
        }
        while(y<1);

//    ********************************************************         
        // atividade 2 
        cout<<"Atividade 2"<<endl;
        for (int f=1; f<=100; f++){
            cout<<f<<" ";
        }

cout<<endl;

        for (int f=100; f<=1; f--){
            cout<<f<<" ";
        }

cout<<endl;

        for (int f=100; f>=1; f=f-3){
            cout<<f<<" ";
        }
cout<<endl;
//    ************************************ 
//atividade 3
int k=1;
do{
    cout<<k<< " ";
    k++; //k=k+5 para imprimir de 5 em 5 (trocar aqui)

}while(k<=100);
*/
//    ******************************************** 
//Atividade 4

// int soma=0, somaMenos10=0,somaMaior10=0, contaMenos10, contaMenos10;
// int nota;
// int N;
// cout<<"quantos alunos são?"
// cin>>N;
// int i=1;
// while(i<=N){
//     cout<<"introduza a nota do alunos"<<i<<": ";
//     cin>>nota;
//     soma=soma+nota;
//     i++;
// }
// while(i<=N)

// ..............................
// float media=(float)soma/soma/N;
// cout<<"A media das notas="<<media<<endl;
//     return 0;
// }
// ...........................

/*#include <iostream>
#include<iomanip>
#include <string>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char Reply;
    bool bFezSol, bCarroPronto, bSalarioDepositado, bAcesso;
    std::string SenhaAcesso = "cmaismais", SenhaDigitada;
    do
    {
        std::cout << "Digite sua senha de acesso: ";
        std::cin >> SenhaDigitada;

        if (SenhaDigitada == SenhaAcesso)
        {
            std::cout << "\nAcesso Permitido!" << "\n"; //system("pause");-> por ter sido pemitido o acesso, não precia de 'pause'
        }
        else if (SenhaDigitada != SenhaAcesso) //senão se
        {
            std::cout << "\n Login ou senha de acesso errado!!! << \n";
            std::cout << "Quer tentar novamente? (S) ou (N): ";
            std::cin >> Reply;
            
                while (Reply == 'S' || Reply == 's')
                {
                    std::cout << "Digite sua senha novamente: ";
                    std::cin >> SenhaDigitada;
                }
                else {

                    std::cout << "\n" << "Saindo do programa... " << std::endl;
                    exit(0);
                }
        }

        else (bAcesso == true);
        {
        while (bFezSol && bCarroPronto && bSalarioDepositado)
        {
            std::cout << "Vai das praia!!!" << std::endl;
        }
        else (bAcesso == false)
        {
            std::cout << "Não vai dar praia!!!" << "\n";
        }

        std::cout << "\n Deseja fazer nova verificação? (S) ou (N): ";
	    std::cin >> Reply;
        } while (Reply == 'S' || Reply == 's');
    }      
            std::cout << "\n" << "Saindo do programa... " << std::endl;

    	    system("pause");
	
	    return 0;
}    

/*
#include <iostream>
#include <string>
int main()
{
    bool bFezSol, bCar, bCarroPronto, bSalarioDepositado, bAcesso;
    std::string SenhaAcesso = "cmaismais", SenhaDigitada;
    std::cout << "Digite a senha de acesso: ";
    std::cin >> SenhaDigitada;// Se a senha digitada pelo usúario e armazenada na variável SenhaDigitada for igual a senha de acesso, as instruções após o if seráo executadas pois a condição foi verdadeira true 1
    if (SenhaDigitada == SenhaAcesso)
        {
            std::cout << "\nAcesso Permitido!" << "\n"; //aqui aproveitamos para indicar que o acesso foi concedido através de outra variável boleana
            bAcesso = true;
            system("pause");
        }//Se a condição for falça, então as instruções do else serão executadas
        else
            {
                std::cout << "\n Acesso Negago!!!" << "\n";
                system("pause");
                exit(0);//sai do programa, força o fechamento da aplicação
            }
}
//    ************************************************** 
*/
/*#include<iostream>
#include<iomanip>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, ("portuguese"));
	char Reply;
	double Number;
	bool ResultadoLogico, ResultadoLogico2;
		do
		{
            std::cout << "Digite um número: ";
            std::cin >> Number;
            std::cout << "True = 1 e False = 0" << "\n";
            ResultadoLogico = ((Number > 100) && (Number !=0));
            std::cout << "O Resultado lógico da expressão ((Number > 100) && (Number !=0)) é: " << ResultadoLogico << std::endl;
            ResultadoLogico2 = ((Number == 100) || (Number > 200)) && (Number < 1000);
            std::cout << "O Resultado lógico da expressão ((Number == 100) || (Number > 200)) && (Number < 1000) é: " << ResultadoLogico2 << std::endl;
			std::cout << "\n Deseja calcular comparar outros valores? (S) ou (N): ";
			std::cin >> Reply;
		} while (Reply == 'S' || Reply == 's');
	std::cout << "\n" << "Saindo do programa... " << std::endl;
	system("pause");	
	return 0;
}
*/
//    ************************************************** 
/*
#include<iostream>
#include<iomanip>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, ("portuguese"));
	char Reply;
	double Number;
	bool MaiorQue100;
		do
		{
            std::cout << "Digite um número: ";
            std::cin >> Number;
            std::cout << "True = 1 e False = 0" << "\n";
            MaiorQue100 = (Number > 100);
            std::cout << "O Resultado lógico que verifica se o némero digitado é maior que 100 é: " << MaiorQue100	<< std::endl;
			std::cout << "\n Deseja calcular comparar outros valores? (S) ou (N): ";
			std::cin >> Reply;
		} while (Reply == 'S' || Reply == 's');
	std::cout << "\n" << "Saindo do programa... " << std::endl;
	system("pause");
		return 0;
}
*/
//    ****************************************************** 
/*
#include <iostream>
#include <iomanip> //necessário p/ uso do set precision

int main()
{
	setlocale(LC_ALL, "portuguese");
	float N1, N2, N3, Media = 0.0;
	char Result;
	do  // Cria loop até que Result seja S, para sair do loop
	{
		std::cout<<std::endl;
        std::cout << "Digite o primeiro número: ";
		std::cin >> N1;
		std::cout << "Digite o segundo número: ";
		std::cin >> N2;
		std::cout << "Digite o terceiro número: ";
		std::cin >> N3;
        std::cout<<std::endl;
		Media = (N1 + N2 + N3) / 3;
		//std::cout << "Números digitados: " << N1 << ", " << N2 << " e " << N3 << "\n";
		std::cout << "A média dos números ( " << N1 << ", " << N2 << " e " << N3 <<" ) é " << std::fixed << std::setprecision(2) << Media << "\n";
		std::cout << "\n" <<"Deseja calcular outra média aritmética? (S) ou (N): ";
		std::cin >> Result;
	} while (Result == 'S' || Result == 's'); //Sai do loop apenas se o || for false, ou seja se Result for != de S/s. Lembrando que || só será false, se //todas as sentenças forem false.
        std::cout << "\n" << "Saindo do programa..."<< std::endl;
        system("Pause");
        return 0;
}	
*/
//    ************************
/*
#include <iostream>
int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media = 0.0;
	std::cout << "Digite o 1 numero: ";
	std::cin >> Num1;
	std::cout << "Digite o 2° número: ";
	std::cin >> Num2;
	std::cout << "Digite o 3° número: ";
	std::cin >> Num3;
	Media = (Num1 + Num2 + Num3) / 3;
	std::cout << "Numeros digitados: " << Num1 << ", " << Num2 << " e " << Num3 << "." << "\n";
	std::cout << "Média dos números: " << Media << "\n";
	system("pause");
	return 0;
}
*/
//    *******************
// #include <iostream> 
// int main()
// {
// 	int Numero;
// 	char Caractere = 'A';
//         Numero = Caractere;
//         std::cout << "Valor Numero: " << Numero; 
//         system("PAUSE");
//         return 0;
// }
//    *********************
// #include <iostream>
// #include <locale.h>
// #include <tchar.h> // Necessário para _T()
// int main() {
//   // Define a localidade para português
//   if (_tsetlocale(LC_ALL, _T("Portuguese")) != NULL) {
//     std::wcout << L"Localidade definida para português." << std::endl;
//   } else {
//     std::wcerr << L"Erro ao definir a localidade para português." << std::endl;
//   }
//   // Agora você pode usar caracteres acentuados em suas strings
//   std::wcout << L"Olá, mundo com acentos!" << std::endl;
//   std::wcout << L"Acento agudo: á, é, í, ó, ú" << std::endl;
//   std::wcout << L"Acento grave: à, è, ì, ò, ù" << std::endl;
//   std::wcout << L"Acento circumflexo: â, ê, î, ô, û" << std::endl;
//   std::wcout << L"Til: ã, õ" << std::endl;
//   std::wcout << L"Trema: ä, ë, ï, ö, ü" << std::endl;
//   std::wcout << L"Ç" << std::endl;
//   return 0;
// }
//    *******************
//     01) Desenvolva um programa q escreve na tela a frase Vou aprender a programar na
// Linguagem C
// #include<iostream>
// #include<stdlib.h>
//    int main() {
// 	system("color 47");
//     std::cout<<std::endl;
//     std::cout << "Vou aprender a programar na Linguagem C"<<std::endl;
//     std::cout<<std::endl;
//     system("pause");
//     return 0;
// }
// */
// Obs: a) Use primeiramente comando std::endl para quebrar linha/pular uma linha.
// b) Depois substitua o comando std::endl; pelo caractere de escape nova linha \n New Line
/*
//    ****************
// 02) Altere o programa do exercício 01 para que cada palavra da frase Vou aprender a
// programar na Linguagem C++ apareca em linhas diferentes.
#include<iostream>
#include<stdlib.h>
#include<iomanip> 
    int main()
    {
       std::cout<<std::endl;
       std::cout<<std::setw(15)<<"Eu\n"<<std::setw(19)<<"vou\n"<<std::setw(25)<<"aprender\n"<<std::setw(27)<<"a\n";
       std::cout<<std::setw(31)<<"programar\n"<<std::setw(32)<<"na\n"<<std::setw(35)<<"linguagem\n"<<std::setw(37)<<"C++\n";
       std::cout<<std::setw(32)<<"na\n"<<std::setw(30)<<"Tecnisign\n"<<std::setw(25)<<"e\n"<<std::setw(22)<<"me\n";
       std::cout<<std::setw(20)<<"tornar\n"<<std::setw(15)<<"um\n"<<"programador\n"<<std::setw(13)<<std::endl;;

        system("pause");
        return 0;
    }
//    ************* 
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
//    **********************
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
//    ****************** 
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
//    *********************
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
//    *************************
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

//    **********************
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
//    ***************************
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
//    *************************
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

 //    **************************
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
 //    ***************************************** 
        /* Em C++, int argc, char** argv são parâmetros     opcionais da função main, que permite que o programa receba argumentos passados na linha de comando quando é executado. argc é um inteiro que indica o número de argumentos, enquanto argv é um array de strings (ponteiros para strings, daí o **), onde cada string representa um argumento individual. 
*/
//    ********************************** 
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
//    *********************

                        //>>>>>>>>>>>>>>>>>>>esse programa deu erro<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
           
                        // #include <iostream>
                        // #include <string>
                        // int main(int argc, char** argv) 
                        // {
                        //     while (true) 
                        //     int myInt = -10;
                        //     std::cout<<"Digite um numero: ";
                        //     std::cin>> myInt;
     
                        //     if (myInt==123) 
                        //     break;
    
                        //                                 if (x > 0)
                        //                                 { std::cout<<"X é posistivo!\n"; };
                        //                                 if (myInt > 0)
                        //                                 {  std::cout<<"myInt eh positivo!\n";   };
                        //                                   else if (myInt < 0)
                        //                                   {  std::cout<<"myInt eh negativo\n";     };
                        //             else { std::cout<<"myInt eh zero!\n";  };
                        //     ;
                        //     system("pause");
                        //     return 0;
                        // }
                         //>>>>>>>>>>>>esse programa deu erro<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                        // ex.2_ Crie um programa que: peça ao utilizador dois números inteiros, em seguida, divida um pelo outro normalmente e mostre o resultado. Use um cast para converter um dos números para float, antes da divisão e mostre o novo resultado.  
                        /*#include <iostream>
                        #include <iomanip>
                        #include<locale.h> 
                        int main ()
                         {
                             setlocale(LC_ALL, "portuguese");
                             int n1, n2;
                             int result = n1+n2;
                             float r=(float)n1-n2;
                             char Reply;
                             do
                             {
                                std::cout << "Digite o 1° número: \n";
                                std::cin >> n1;
                                std::cout << "Digite o 2° número: \n";
                                std::cin >> n2;

                                std::cout << "Resultado int= " << result << std::endl;
                                std::cout << "Resultado float= " << r << std::endl;
        
                                std::cout << "\n" <<"Deseja verificar outra tecla? (S) ou (N): ";
                                std::cin >> Reply;

                             } while (Reply == 'S' || Reply == 's');
                               std::cout << "\n" << "Saindo do programa..." << std::endl;
                               system("Pause");
                            
                               return 0;
                         }
                        */
/*
//Program to Find the ASCII value of a character                //Compiled successfully!
#include <iostream>
#include <iomanip>
using namespace std;
// Em C++, (int)c significa a conversão explícita (cast) do valor da variável c para o tipo inteiro (int). Isso força o valor de c a ser tratado como um número inteiro, mesmo que ele originalmente tenha outro tipo. 
// Explicação detalhada:
// int: Em C++, int é um tipo de dado que representa números inteiros, ou seja, números sem casas decimais.
// c: Representa uma variável de qualquer tipo.
// (int): Esta é a notação para "casting" ou conversão de tipo. O termo entre parênteses indica o tipo para o qual você deseja converter o valor.
int main()
{
    setlocale (LC_ALL, "portuguese"); 
    char a, Reply;
      do
      {
        cout << "===== Program to Find the ASCII value of a character ===== \n\n";
        cout << "Enter a character : ";
        cin >> a;
        cout << "\nThe ASCII value of the entered character is : " << (int)a<< "\n\n";
        cout << "\n" <<"Would you like to check another value? (S) ou (N): "<<"\n";
	 	cin >> Reply;
        cout<<endl;
      } while (Reply == 'S' || Reply == 's');
         cout << "\n" << "End check..."<< endl;
         system("Pause");
    return 0;
}       
        */ 
    // {   int a;
    //     float b;
    //     do
    //     {
    //         std::cout << "Digite um número décimal: "<<std::endl;
    //         std::cin >> b;
    //         std::cout<<std::endl;
    //         float resul_a = static_cast<float>(a);
    //         int resul_b = static_cast<int>(b);    
    //         float resul_c = a + b;// Operação sem conversão    
    //         int resul_d = static_cast<int>(resul_a) + b;//Conversão explícita
    //         std::cout<<"O valor da váriavel 'a' do tip inteiro é: "<<a<<"\n";
    //         std::cout<<"O valor da váriavel 'b' do tip float é: "<<b<<"\n";
    //         std::cout<<"O valor de 'a' convertido para float é: "<<resul_a<<"\n";
    //         std::cout<<"O valor de 'b' convertido para inteiro é: "<<resul_b<<"\n";
    //         std::cout<<"A soma das váriaveis 'a' e 'b' é: "<<resul_c<<"\n";
    //         std::cout<<"A soma das váriaveis 'a' e 'b' convertida para inteiro é: "<<resul_d<<"\n";
    //         std::cout << "\n" <<"Deseja verificar outras números? (S) ou (N): "<<"\n";
	// 	    std::cin >> Reply;
    //         std::cout<<std::endl;        
    //     } while (Reply == 'S' || Reply == 's');
    //     std::cout << "\n" << "Saindo do programa..."<< std::endl;
    //     system("Pause");
    //     return 0;
    // }

//    ***********************
    // int main ()
    // setlocale(LC_ALL, "portuguese");
    // int vl1, vl2;
    // char Result; //Reply
    // do
    // {
    //     std::cout << "Insira o 1° valor: ";
    //     std::cin >> vl1;
    //     std::cout << "Insira o 2° valor: ";
    //     std::cin >> vl2;
    //     std::cout << vl1 << " > " << vl2 <<" : " << (vl1>vl2) <<std::endl; 
    //     std::cout << vl1 << " < " << vl2 <<" : " << (vl1<vl2) <<std::endl;
    //     std::cout << vl1 << " >= " << vl2 <<" : " << (vl1>=vl2) <<std::endl;
    //     std::cout << vl1 << " <= " << vl2 <<" : " << (vl1<=vl2) <<std::endl;
    //     std::cout << vl1 << " == " << vl2 <<" : " << (vl1==vl2) <<std::endl;
    //     std::cout << vl1 << " != " << vl2 <<" : " << (vl1!=vl2) <<std::endl;
    //     std::cout << "\n" <<"Deseja verificar outras números? (S) ou (N): ";
	// 	std::cin >> Result;
    // } while (Result == 'S' || Result == 's');
    //     std::cout << "\n" << "Saindo do programa..."<< std::endl;
    //     system("Pause");
    //     return 0;
        //                     }
    //..................................
//     #include <iostream>

// int main() {
//   float numFloat;
//   int i = static_cast<int>(numFloat);                                                             //  (   ERRADO   )
  //         std::cout << "===== Program to convert data: EXPLICIT CONVERSION ===== \n\n";

//         std::cout << "Enter the decimal number you want to convert: ";
//         std::cin >> numFloat;

//         std::cout << "\nThe original number is: " << numFloat << std::endl;
//         std::cout << "\nThe decimal number converted to integer is: " << (int)i << std::endl;     
//   return 0;
// }
  //  ...............................
//     CONVENÇÃO EXPLICITA - static_cast.
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main ()
// {                                                                                        //  (   ERRADO   )
//     int x=16, y=3;
//     int result= x/y;
//     cout<<"Resultado int= "<<result<<endl; 
//     float r=(float)x/y;
//     cout<<"Resultado float= "<<r<<endl;
//C++ static_cast
// Em C++, (int)c significa a conversão explícita (cast) do valor da variável c para o tipo inteiro (int).
// Isso força o valor de c a ser tratado como um número inteiro, mesmo que ele originalmente tenha outro tipo. 
// Explicação detalhada:
// int: Em C++, int é um tipo de dado que representa números inteiros, ou seja, números sem casas decimais.
// c: Representa uma variável de qualquer tipo.
// (int): Esta é a notação para "casting" ou conversão de tipo. O termo entre parênteses indica o tipo para o qual você deseja converter o valor.
//     char c='a';
//     int i=static_cast<int>(c);
//     cout<<"i = "<<i<<endl;
//     return 0;
// }
//    *****************
/*
//Em C++, "cast" é traduzido para conversão de tipo ou conversão explícita. Refere-se à alteração do tipo de um objeto ou valor de um tipo para outro..
//Exercício de C++:Faça um programa que pede 2 valores, em seguida exiba operações de comparação.
#include <iostream>
#include <iomanip>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    int vl1, vl2;
    char Result; //Reply
    do
    {
        std::cout << "Insira o 1° valor: ";                                                     ( RESOLVIDO )
        std::cin >> vl1;
        std::cout << "Insira o 2° valor: ";
        std::cin >> vl2;
        std::cout << vl1 << " > " << vl2 <<" : " << (vl1>vl2) <<std::endl; 
        std::cout << vl1 << " < " << vl2 <<" : " << (vl1<vl2) <<std::endl;
        std::cout << vl1 << " >= " << vl2 <<" : " << (vl1>=vl2) <<std::endl;
        std::cout << vl1 << " <= " << vl2 <<" : " << (vl1<=vl2) <<std::endl;
        std::cout << vl1 << " == " << vl2 <<" : " << (vl1==vl2) <<std::endl;
        std::cout << vl1 << " != " << vl2 <<" : " << (vl1!=vl2) <<std::endl;
        std::cout << "\n" <<"Deseja verificar outras números? (S) ou (N): ";
		std::cin >> Result;        
    } while (Result == 'S' || Result == 's');

        std::cout << "\n" << "Saindo do programa..."<< std::endl;
        system("Pause");
        return 0;
        }
        */
       //    ******************************************
/*
 #include <iostream>
using namespace std;
int main () 
{
	cout<<"Informe um numero: "<<endl;
	int num1 = 0;
		cout<<"Informe outro numero: "<<endl;                                                         ( RESOLVIDO )
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
                        //Compiled successfully!
#include <iostream>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br.
int main()                               //Compiled successfully! 
{
    setlocale (LC_ALL, "portuguese");
    const float phi = 1.6180;
    const int integerPhi = (int)phi; //conversão no estilo C 
    std::cout << "O valor de Phi convertido para inteiro é: "  << integerPhi << std::endl;
}
*/
/*
//Atividade 3.4
//Escreva um programa em C que: a) Declare duas variáveis: • Uma do tipo int, chamada a e atribua um valor inteiro a ela. • Outra do tipo float, chamada b, e atribua um valor decimal a ela. b) Converta (cast) a variável a para float e exiba o resultado. c) Converta (cast) a variável b para int e exiba o resultado. d) Faça uma operação matemática envolvendo as duas variáveis sem conversão e outra com conversão explícita, comparando os resultados.
#include <iostream>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br.
int main()
{
    setlocale (LC_ALL, "portuguese");
    //Declaração das variáveis:
    int a = 4;
    float b = 5.8;
    // Conversão no estilo C
    float a_float = (float)a;
    int b_int = (int)b;
    //Operações
    float result1 = a + b;
    int result2 = a + (int)b;
    std::cout << "\n a) O valor da 1° variável 'a' do tipo integer é: " << a << "\n e o valor da 2° variável 'b' do tipo float é: " << b;
    std::cout << "\n\n b) O valor da variável 'a' no tipo float é: " << a_float << "\n e o valor da variável 'b' no tipo inteiro é: " << b_int << std::endl;
    std::cout << "\n c) A operação sem conversão é: " << "a + b = " << result1 << std::endl;
    std::cout << " e a operação com conversão: " << "a + (int)b = " << result2 << std::endl;
    std::cout << std::endl;
    return 0;
}
*/
/*    ***************************************************
                    //Compiled successfully!
  
//Programa em C++ que permite ao usuário escolher um operador e dois valores, realizando a operação correspondente
#include <iostream>
#include <string>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br.

int main()                                                      //Compiled successfully!
{
    setlocale (LC_ALL, "portuguese");
    char operador, reply;
    double num1, num2, resultado;
    do
    {
      std::cout << "\nDigite o 1° número: ";
      std::cin >> num1;    
      std::cout << "\nDigite o operador (+, -, *, /): ";
      std::cin >> operador;
      std::cout << "\nDigite o 2° número: ";
      std::cin >> num2;
        
        switch (operador)
        {
            case '+': 
                resultado = num1 + num2;
                std::cout << "\nResultado: " << resultado << std::endl;
                break;
            case '-':
                resultado = num1 - num2;
                std::cout << "\nResultado: " << resultado << std::endl;
                break;
            case '*':
                resultado = num1 * num2;
                std::cout << "\nResultado: " << resultado << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                    std::cout << "\nResultado: " << resultado << std::endl;
                } else {
                    std::cout << "\nErro: Divisão por zero!" << std::endl;
               }
                break;
            default:
                std::cout << "\nOperador inválido!" << std::endl;
        }
        std::cout<< "Deseja verificar outras números? (S) ou (N): ";
      std::cin >> reply;
  } while (reply == 'S' || reply == 's');

      std::cout << "\n" << "Saindo do programa..."<< std::endl;
      system("Pause");
      return 0;
}
/*
     //******************************************************
#include <iostream>
using namespace std;
int main ()                 //Compiled successfully
{
    int n = 4;
    int n1 = 5;
    int n2 = 2;
    float x = 1.2;
    int xInt=(int)x; //conversão explicita
    cout<< " x = " << x <<endl;
    cout<< "xInt = "<< xInt<<endl;
    float nF = n; //conversão implicita
    cout<< " n = " << x <<endl;
    cout<< "nF = "<< nF <<endl;
    int result= n1/n2;
    float r = n1/n2;
    cout<< " Resultado  int = " << result <<endl;
    cout<< "Resultado float= "<< r <<endl;    
    return 0;
}*/
//***************************************

/*Program to Find the ASCII value of a character. Programa que solicite ao utilizador que digite um ùnico caractere, depois,converta esse caractere (char) para seu valor numérico na tela ASCII e exibe o valor inteiro correspondente ao caractere digitado*

Em C++, (int)c significa a conversão explícita (cast) do valor da variável c para o tipo inteiro (int). Isso força o valor de c a ser tratado como um número inteiro, mesmo que ele originalmente tenha outro tipo. Explicação detalhada: int: Em C++, int é um tipo de dado que representa números inteiros, ou seja, números sem casas decimais. c: Representa uma variável de qualquer tipo. (int): Esta é a notação para "casting" ou conversão de tipo. O termo entre parênteses indica o tipo para o qual você deseja converter o valor.
#include <iostream>
    #include <iomanip>
    using namespace std;                            //Compiled successifully
    int main ()
{
    setlocale (LC_ALL, "portuguese"); 
    char a, Reply;
      do
      {
        cout << "===== Program to Find the ASCII value of a character ===== \n\n";
        cout << "Enter a character : ";
        cin >> a;
        cout << "\nThe ASCII value of the entered character is : " << (int)a<< "\n\n";
        cout << "\n" <<"Would you like to check another value? (S) ou (N): "<<"\n";
	 	cin >> Reply;
        cout<<endl;
      } while (Reply == 'S' || Reply == 's');
         cout << "\n" << "End check..."<< endl;
         system("Pause");
    return 0;
}    */

/*#include <iomanip> 
#include <iostream>
using namespace std;                            //Compiled successifully
int main ()
 {                                           
    double nD;
    char nC;
    cout << "\n Digite um caractere decimal: ";
    cin >> nD;
    //converter decimal para inteiro
    int nDInt = static_cast<int>(nD); 
        cout<<"\n O número decimal digitado é: "<<nD;
    cout<<"\n Seu valor convertido para inteiro é: "<<nDInt<<"\n";
    cout << "\n Digite um caractere do tipo char: ";
    cin >> nC;
    //coverter para ASCII
    const int nAsscii =(int)nAsscii;  
    cout<< "\n O valor ASCII do caractere inserido é: "<<(int)nC<<"\n";
    system("Pause");
    return 0;
} 
*/
// #include <iostream>//1. programa ler/informa número se é >= 0
// #include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br
// int main() {                               setlocale (LC_ALL, "portuguese");
//     int num;
//     std::cout << "\nDigite um número: ";
//     std::cin >> num;
//     if (num >= 0) {
//         std::cout << "\nO número é maior ou igual a zero." << std::endl;
//     } else {
//         std::cout << "\nO número é menor que zero." << std::endl;        
//     }                                               std::cout<<std::endl;
//     return 0;
// }
/****************************************************
/*
#include <iostream>//1. programa ler/informa se maior de idade.
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br
int main() {                               setlocale (LC_ALL, "portuguese");
    int age;
    std::cout << "\nDigite sua idade: ";
    std::cin >> age;

    if (age >=18) {
        std::cout << "\nVocê é Maior de Idade!" << std::endl;
    } else {
        std::cout << "\nVocê é Menor de Idade!" << std::endl;        
    }                                               std::cout<<std::endl;

    return 0;
}
*/
/*
#include <iostream>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br
using namespace std;
int main() {             setlocale (LC_ALL, "portuguese");
char dia;     
            cout<<"\nDigite o dia da semana pretendido: ";
            cin>>dia;
switch (dia)
{
    case 'Sab': case '7': case 'D': case '1':
        cout << "\nO alguer é: 550.00 €\n" << endl;
        break;
    case 'Seg': case '2':
        cout << "\nO alguer é de: 400.00 €\n" << endl;
        break;
    case 'Ter': case '3': case 'Qua':
    case '4'  : case 'Qui': case '5':
        cout << "\nO alguer é: 550.00 €\n" << endl;
        break;
    case 'Sex': case '6':
        cout << "\nO alguer é: 600.00 €\n" << endl;
        break;
    default:
        cout << "\nOpção Inválida!" << endl;
    }        
    return 0;
}
*/

/*
#include <iostream>
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br
using namespace std;
int main() {             setlocale (LC_ALL, "portuguese");
char dia;     
    cout<<"\nDigite o número correspondente ao dia d a semana desejasdo 1-Dom, 2-Seg, 3-Ter, 4-Qua, 5-Qui, 6-Sex, 7-Sáb: ";
    cin>>dia;
switch (dia)
{
    case '7': case '1':
        cout <<"=== Final de semana! ===";
        break;
    case '2': case '3': case '4': case '5': case '6':
        cout << "\n=== Dia útil! ===\n" << endl;
        break;
    default:
        cout << "\n=== Inválido! ===\n" << endl;
    }        
    return 0;
}
*/
/*
#include <iostream>//números 1/100 crescente
using namespace std;

int main() {            
    for (int i = 1; i <= 100; i++)
    {
        cout << i << ", ";
    }
    cout << endl;        
    return 0;
}
*/
/*
//M5-ex3
_a) Programa números inteiros 1/100 ordem crescente
#include <iostream>
using namespace std;

int main() {
    int j = 1;
    
    do {
        cout << j << " ";
        j++;
    } while (j <= 100);
    cout<<endl;        
    return 0;
}
//b) Programa números inteiros 1/100 ordem Decrescente
#include <iostream>
using namespace std;

int main() {
    int k = 100;
    
    do {
        cout << k << " ";
        k--;
    } while (k >= 1);
    cout<<endl;        
    return 0;
}
//c) Programa números inteiros 3/100, de 3 em 3
#include <iostream>
using namespace std;

int main() {
    int L = 0;
    
    do {
        cout << L << " ";
        L +=3;
    } while (L <= 100);
    cout<<endl;        
    return 0;
}
*/
/*
//M5 Ex4 Program p/notas(0/20)d N alunos e printa média
#include <iostream>//aritmética e média das notas >, < e >= 10.
using namespace std;
int main() {
    float nota = 0, soma = 0, somaInf10 = 0, somaSup10 = 0;
    float media, medInf, medSup;
    int i = 0, nAlunos=0, countInf10=0, countSup10=0;

    cout << "\nDigite o número de alunos? ";
    cin >> nAlunos;
    cout<<endl;

    while (i < nAlunos) {
        cout <<"Intriduza a nota do " << i + 1 << "° aluno: ";
        cin >> nota;

        // Validação da nota
        while (nota < 0 || nota > 20) {
            cout << "\nNota inválida! Digite novamente: ";
            cin >> nota;
        }
    soma += nota;
        
    if (nota < 10) {
        somaInf10 += nota;
        countInf10++;
    } else ( nota >= 10);
        somaSup10 += nota;
        countSup10++;    
    i++;
  }
    media = soma / nAlunos;
    medInf = somaInf10 / countInf10;
    medSup = somaSup10 / countSup10;
    cout << "\nA média aritmética final é: " << media << endl;
    cout<<"A média das notas inferiores a 10 é: " << medInf<<endl;
    cout<<"A média das notas Superiores a 10 é: " << medSup<<endl;
    cout<<endl;

    return 0;
}
*/
/*
//M5-EX5 - apresente a percentagem de números pares/ímpares
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int n, valor;
    float percPar, percImpar, par = 0, impar = 0;

    cout << "\nQuantos valores vai ler (n)?  ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "Introduza o "<< i <<"° valor positivo: ";
        cin >> valor;
        
        if (valor < 0) {
           cout << "\nSão permitidos, somente números inteiros positivos! Tente novamente." << endl;
           i--;
           continue;
        }

        if (valor % 2 == 0)
            par++;
        else
            impar++;
    }

    percPar = (par * 100 ) / n;
    percImpar = (par * 100 ) / n;

    cout << "\nA percentagem dos números pares inseridos  é de: " << fixed <<setprecision(2) << percPar <<endl;
    cout << "A percentagem dos números impares inseridos é de: " << fixed <<setprecision(2) << percImpar <<endl;
       cout << endl;
    
    return 0;
}
*/

/*
#include <iostream>             //M5-EX6 - apresente a os números   
#include<iomanip>               //múltiplos de uma valor
using namespace std;
int main() {
int n, mult;
char reply;
do {
    cout << "\nIntruduza valor inteiro positivo (N): ";
    cin >> n;

    while (n < 0) {             //Validação do número
    cout << "\nSão permitidos, somente números positivos! \nPor favor ente novamente: ";
        cin >> n;
    }            
        cout << "\nIntroduza o valor do múltiplo: ";
        cin >> mult;
    int i = 1;
    do {
        if (i % mult == 0)
        cout << i << " ";
        i++;            
    } while (i <= n);
    cout << "\n" <<"\nGostaria de verificar outro valor? (S) ou (N): "; 
	cin >> reply;        
} while (reply == 'S' || reply == 's');
    cout << "\n" << "Fim da verificação..."<< endl;
    system("Pause");

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

void minhaFuncao() {
    cout << "\nAcabei de ser executado!";
}
int main () {
    minhaFuncao();

    return 0;
}
*/
/*
//6-EX5-ResolveProblema: (valor1 + valor2 * valor3) / valor1
#include <iostream>         
using namespace std;        

float resolveProblema(float valor1, float valor2, float valor3) {
float result = (valor1 + valor2 * valor3) / valor1;
       return result;
}
int main () {
    float v1, v2, v3;
    char reply;
    do {
        cout << "\nIntruduza o 1° valor: ";
        cin >> v1;

        while (v1 == 0) {
            cout << "Erro: Divisáo por zero. Tente novamente! " <<"\n" ;
            cout << "\nIntruduza o 1° valor: ";
        cin >> v1;
        } 
        cout << "Inroduza o 2° valor: ";
        cin >> v2;
        cout << "Inroduza o 3° valor: ";
        cin >> v3;
        
        float result = resolveProblema(v1, v2, v3);
        cout << "Resultado do problema é: " << result << endl;
        cout <<"\nGostaria de verificar outro valor? (S) ou (N): "; 
	    cin >> reply;        
    
    } while (reply == 'S' || reply == 's');
        cout << "\n" << "Fim da verificação..."<< endl;
        system("Pause");

    return 0;
}      
*/
/*
M7-ex3
#include <iostream>          //6-Ex6 Função Calcula área         
using namespace std;

// Declaração da constante PI
   const float PI = 3.1416;
// Função: calcula a área do círculo
   float calcularArea(float raio) {
       return PI * raio * raio;      
}
// Função: calcula a área do retângulo
   float calcularArea(float base, float altura) {
       return base * altura;  
}
//  Função: calcula a área do quadrado
    float calcularArea(int lado) {
       return lado * lado;  
}
    int main () {
        float raio, base, altura;
        int lado;

// Cálculo da área do círculo
   cout << "\nIntruduza o raio do círculo: ";
   cin >> raio;
   cout << "A área do círculo é: "<< calcularArea(raio)<< endl;

// Cálculo da área do retângulo
   cout << "\nIntroduza a base do retângulo: ";
   cin >> base;
   cout << "Introduza a altura do retângulo: ";
   cin >> altura;
   cout << "A área do retângulo é: " <<calcularArea(base, altura) << endl;

// Cálculo da área do quadrado
   cout << "\nIntroduza o lado do quadrado: ";
   cin >> lado;
   cout << "A área do quadrado é: " << calcularArea(lado) << endl;
   cout << endl;

   return 0;
}*/
/*
 //M7-ex3
#include <iostream>          //M7-ex3
using namespace std;
int main() {
// a) Declarar e inicializa a matriz
    int matriz[3][3] = {    
        {12, 18,  9},
        {15, 11, 16},
        { 9,  7,  8}
    };
// b) Imprime os valores iniciais
    cout << "\nOs valores atuais dos arrays são: \n";
    for (int i = 0; i < 3; ++i) {       //Itera sobre as linhas
        for (int j = 0; j < 3; ++j) {   
            cout << matriz[i][j] << "  ";
        }
        cout << endl;        
    }
// c) Solicitação de novos valores    
    cout << "\nDigite novos valores para o array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
// Impressão os novos valores
    cout << "\nArray com novos valores:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
*/

/*
/M7-ex4
using namespace std;
#include <iostream>          //M7-ex4
using namespace std;
int main() {
// a) Declarar e inicializa a matriz
    int matriz[2][3] = {    
        {101, 102, 103},
        {104, 105, 106},        
    };
// b) Imprime os valores iniciais
    cout << "\nOs valores atuais dos arrays são: \n";
    for (int i = 0; i < 2; ++i) {       //Itera sobre as linhas
        for (int j = 0; j <= 2; ++j) {   
            cout << matriz[i][j] << "  ";
        }
        cout << endl;        
    }
// c) Solicitação de novos valores    
    cout << "\nDigite novos valores para o array:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j <= 2; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
// Impressão os novos valores
    cout << "\nArray com novos valores:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j <= 2; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
*/

/*
//M7-ex5
#include <iostream>          //M7-ex5
using namespace std;
int main() {
    float temperatura[6];
    float maxTemp, minTemp, amplitude;

//  Solicita valores iniciais
    cout << "\nIntroduza 6 valores de temperatura:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Temperatura " << i +1 << ": ";
        cin >> temperatura[i];
    }
    maxTemp = temperatura[0];
    minTemp = temperatura[0];

//  Definição das temperaturas: máxima e minima 
    for (int i = 1; i < 6; i++) {
        if (temperatura[i] > maxTemp) maxTemp = temperatura[i];
        if (temperatura[i] < minTemp) minTemp = temperatura[i];
    }
    amplitude = maxTemp - minTemp;
// Print
    cout << "\nTemperatura mais elevada: " << maxTemp << "°C\n";
    cout << "Temperatura mais baixa: " << minTemp << "°\nC";
    cout << "Temperatura mais térmica: " << amplitude << "°C\n";
    cout << endl;
    return 0;
}
*/
/*
#include<iostream>             //M7-ex6
using namespace std;

int main() {
//  Declara/inicializa a matriz de custos
    int matriz[3][3] = { {30, 120, 170}, {100, 180, 70}, {350, 100, 140} };
//  Declara/inicializa a matriz de quantidades de carga
    int cargas[3][3] = { {4, 0, 6}, {0, 6, 0}, {0, 3, 5} };
// Declara/inicializa a 0 para armazenar o custo total
    int custTotal = 0;
// Declara Array para armazenar os custospor fábrica
    int custosFabricas[3] = {0, 0, 0}; // Array para armazenar custos por fábrica
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            custTotal += matriz[i][j] * cargas[i][j];
            custosFabricas[i] += matriz[i][j] * cargas[i][j]; // Acumula custo por fábrica
        }
    }
    cout << endl;
    // Ciclo 'for' externo p/ i de 0 a 2 e interno p/ i de 0 a 2
    for (int i = 0; i < 3; i++) {
        cout << "Custo da Fábrica " << i + 1 << " é de: " << custosFabricas[i] << endl;
    }
    // Exibe resultado
cout << "\nO custo total é: " << custTotal << endl;
cout << endl;
    return 0;
}
*/

/*
MODULO 6 
#include <iostream>
using namespace std;

void myFuncao(string nome, int idade) {
    cout << "  → Nome: " << nome << "  → Idade: " << idade << endl;
}

int soma (int n1, int n2) {
    int res = n1 + n2;
    return res;
}
int main () {
    myFuncao("João Peido", 17);
    myFuncao("Rita Maguinha", 16);
    myFuncao("Zumba Buldogues", 8);    
    
    int resultado = soma(8,9);
    
    cout << "\nResultado 1: " << resultado<<endl;
    resultado = soma(5,5);
    cout << "Resultado 2: " << resultado<<endl;
    return 0;
}
*/

/*
//M6-ex2
// Progrmam que produz uma saída usando função tipo void, criando linhas com asteriscos
#include <iostream>
using namespace std;
void imprimeAsterisco() {
    for (int i = 0; i < 17; i++) {
        cout << "*";
    }
    cout <<endl;
}
int main () {
    imprimeAsterisco();
    cout << " Programação C++" << endl;
    imprimeAsterisco();
    cout << " Funções" << endl;
    return 0;
}
*/

/*
//M6- calcula o fatorial de um número
#include<iostream>
using namespace std;
int fatorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main( ){
    int numero;
cout << "\nDigite um número: ";
cin >> numero;

cout<< "Fatorial de " << numero << " é " << fatorial(numero) << endl;

return 0;
}
*/

/*
//M6- calcula o fatorial de um número
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br
#include<iomanip>
#include<iostream>
using namespace std;   
    
    int main() {
        setlocale(LC_ALL, "portuguese");
//Declara o array
    string carros[3];
    //Leitura de valores do array utilizando o ciclo FOR
        for (int i = 0; i < 3; i++) {
            cout << "Elemento " << i << "?";
            cin >> carros[i];            
        }

       // Escrita de valores do array utilizando o ciclo for 
       for (int i = 0; i<3; i++) { 
        
            cout << carros[i]<<endl;
        }
    
    return 0;
}

*/
/*
//M6- calcula o fatorial de um número
#include <tchar.h> // Biblioteca C++ p/ acentuação Pt-Br
//#include<iomanip>
#include<iostream>
using namespace std;   
    
    int main() {
        setlocale(LC_ALL, "portuguese");
//Declara o array
    string carros[3];
    //Leitura de valores do array utilizando o ciclo FOR
        for (int i = 0; i < 3; i++) {
            cout << "\nDigite a marca do " << i+1 << "° carro: " << i+1 << "?";
            cin >> carros[i];            
        }

       // Escrita de valores do array utilizando o ciclo for 
       for (int i = 0; i<3; i++) { 
        
            cout << "\nA marca do " << i+1 << "° carro é "<< carros[i]<<endl;
        }
        
    return 0;
}
*/

/*//Gerando números aleatórios com rand() e for

#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
#include<ctime>
using namespace std;

int main() {
            setlocale(LC_ALL, "portuguese");
    srand((unsigned)time(0));
    int randomNumber;
    for (int index = 0; index < 10; index++) {
        randomNumber = (rand() % 35) + 1;        
    cout << randomNumber <<endl;
        

}
}
*/
/*
//Como validar a entrada: impedindo que o usuário digite uma letra no terminal!

#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
#include<limits>
using namespace std;

const auto maxIgnorado = std::numeric_limits<std::streamsize>::max();
//std::streamize é o número de caracteres transferidos em uma operação de E/S
//std::numeric_limits Retorna o valor finito máximo representável pelo tipo numérico
int main() {
            setlocale(LC_ALL, "portuguese");
    int num = 0;
    bool feito = false;
    
    std::cout << "\n\n";
    std::cout << "\nInsira somente digitos inteiros C++";
    std::cout << "\n\n";

    while (!feito) {
        std::cout << "\n";
        std::cout << "\tEntre com um inteiro: ";
        //Quando  std::cin encontra uma entrada que não pode ler corretamente na váriavel especificada (como inserir um caractere em uma variável inteira), ele entra em estado de erro e deixa a entrada em seu buffer. Aqui temos num do tipo inteiro int num = 0 if (std::cin >> num) irá retornar verdadeiro se for digitado um número inteiro e falso caso cointrário

        if (std::cin >> num) {
            //se entrou aqui é porque num é um inteiro
            std::cout << "\n";
            std::cout << "\nExcelente você entrou com: " << num;
            feito = true;
        }

        else {
            //se entrou aqui é porque num NÃO é um inteiro
            std::cout << "\n";
            std::cout << "\tEntrada invalida!\n";
            //é preciso liberar a memória(buffer) da entrada e isso é feito abaixo

            std::cin.clear();
            std::cin.ignore(MaxIgnorado; '\n'); 
               std::cout << "\n\n";
        }
    }
        std::cout << "\n\n";
        std::cout << "\nFim do Programa";
            std::cout << "\n\n";

}
*/
/*
//FUNÇÕES
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;

// O que a função vai retornar?
// Tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
    return Numero + NumeroASerSomado;
}
int main()
{
    int Numero, NumeroASerSomado;
    std:: cout << "\nDigite um número: ";
    std::cin >> Numero;
    std::cout << "Digite o número a ser somado: ";
    std::cin >> NumeroASerSomado;
    std::cout << "A soma desse número: [ " << Numero << " ] com o núrmero: [ " << NumeroASerSomado << " ] será: [ " << SomaAUmNumero(Numero, NumeroASerSomado) <<" ]\n";
    system("PAUSE");
    return 0;
}
*/
/*
//FUNÇÕES
#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>
using namespace std;

// O que a função vai retornar?
// Tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
    return Numero + NumeroASerSomado;
}

void Mensagem()
{
    std::cout<< "\nMensagem de Marte... Chegamos bem...\n";
}


int main()
{
    int Numero, NumeroASerSomado, RetornoDaFuncao;
    Mensagem();
    std:: cout << "\nDigite um número: ";
    std::cin >> Numero;
    std::cout << "Digite o número a ser somado: ";
    std::cin >> NumeroASerSomado;
    std::cout << "A soma desse número: [ " << Numero << " ] com o núrmero: [ " << NumeroASerSomado << " ] será: [ " << SomaAUmNumero(Numero, NumeroASerSomado) <<" ]\n";
    RetornoDaFuncao = SomaAUmNumero(200, -500);

    std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400));

    std::cout << "Soma de 200 com - 500: " << RetornoDaFuncao;
    std::cout << std::endl;
    system("PAUSE");
    return 0;
}
*/