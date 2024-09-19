#include <iostream>

//Agora vamos fazer o mesmo. A passagem de argumentos para a função por referência só que utilizando ponteiros.
//Lembre-se, ponteiros são variáveis que possuem dentro delas um endereço de outra variável.
//Além disso, eles precisam ser desreferenciados para chegar ao valor apontado ou alterá-lo.

//Aqui foi indicado que a função deve receber endereços de memória, pois se trata de dois ponteiros.
//Então quando enviar para a função, você irá enviar o endereço de memória das variáveis. Estes endereços serão colocados nestas variáveis.
void TrocaNumeros(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero1, Numero2;

	std::cout << "\nDigite o primeiro número: \n";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo número:  \n";
	std::cin >> Numero2;
	std::cout << "\n Valores antes da troca\n";
	//Esta chamada de função apenas COPIA o valor de Numero1 e Numero2 e coloca estes valores em Num1 e Num2 respectivamente da função
	//Troca Numeros não possui relação alguma com estas variáveis.
	//Numero1 e Numero2 são variávels locais a função main
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;
	std::cout << "\nValores depois da troca\n";

	//A função não espera receber mais dois números inteiros e sim dois endereços de memória para ponteiros do tipo int
	//Logo devemos enviar o endereço de memória das variáveis
	TrocaNumeros(&Numero1, &Numero2);
	//Mesmo que fosse o mesmo nome, são variáveis diferentes e com endereços de memórias diferentes
	//A isso chamamos de passagem de argumentos por valor!
	//Apenas uma cópia do valor é enviada à função
	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2;

	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	system("PAUSE");
	return 0;
}


//Agora Num1 e Num2 não reebem simplesmente uma cópia do valor de Numero1 e Numero2. Eles passam a ser refências de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor, isso irá afetar as variáveis, pois agora eles são referências.
void TrocaNumeros(int* Num1, int* Num2)
{
	//Deu diferente pois ponteiro é uma variável e portanto possui endereço alocado na memória. O ponteiro possui dentro dele o endereço de memória da variável apontada


	std::cout << "\nEndereço de memória de Num1 da função = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função = " << &Num2;
	std::cout << "\nEndereço de memória contido dentro de Num1 = " << &Num1;
	std::cout << "\nEndereço de memória contido dentro de Num2 = " << &Num2;

	//Se Num1 agora é um ponteiro, logo terá dentro dele um endereço de memória. Está dando erro pois estamos tentando colocar um endereço de memória dentro de uma variável inteira Temp
	//Lembre-se que o nome de uma variável devolve o que está dentro dela!
	//Neste caso queremos o valor que Num1 aponta, que será Numero1. Por isso, diferentemente das referências, os ponteiros precisam ser desreferenciados.
	int Temp{ *Num1 };
	//Temp recebe o valor apontado por Num1

	//O valor apontado por Num1 (que será Numero1) receberá o valor apontado por Num2
	*Num1 = *Num2;

	//O valor apontado por Num2 recebe o valor de Temp;
	*Num2 = Temp;
	//Temp é uma variável int normal, não precisando e não podendo ser desreferenciada
}

//O nome deste processo é chamado de passagem de argumentos para a função por referência, apenas usando ponteiros.