//Retornando arrays
#include<iostream>

void DuplicaVetor(int *Array, int Tam);
int *InverteVetor(int *Array, int Tam);
void MostraVetos(int Array, int Tam);
int main()
{
    int Numeros[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Tam = sizeof(Numeros) / sizeof(int);

    MostraVetor(Numeros, Tam);
    DuplicaVetro(Numeros, Tam);
    MostraVetor(Numeros, Tam);
    MostraVetro(InvesteVetor(Numeros, Tam),Tam);
    system("Pause");
    return 0;
}
void DuplicaVetor(int *Array, int Tam)
{
    for (int i = 0; i < Tam; i++)
    {
        Array[i] = 2*Array[i];
    }
}
int *InvertVetor(int *Array, int Tam)
{
   int j = 0;
   static int ArrayInvertido[10];
   for (int i = Tam - 1; i >= 0; i--)
   {
        ArrayInvertido[j] = Array[i];
        j++;
   }
   return &arrayInvertido;
}
void MostraVetos(int Array, int Tam)
{

}

















    /*
    #include <tchar.h> // Biblioteca C++ Pt-Br
    #include<iostream>

    void MostraVetor(int Array[], int TamVetor);

    int main()
    {   setlocale(LC_ALL, "portuguese");
        int Vetor[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        int TamanhoVetor = sizeof(Vetor) / sizeof(int);
        std::cout << "\nTamanho Vetor: [" << TamanhoVetor << " bytes]";
        std::cout << "\nTamanho de um float: [" << sizeof(float) << "]";
        std::cout << "\nTamanho de um int [" << sizeof(int) << "]\n";


        MostraVetor(Vetor, TamanhoVetor);
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
    */
    /*
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
    */


