//#include <iostream>
//
////Agora estamos indicando que a função terá dois parâmetros que serão referências dos argumentos passados para esta função
////Ou seja, o que for enviado para esta função passará a ser referenciado por Num1 e Num2 respectivamente
//void TrocaNumeros(int &Num1, int &Num2);
//
//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int Numero1, Numero2;
//
//	std::cout << "\nDigite o primeiro número: \n";
//	std::cin >> Numero1;
//	std::cout << "\nDigite o segundo número:  \n";
//	std::cin >> Numero2;
//	std::cout << "\n Valores antes da troca\n";
//	//Esta chamada de função apenas COPIA o valor de Numero1 e Numero2 e coloca estes valores em Num1 e Num2 respectivamente da função
//	//Troca Numeros não possui relação alguma com estas variáveis.
//	//Numero1 e Numero2 são variávels locais a função main
//	std::cout << "\nNumero1 = " << Numero1;
//	std::cout << "\nNumero2 = " << Numero2;
//	std::cout << "\nValores depois da troca\n";
//	TrocaNumeros(Numero1, Numero2);
//	//Mesmo que fosse o mesmo nome, são variáveis diferentes e com endereços de memórias diferentes
//	//A isso chamamos de passagem de argumentos por valor!
//	//Apenas uma cópia do valor é enviada à função
//	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
//	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2;
//
//	std::cout << "\nNumero1 = " << Numero1;
//	std::cout << "\nNumero2 = " << Numero2 <<"\n";
//	system("PAUSE");
//	return 0;
//}
//
//
////Agora Num1 e Num2 não reebem simplesmente uma cópia do valor de Numero1 e Numero2. Eles passam a ser refências de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor, isso irá afetar as variáveis, pois agora eles são referências.
//void TrocaNumeros(int &Num1, int &Num2)
//{
//
//
//	std::cout << "\nEndereço de memória de Num1 da função = " << &Num1;
//	std::cout << "\nEndereço de memória de Num2 da função = " << &Num2;
//
//	int Temp{ Num1 };
//	//Num1 passa a ser 20
//	//Aqui está copiando em Numero1 o valor de Numero2, pois são referências, é como se fosse Numero1 = Numero2
//	//Lembre-se que referências são alias para suas variáveis
//	Num1 = Num2;
//	//Num2 passa a ser 10. Recebendo de Temp e logo foi trocado
//	Num2 = Temp;
//	//Então aqui a troca ocorre apenas nas variáveis locais
//	//Numero1 e Numero2 ficam intactos
//
//}
//
////O nome deste processo é chamado de passagem de argumentos para a função por referência