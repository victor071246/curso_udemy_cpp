#include <iostream>

/*Utilizando o comandoSystem(COLOR CorFundoCorTexto)
e altere a cor de exibi��o da fonte no terminal de sa�da
para uma cor de sua prefer�ncia*/

int main()
{
	system("COLOR 0A"); // fundo vermelho e cor da letra branca
	std::cout
		<< "Vou" << "\n"
		<< "aprender" << "\n"
		<< "a" << "\n"
		<< "programar" << "\n"
		<< "na" << "\n"
		<< "Linguagem C++" << "\n\n"
		<< "Vou" << "\n"
		<< "aprender" << "\n"
		<< "a" << "\n"
		<< "programar" << "\n"
		<< "na" << "\n"
		<< "Linguagem C++" << "\n";

	system("PAUSE");
	return 0;
}