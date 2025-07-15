#include <tchar.h> // Biblioteca C++ Pt-Br
#include<iostream>

void MostraVetor(int Array[], int TamVetor);

int main()
{
    setlocale(LC_ALL, "portuguese");
    int Vetor[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    MostraVetor(Vetor, 10);    
    system("Pause");
    return 0;
}

void MostraVetor(int Array[], int TamVetor)
{
    std::cout << "\n";
    for(int i = 0; i < TamVetor; i++)
    {        
        std::cout << Array[i] << ", ";       
    }
    std::cout << "\n\n";
}