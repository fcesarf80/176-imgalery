#include<iostream>
//  *** PROTOTYPE ***  //
//Você pode colocar valores padrões no protótipo e então quando
//você chamar a função, poderá omitir argumentos, pois a função irá
//utilizar o argumento padrão (se você não informar o argumento quando da chamada da função.)


void Coordenadas(int x, int y, int z = 8);

int main()
{
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