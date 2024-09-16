/*Neste programa, calculamos a potência de um número usando um while*/
#include <iostream>

int main()
{
    int expoente;
    float base, resultado = 1;

    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "\nDigite o expoente: ";
    std::cin >> expoente;

    std::cout << base << "^" << expoente << " = ";

    /*Como sabemos, a potência de um número é o número multiplicado por si mesmo repetidamente*/
    while (expoente != 0)
    {
        resultado *= base;
        expoente--;
    }

    std::cout << resultado;
    std::cout << "\n";
    system("PAUSE");
    return 0;
}