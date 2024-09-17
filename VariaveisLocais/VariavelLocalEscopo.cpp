#include <iostream>

int main()
{
	//Aqui i foi declarado fora do escopo do bloco de c�digo do for
	int i;
	for (i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << " " << j << std::endl;
		//j foi declarado dentro do bloco de c�digo do comando for. Logo quando este bloco de c�digo chegar ao fim, a vari�vel j que � local � este bloco, ser� destru�da e n�o mais estar� acess�vel.
	}
	std::cout << "\nValor final de i: " << i;
	std::cout << "\nValor final de j: " << j;-+

	//Quando a fun��o atingir aqui, a vari�vel i n�o sair� da mem�ria, n�o ser� destru�da pois est� fora deste escopo
	return 0;
}