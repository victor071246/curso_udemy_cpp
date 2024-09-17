#include "Matematica.h"
#include <cmath>
#include <locale.h>

//Vari�vel global pois declarei fora de qualquer fun��o. Logo ela ser� acess�vel em qualquer fun��o incluindo a fun��o main()
int NumeroGlobal = 10;

int Soma(int num1, int num2)
{
    //Esta vari�vel s� � acess�vel dentro da fun��o soma
    int NumeroLocal = 5;
    return num1 + num2;
}

int Subtracao(int num1, int num2)
{
    if (num1 > num2)
    {
        //Neste caso qualquer vari�vel declarada entre as chaves de algo. Ser� acess�vel somente dentro destas chaves. A isso chamamos ESCOPO de vari�vel
        int NumeroLocalAEsteIf = 20;
    }
    return num1 - num2;

}

int Multiplicacao(int num1, int num2)
{
    return num1 * num2;
}

float Divisao(int num1, int num2)
{
    //faz uma divis�o inteira pois num1 e num2 s�o inteiros mas podemos fazer cast
    return (float)num1 / (float)num2;
}

float Potencia(int num1, int num2)
{
    return pow(num1, num2);
}

float RaizQuadrada(int num)
{
    return sqrt(num);
}
