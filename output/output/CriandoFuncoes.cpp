#include<iostream>
//  *** PROTOTYPE ***  //
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