#pragma once
//Nas linguagens de programação C e C++, #pragma once é uma diretiva de pré-processador largamente adotada por alguns compiladores, como Microsoft Visual Studio. Esta diretiva é usada em headers files (arquivos com extensão ".h") e serve para fazer com que o arquivo atual seja incluido apenas uma vez durante o processo de compilação. Ou seja, que ele seja compilado apenas uma vez. Vantagens é que requer menos código, evita colisões de nomes, e em alguns casos até melhora o tempo de compilação. 
//*Entrada: dois números inteiros
//*Processamento: operações matemáticas: soma, subtração, multiplicação, divisão, potenciação e raiz quadrada.
/*Saida: Exiba na tela os resultados de todas as operações também utilizando chamada de funções
- cabeçalho Matematica.h protótipos das funções
 - arquivos Matematica.cpp para ser a implementação do arquivo de cabeçalho Matematica.h
- arquivo ProgramaMatematica.cpp que conterá função main() e será o ponto de partida deste programa.*/

int Soma(int num1, int num2);
int Subtracao(int num1, int num2);
int Multiplicacao(int num1, int num2);
float Divisao(int num1, int num2);
int Potenciacao(int num1, int num2);
float RaizQuadrada(int num1);