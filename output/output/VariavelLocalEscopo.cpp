#include<iostream>

int main()
{
    //Aqui 'i' foi declarado fora do escopo, do bloco de código do for
    int i;
    for (int i = 0; i < 5; i++)
    {   
        int j = i + 2;
        std::cout << i << " " << j << std::endl;
    }
    std:cout << "Valor final de i " << i;
    std:cout << "Valor final de j " << j;

    //Isso é o escopo de uma variável!
    //Qual a visibilidade dela? Local, Global. Se local em que bloco? Qual o tempo de vida dela?
    //Relembrando que os parâmetros das funções são variáveis locais a estas funções!
    //int Soma(int x, int y) escopo local!

     //Poré agora 'j' foi declarado dentro do bloco de código do comando for'. Logo quando este bloco de código chegar ao fim, a variável 'j' que é local a este bloco, será destruida e não mais estará acessível. Ela 'j' somente é acessível dentro do comando 'for'
    //Quando a função atingir aqui a variável 'i' não sairá da memória, não será destruida, da memória, pos está fora deste ESCOPO
    system("PAUSE");
    return 0;
}