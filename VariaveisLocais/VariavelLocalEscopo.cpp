#include <iostream>

int main()
{
	//Aqui i foi declarado fora do escopo do bloco de código do for
	int i;
	for (i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << " " << j << std::endl;
		//j foi declarado dentro do bloco de código do comando for. Logo quando este bloco de código chegar ao fim, a variável j que é local à este bloco, será destruída e não mais estará acessível.
	}
	std::cout << "\nValor final de i: " << i;
	std::cout << "\nValor final de j: " << j;-+

	//Quando a função atingir aqui, a variável i não sairá da memória, não será destruída pois está fora deste escopo
	return 0;
}