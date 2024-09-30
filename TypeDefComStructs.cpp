#include <iostream>

//Aqui você criou um aias, um apelido para struct Livro. Este apelido se chama RegistroLivro
//Porém o mais usual é assim

//Cuidado!!!!! Isso abaixo cria uma variável!!!
//Agora RegistroLivro é uma variável!!! Criada via forma compactada de criação de variáveis do tipo struct

struct Livro
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;
};

typedef struct Livro
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;
} RegistroLivro;

//Acima é apenas um atalho, uma forma de fazer o seguinte
//typedef struct Livro RegistroLivro; 

int main()
{
	//Aqui é criada uma variável do tipo struct Livro mas sem usar o alias, o apelido criado via typedef



	//Agora um vetor de Structs
	struct Livro Aluno01[5];


	//Aqui criamos uma variável do tipo RegistroLivro
	//Porém RegistroLivro é apenas uma alias para struct Livro
	//O pré-processador vai trocar este nome por struct Livro antes da compilação, simples assim.
	//Muitos usam para simplificar o código e digitar menos
	RegistroLivro Aluno02;
	//Criamos um ponteiro capaz de apontar para uma variável do tipo RegistroLivro, que nada mais é que um alias de struct livro
	RegistroLivro* Ponteiro;
	//Agora ponteiro recebe o endereço do objeto Aluno02;


	//Podemos fazer assim com Ponteiros
	Ponteiro->ID = 0002;
	Ponteiro->Preco = 99.99;
	//Agora, acima, é com a flecha ->

	//Aqui é ponto pois o objeto Aluno02 está na stack 
	Aluno02.ID = 0001;
	Aluno02.Preco = 33.99;
	Aluno02.Titulo = "Matrix";
	Aluno02.Editora = "Abril";

	system("PAUSE");
	return 0;
}