#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 4096 };
	//Precisamos iniciar o ponteiro, como est�, ele aponta para algum endere�o qualquer, um valor que � chamado de lixo de mem�ria
	//Esta forma � um atalho para declarar e j� iniciar a vari�vel ponteiro
	//Por�m confunde os iniciantes, uma vez que o asterisco est� presente.
	//Pode-se ler assim
	//int *ptr esta parte apenas declara uma vari�vel ponteiro de nome ptr
	//= &Numero esta parte coloca dentro da vari�vel ptr o endere�o de mem�ria da vari�vel Numero
	//� uma simplifica��o dos seguintes passos
	//int *ptr;
	//ptr = &Numero;
	int* ptr = &Numero;
	std::cout << "\nValor da vari�vel Numero: " << Numero << "\n";
	std::cout << "\nValor da vari�vel ptr: " << ptr << "\n";
	std::cout << "\nValor da vari�vel Numero: " << &Numero << "\n";
	std::cout << "\nValor do endere�o que ptr est� carregado na mem�ria ram: " << &ptr << "\n";
	std::cout << "\nValor contido na vari�vel apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na vari�vel apontada por ptr: " << *ptr << "\n";
	


	system("PAUSE");
	return 0;
}