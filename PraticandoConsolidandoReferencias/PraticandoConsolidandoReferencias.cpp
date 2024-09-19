#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a refer�ncia n�o pode ficar sem ser atribu�da logo que ela � criada
	int& RefNum{ Numero2 };
	//Agora est� ok, pois Ref passa a ser uma refer�ncia de Numero2
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da refer�ncia sem precisar de *
	/*&RefNum = Numero;*/
	//Aqui n�o ser� permitido pois refer�ncia s� pode ser atribu�da uma �nica vez
	int* ptr;
	//Um ponteiro pode ser declarado sem ser inicializado!
	//At� mesmo assim � permitido
	//Depois voc� pode incializ�-lo
	ptr = & Numero

	int* ptr = &Numero;
	*ptr = 4048;
	std::cout << "\nValor de Numero: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endere�o, fazer ele apontar para outra vari�vel
	//Isso � permitido!
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "\nValor de NUmero2: " << *ptr << "\n";

	system("PAUSE");
	return 0;
}