#include <iostream>

//Agora vamos fazer o mesmo. A passagem de argumentos para a fun��o por refer�ncia s� que utilizando ponteiros.
//Lembre-se, ponteiros s�o vari�veis que possuem dentro delas um endere�o de outra vari�vel.
//Al�m disso, eles precisam ser desreferenciados para chegar ao valor apontado ou alter�-lo.

//Aqui foi indicado que a fun��o deve receber endere�os de mem�ria, pois se trata de dois ponteiros.
//Ent�o quando enviar para a fun��o, voc� ir� enviar o endere�o de mem�ria das vari�veis. Estes endere�os ser�o colocados nestas vari�veis.
void TrocaNumeros(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero1, Numero2;

	std::cout << "\nDigite o primeiro n�mero: \n";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo n�mero:  \n";
	std::cin >> Numero2;
	std::cout << "\n Valores antes da troca\n";
	//Esta chamada de fun��o apenas COPIA o valor de Numero1 e Numero2 e coloca estes valores em Num1 e Num2 respectivamente da fun��o
	//Troca Numeros n�o possui rela��o alguma com estas vari�veis.
	//Numero1 e Numero2 s�o vari�vels locais a fun��o main
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;
	std::cout << "\nValores depois da troca\n";

	//A fun��o n�o espera receber mais dois n�meros inteiros e sim dois endere�os de mem�ria para ponteiros do tipo int
	//Logo devemos enviar o endere�o de mem�ria das vari�veis
	TrocaNumeros(&Numero1, &Numero2);
	//Mesmo que fosse o mesmo nome, s�o vari�veis diferentes e com endere�os de mem�rias diferentes
	//A isso chamamos de passagem de argumentos por valor!
	//Apenas uma c�pia do valor � enviada � fun��o
	std::cout << "\nEndere�o de mem�ria de Numero1 = " << &Numero1;
	std::cout << "\nEndere�o de mem�ria de Numero2 = " << &Numero2;

	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	system("PAUSE");
	return 0;
}


//Agora Num1 e Num2 n�o reebem simplesmente uma c�pia do valor de Numero1 e Numero2. Eles passam a ser ref�ncias de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor, isso ir� afetar as vari�veis, pois agora eles s�o refer�ncias.
void TrocaNumeros(int* Num1, int* Num2)
{
	//Deu diferente pois ponteiro � uma vari�vel e portanto possui endere�o alocado na mem�ria. O ponteiro possui dentro dele o endere�o de mem�ria da vari�vel apontada


	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o = " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o = " << &Num2;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num1 = " << &Num1;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num2 = " << &Num2;

	//Se Num1 agora � um ponteiro, logo ter� dentro dele um endere�o de mem�ria. Est� dando erro pois estamos tentando colocar um endere�o de mem�ria dentro de uma vari�vel inteira Temp
	//Lembre-se que o nome de uma vari�vel devolve o que est� dentro dela!
	//Neste caso queremos o valor que Num1 aponta, que ser� Numero1. Por isso, diferentemente das refer�ncias, os ponteiros precisam ser desreferenciados.
	int Temp{ *Num1 };
	//Temp recebe o valor apontado por Num1

	//O valor apontado por Num1 (que ser� Numero1) receber� o valor apontado por Num2
	*Num1 = *Num2;

	//O valor apontado por Num2 recebe o valor de Temp;
	*Num2 = Temp;
	//Temp � uma vari�vel int normal, n�o precisando e n�o podendo ser desreferenciada
}

//O nome deste processo � chamado de passagem de argumentos para a fun��o por refer�ncia, apenas usando ponteiros.