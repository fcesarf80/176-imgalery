#include <iostream>     // Soma de 10 Númeos com Array  //
#include <string>

int main()
{	
	double Numeros[10];
    double Soma{0.0};
    for(int i = 0; i < 10; i++)
    {
        std::cout << "Digite o Número" << (i+1) << ": ";
        std::cin >> Numeros[i];
        Soma += Numeros[i]; //Soma = Soma + Numeros[i];
        system("CLS");
    }
	std::cout << "\nA Soma dos números é: " << Soma;
	system("PAUSE");
	return 0;
}

// #include<iostream>
// #include<string>
// #include<tchar.h>

// int main()
// {   
//     setlocale(LC_ALL, "portuguese");
//     float Notas[5]{1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
//     float Media, Soma{0.0};
//     std::string NomeAluno;

//     std::cout << "\nDigite o nome do Aluno: "; 
//     std::cin >> NomeAluno;

//     for(int i = 0; i <= 4; i++){
//         std::cout << "\nDigite a nota" << (i+1) << "°: ";
//         std::cin >> Notas[i];
//         Soma = Soma + Notas[i];
//         system("CLS");
//     }
   
//     Media = Soma/5;

//     std::cout << "\nA Media das notas do aluno: " << Media << "\n";
//     system("PAUSE");
//     return 0;
// }

/*
#include<iostream>
#include<string>
#include<tchar.h>
//Crie um programa que receba o nome e as notas do aluno, depois mostre a média destas notas
int main()
{   
    setlocale(LC_ALL, "portuguese");
    //Agora foi criada uma variável de nome Notas com 5         compartimentos indexados a partor do Zero [0] [1] [2] [3] [4] e acessíveis por um único nome Notas[Índice].
    //Devem ter todos os compartimentos o mesmo tipo de dados e por isso ela é considerada uma variável composta (vários locais de armazenamento) e homegênea por aceitar apenas um tipo de dado dentro de cada divisão/seção/compartimento.
    //Você já pode inicializar os valores na declaração
    //Na linguagem C precisa por = entre ]{ .
    //OBS.: Para indicar que os números são float, pois números
    //sem 'f' são considerados double e nesse caso, você estaria
    //colocando double dentro do float. Mas, lembre que float é menor
    //que double e com isso poderia haver perda de dados
    float Notas[5]{1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    //Importante inicializar variáveis contadoras e 
    //acumuladoras. Muito erros ocorrem por esse motivo!
    float Media, Soma{0.0};
    std::string NomeAluno;

    std::cout << "\nDigite o nome do Aluno: "; 
    std::cin >> NomeAluno;
    //Esta parte aqui está muito repetitiva, não pode ser melhorada?
    //...e se [índice] puder ser colocado como variável
    //ex.:[i]
    //esta variável começaria com 0 e iria até 4, usando o for:
    //Neste  for o i vai de Zero até 4. Percorre exatamente os índices
    //do vetor Notas
    for(int i = 0; i <= 4; i++) // ou i<5
    {
        std::cout << "\nDigite a nota" << (i+1) << "°: ";
        std::cin >> Notas[i];
        //Agora precisamos de uma variável que acumule a soma das notas
        Soma = Soma + Notas[i];
        system("CLS");
    }
    //Soma das notas dividido pelo número de notas!
    Media = Soma/5;
    std::cout << "\nA Media das notas do aluno: " << Media << "\n";
    system("PAUSE");
    return 0;
}*/
/*****************************************
/*
#include<iostream>
#include<string>
//Crie um programa que receba o nome e as notas do aluno, depois mostre a média destas notas
int main()
{
    float Nota1, Nota2, Nota3, Nota4, Nota5;
    float Media;
    std::string NomeCompleto;
    std::cout << "\nDigite o nome do Aluno: "; 
    std::getline(std::cin, NomeCompleto); 
    std::cout << "Digite a primeira nota: ";
    std::cin >> Nota1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> Nota2;
    std::cout << "Digite a terceira nota: ";
    std::cin >> Nota3;
    std::cout << "Digite a quarta nota: ";
    std::cin >> Nota4;
    std::cout << "Digite a quinta nota: ";
    std::cin >> Nota5;

    Media = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5) / 5;
    std::cout << "\nA Media das notas do aluno: " << NomeCompleto << " foi: " << Media << "\n";
    std::cout << std::endl;
    system("PAUSE");
    return 0;
}
*/