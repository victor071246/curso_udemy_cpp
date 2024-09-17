#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 4096 };
	//Precisamos iniciar o ponteiro, como está, ele aponta para algum endereço qualquer, um valor que é chamado de lixo de memória
	//Esta forma é um atalho para declarar e já iniciar a variável ponteiro
	//Porém confunde os iniciantes, uma vez que o asterisco está presente.
	//Pode-se ler assim
	//int *ptr esta parte apenas declara uma variável ponteiro de nome ptr
	//= &Numero esta parte coloca dentro da variável ptr o endereço de memória da variável Numero
	//É uma simplificação dos seguintes passos
	//int *ptr;
	//ptr = &Numero;
	int* ptr = &Numero;
	std::cout << "\nValor da variável Numero: " << Numero << "\n";
	std::cout << "\nValor da variável ptr: " << ptr << "\n";
	std::cout << "\nValor da variável Numero: " << &Numero << "\n";
	std::cout << "\nValor do endereço que ptr está carregado na memória ram: " << &ptr << "\n";
	std::cout << "\nValor contido na variável apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na variável apontada por ptr: " << *ptr << "\n";
	


	system("PAUSE");
	return 0;
}