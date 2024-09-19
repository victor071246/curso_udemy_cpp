//#include <iostream>
//
////Agora estamos indicando que a fun��o ter� dois par�metros que ser�o refer�ncias dos argumentos passados para esta fun��o
////Ou seja, o que for enviado para esta fun��o passar� a ser referenciado por Num1 e Num2 respectivamente
//void TrocaNumeros(int &Num1, int &Num2);
//
//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int Numero1, Numero2;
//
//	std::cout << "\nDigite o primeiro n�mero: \n";
//	std::cin >> Numero1;
//	std::cout << "\nDigite o segundo n�mero:  \n";
//	std::cin >> Numero2;
//	std::cout << "\n Valores antes da troca\n";
//	//Esta chamada de fun��o apenas COPIA o valor de Numero1 e Numero2 e coloca estes valores em Num1 e Num2 respectivamente da fun��o
//	//Troca Numeros n�o possui rela��o alguma com estas vari�veis.
//	//Numero1 e Numero2 s�o vari�vels locais a fun��o main
//	std::cout << "\nNumero1 = " << Numero1;
//	std::cout << "\nNumero2 = " << Numero2;
//	std::cout << "\nValores depois da troca\n";
//	TrocaNumeros(Numero1, Numero2);
//	//Mesmo que fosse o mesmo nome, s�o vari�veis diferentes e com endere�os de mem�rias diferentes
//	//A isso chamamos de passagem de argumentos por valor!
//	//Apenas uma c�pia do valor � enviada � fun��o
//	std::cout << "\nEndere�o de mem�ria de Numero1 = " << &Numero1;
//	std::cout << "\nEndere�o de mem�ria de Numero2 = " << &Numero2;
//
//	std::cout << "\nNumero1 = " << Numero1;
//	std::cout << "\nNumero2 = " << Numero2 <<"\n";
//	system("PAUSE");
//	return 0;
//}
//
//
////Agora Num1 e Num2 n�o reebem simplesmente uma c�pia do valor de Numero1 e Numero2. Eles passam a ser ref�ncias de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor, isso ir� afetar as vari�veis, pois agora eles s�o refer�ncias.
//void TrocaNumeros(int &Num1, int &Num2)
//{
//
//
//	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o = " << &Num1;
//	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o = " << &Num2;
//
//	int Temp{ Num1 };
//	//Num1 passa a ser 20
//	//Aqui est� copiando em Numero1 o valor de Numero2, pois s�o refer�ncias, � como se fosse Numero1 = Numero2
//	//Lembre-se que refer�ncias s�o alias para suas vari�veis
//	Num1 = Num2;
//	//Num2 passa a ser 10. Recebendo de Temp e logo foi trocado
//	Num2 = Temp;
//	//Ent�o aqui a troca ocorre apenas nas vari�veis locais
//	//Numero1 e Numero2 ficam intactos
//
//}
//
////O nome deste processo � chamado de passagem de argumentos para a fun��o por refer�ncia