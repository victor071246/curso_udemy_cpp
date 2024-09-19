#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a referência não pode ficar sem ser atribuída logo que ela é criada
	int& RefNum{ Numero2 };
	//Agora está ok, pois Ref passa a ser uma referência de Numero2
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da referência sem precisar de *
	/*&RefNum = Numero;*/
	//Aqui não será permitido pois referência só pode ser atribuída uma única vez
	int* ptr;
	//Um ponteiro pode ser declarado sem ser inicializado!
	//Até mesmo assim é permitido
	//Depois você pode incializá-lo
	ptr = & Numero

	int* ptr = &Numero;
	*ptr = 4048;
	std::cout << "\nValor de Numero: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endereço, fazer ele apontar para outra variável
	//Isso é permitido!
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "\nValor de NUmero2: " << *ptr << "\n";

	system("PAUSE");
	return 0;
}