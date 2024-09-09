//Programa para incluir unicode na tela
#include <iostream>
#include <fcntl.h>
#include <io.h>
int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	std::wcout << L"\u250f";
	system("PAUSE");
}