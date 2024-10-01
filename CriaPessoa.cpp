#include <iostream>
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main()
{
	Professor Marcos("Pacheco", 123456, 987654, "Udemy");
	Aluno Luke("Skywalker", 888888, 999999, "Jedi");
	Bibliotecario ObiWan("Kenobi", 111111, 222222);

	Marcos.MostrarDados();
	Luke.MostrarDados();
	ObiWan.MostrarDados();

	//Agora funciona pois Nome está public
	//Marcos.Nome = "Pacheco";
	//Luke.Nome = "Skywalker";
	//ObiWan.Nome = "Kenobi";

	system("PAUSE");
	return 0;
}