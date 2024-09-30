#include <iostream>

//Aqui voc� criou um aias, um apelido para struct Livro. Este apelido se chama RegistroLivro
//Por�m o mais usual � assim

//Cuidado!!!!! Isso abaixo cria uma vari�vel!!!
//Agora RegistroLivro � uma vari�vel!!! Criada via forma compactada de cria��o de vari�veis do tipo struct

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

//Acima � apenas um atalho, uma forma de fazer o seguinte
//typedef struct Livro RegistroLivro; 

int main()
{
	//Aqui � criada uma vari�vel do tipo struct Livro mas sem usar o alias, o apelido criado via typedef



	//Agora um vetor de Structs
	struct Livro Aluno01[5];


	//Aqui criamos uma vari�vel do tipo RegistroLivro
	//Por�m RegistroLivro � apenas uma alias para struct Livro
	//O pr�-processador vai trocar este nome por struct Livro antes da compila��o, simples assim.
	//Muitos usam para simplificar o c�digo e digitar menos
	RegistroLivro Aluno02;
	//Criamos um ponteiro capaz de apontar para uma vari�vel do tipo RegistroLivro, que nada mais � que um alias de struct livro
	RegistroLivro* Ponteiro;
	//Agora ponteiro recebe o endere�o do objeto Aluno02;


	//Podemos fazer assim com Ponteiros
	Ponteiro->ID = 0002;
	Ponteiro->Preco = 99.99;
	//Agora, acima, � com a flecha ->

	//Aqui � ponto pois o objeto Aluno02 est� na stack 
	Aluno02.ID = 0001;
	Aluno02.Preco = 33.99;
	Aluno02.Titulo = "Matrix";
	Aluno02.Editora = "Abril";

	system("PAUSE");
	return 0;
}