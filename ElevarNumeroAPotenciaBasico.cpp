/*Neste programa, calculamos a pot�ncia de um n�mero usando um while*/
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

    /*Como sabemos, a pot�ncia de um n�mero � o n�mero multiplicado por si mesmo repetidamente*/
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