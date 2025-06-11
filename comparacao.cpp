//ex.3
//Crie um programa que:
//Solicite ao utilizadpr que digite um ùnico caractere.
//Converta esse caractere (char)para seu valor numérico na tela ASCII.
//Exiba o valor inteiro correspondente ao caractere digitado.
#include <iostream>
using namespace std;
int main ()
{
    char tecla='a';
    int AsciiTecla= (int) tecla;
    cout<<"Tecla em ASCII= "<< AsciiTecla<<endl;

    return 0;

}

//ex.2
// Crie um programa que:
//peça ao utilizador dois números inteiros;
//Divida um pelo outro normalmente e mostre o resultado
//Use um cast para converter um dos números para float
//antes da divisão e mostre o novo resultado.  
// #include <iostream>
// using namespace std;

//     int main ()
//     {
//         int n1=5, n2=2;
//         int result=n1/n2;
//         float r=(float)n1/n2;
//         cout<<"Resultado int= "<<result<<endl;
//         cout<<"Resultado float= "<<r<<endl;

//         return 0;

//     }


// #include <iostream> //ex m3.6
// using namespace std;
// int main ()
// {
//     //ex.1 m3.6
//Escreva um programa que:
//Declare duas variáveis int e float;
//Atriba um valor interio à variável int e um valor decimal à float;
//Converta explicitamente float para int;
//Converta implicitamente int para float;
//Imprima os valores antes e depois da converão: 
//     int n=5;
//     float x=1.2;
//     int xInt = (int) x;
//     cout<<"x="<<x<<endl;
//     cout<<"xInt="<<xInt<<endl;

//     float nF=n;
//     cout<<"n="<<n<<endl;
//     cout<<"nF="<<nF<<endl;
    
//     return 0;
// }

// int main() {
//     int a = 5;
//     float b = 4.9;
//     float resul_a = static_cast<float>(a);
//     int resul_b = static_cast<int>(b);
    
//     float resul_c = a + b;// Operação sem conversão    
//     int resul_d = static_cast<int>(resul_a);//Conversão explícita
//     cout<<"O valor da variavel 'a' do tip inteiro eh: 5"<<endl;
//     cout<<"O valor da variavel 'b' do tip float eh: 4.9"<<endl;
//     cout<<"O valor de 'a' convertido para float eh: "<<resul_a<<endl;
//     cout<<"O valor de 'b' convertido para inteiro eh: "<<resul_b<<endl;
//     cout<<"A soma das variaveis 'a' e 'b' eh: "<<resul_c<<endl;
//     cout<<"A soma das variaveis 'a' e 'b' convertida para inteiro eh: "<<resul_d<<endl;

    // int x=16, y=3;
    // int result= x/y;
    // cout<<"Resultado int= "<<result<<endl; 

    // float r=(float)x/y;
    // cout<<"Resultado float= "<<r<<endl;

    // //C++ static_cast
    // char c='a';
    // int i=static_cast<int>(c);
    // cout<<"i = "<<i<<endl;

    // return 0;
// }


//Em C++, "cast" é traduzido para conversão de tipo ou conversão explícita. Refere-se à alteração do tipo de um objeto ou valor de um tipo para outro..

/*Exercício de C++:Faça um programa que pede 2 valores, em seguida exiba operações de comparação.
#include <iostream>
using namespace std;
int main (){
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
}*/
