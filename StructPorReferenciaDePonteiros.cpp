#include <iostream>
#include <iomanip>

struct Aluno
{
	long int Matricula;
	std::string Nome;
	std::string Curso;
	int Semestre;
	double Mensalidade;

};

//Abaixo s�o prot�tipos de fun��es que possuem um par�metro do tipo struct Aluno. Ou seja, estas fun��es s�o capazes de receber na chamada das mesmas, argumentos que sejam do tipo struct Aluno
void MostrarDados(Aluno Dado);
//Agora criamos uma refer�ncia em Alterar dados... Desta forma Dado n�o ir� mais receber uma simples c�pia da Struct. &Dado ser� um novo alias, uma nova forma de manipular a struct Aluno01;

//Neste caso criamos uma vers�o sobrecarregada da fun��o AlterarDados. Agora nesta assinatura da fun��o AlterarDados, � recebeido um par�metro do tipo ponteiro capaz de apontar para uma vari�vel(objeto) do tipo struct Aluno
//Lembre-se: se Dado � um ponteiro, ele recebe e pode ter dentro dele um endere�o de mem�ria... Logo ao chamar a fun��o AlterarDados nesta vers�o com ponteiros, deve-se enviar o endere�o do objeto!!!
void AlterarDados(Aluno* Dado);
void MostrarDados(Aluno* Dado);

void AlterarDados(Aluno& Dado);
//Podemos retirar struct... pois � como se fosse uma classe

//Acima j� podemos criar um objeto do tipo desta struct colocando entre } e ;
int main()
{
	setlocale(LC_ALL, "portuguese");

	//Aqui usamos a forma tradicionar de instanciar/criar uma vari�vel(objeto) do tipo struct
	Aluno Aluno01 = { 111111, "Fulano", "TI", 4, 990.50 };



	//Aluno01 j� � um objeto do tipo struct criado e instanciado a partir do atalho. Logo estamos enviando para a fun��o MostrarDados a vari�vel Aluno01 (que neste caso � um objeto do tipo struct Aluno)
	
	//Agora criamos via ponteiros um outro objeto
	//Agora este objeto estar� na Heap da Ram
	//A forma de acesso dos membros do objeto n�o ser� mais pela nota��o ponto e sim pela nota��o flecha
	Aluno* Aluno02 = new Aluno;
	Aluno Aluno03; // Criamos outro objeto, mas Aluno03 n�o � um ponteiro
	//Para chamar a fun��o AlterarDados que modifica este objeto via ponteiros, precisamos enviar o endere�o de mem�ria de Aluno03
	AlterarDados(&Aluno03);
	std::cout << "\n Antes de modificar os dados\n";
	MostrarDados(&Aluno03);


	std::cout << "\n Antes de modificar os dados\n";
	MostrarDados(Aluno01);
	AlterarDados(Aluno01);
	std::cout << "\n Depois de modificar os dados\n";
	MostrarDados(Aluno01);


	//Aqui estamos enviando Aluno02 para a fun��o AlterarDados...
	//Ocorre que Aluno02 � um ponteiro que recebe dentro dele o endere�o do objeto criado a partir da struct Aluno
	//Logo enviar Aluno02 significa que estamos enviando o endere�o de mem�ria do objeto Aluno criado em new Aluno
	AlterarDados(Aluno02);
	std::cout << "\n Depois de modificar os dados\n";
	MostrarDados(Aluno02);

	system("PAUSE");
	return 0;
}

//Ent�o Aluno01 � o argumento que ser� colocado no par�metro Dado da fun��o
void MostrarDados(Aluno Dado)
{
	std::cout << "**********DADOS DO ALUNO**********\n";
	std::cout << "\t Nome: " << Dado.Nome << std::endl;
	std::cout << "\t Curso: " << Dado.Curso << std::endl;
	std::cout << "\t Semestre: " << Dado.Semestre << std::endl;
	std::cout << "\t Matr�cula: " << Dado.Matricula << std::endl;
	std::cout << "\t Mensalidade: R$" << std::fixed << std::setprecision(2) << Dado.Mensalidade << std::endl;
	std::cout << "**********************************\n\n";


}

//Agora altera pois dado n�o recebe mais uma c�pia, um valor da struct Aluno01
//Dado agora � uma refer�ncia para quem for enviada para a fun��o AlterarDados. SE � uma refer�ncia. Dado ser� capaz de alterar Aluno01, pois � uma refer�ncia do mesmo

//Ou seja, Aluno01 passa a ser referenciado por Dado
//� como se tiv�ssemos a senten�a Aluno &Dado = Aluno01;



void AlterarDados(Aluno* Dado)
{
	//Desreferenciamento de ponteiros
	//V� at� o local que voc� aponta e no campo nome coloque "Cicrano"
	//(*). pode ser substitu�do por ->
	//(*Dado).Nome = "Cicrano";
	Dado->Nome = "Cicrano";
	Dado->Curso = "Biologia";
	Dado->Semestre = 2;
	Dado->Matricula = 33333;
	Dado->Mensalidade = 899.90;
}

//Dado abaixo � um ponteiro do tipo Aluno
//Ele ir� receber dentro dele o endere�o contido em Aluno02 e portanto vai conseguir modificar o valor de Aluno02
void MostrarDados(Aluno* Dado)
{
	std::cout << "**********DADOS DO ALUNO**********\n";
	std::cout << "\t Nome: " << Dado->Nome << std::endl;
	std::cout << "\t Curso: " << Dado->Curso << std::endl;
	std::cout << "\t Semestre: " << Dado->Semestre << std::endl;
	std::cout << "\t Matr�cula: " << Dado->Matricula << std::endl;
	std::cout << "\t Mensalidade: R$" << std::fixed << std::setprecision(2) << Dado->Mensalidade << std::endl;
	std::cout << "**********************************\n\n";
}

void AlterarDados(Aluno& Dado)
{
	Dado.Nome = "Beltrano";
	Dado.Curso = "Engenharia";
	Dado.Semestre = 1;
	Dado.Matricula = 22222;
	Dado.Mensalidade = 870.99;
}
