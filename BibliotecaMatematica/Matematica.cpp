#include "Matematica.h"
#include <cmath>
#include <locale.h>

//Variável global pois declarei fora de qualquer função. Logo ela será acessível em qualquer função incluindo a função main()
int NumeroGlobal = 10;

int Soma(int num1, int num2)
{
    //Esta variável só é acessível dentro da função soma
    int NumeroLocal = 5;
    return num1 + num2;
}

int Subtracao(int num1, int num2)
{
    if (num1 > num2)
    {
        //Neste caso qualquer variável declarada entre as chaves de algo. Será acessível somente dentro destas chaves. A isso chamamos ESCOPO de variável
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
    //faz uma divisão inteira pois num1 e num2 são inteiros mas podemos fazer cast
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
