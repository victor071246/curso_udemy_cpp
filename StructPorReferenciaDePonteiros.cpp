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

//Abaixo são protótipos de funções que possuem um parâmetro do tipo struct Aluno. Ou seja, estas funções são capazes de receber na chamada das mesmas, argumentos que sejam do tipo struct Aluno
void MostrarDados(Aluno Dado);
//Agora criamos uma referência em Alterar dados... Desta forma Dado não irá mais receber uma simples cópia da Struct. &Dado será um novo alias, uma nova forma de manipular a struct Aluno01;

//Neste caso criamos uma versão sobrecarregada da função AlterarDados. Agora nesta assinatura da função AlterarDados, é recebeido um parâmetro do tipo ponteiro capaz de apontar para uma variável(objeto) do tipo struct Aluno
//Lembre-se: se Dado é um ponteiro, ele recebe e pode ter dentro dele um endereço de memória... Logo ao chamar a função AlterarDados nesta versão com ponteiros, deve-se enviar o endereço do objeto!!!
void AlterarDados(Aluno* Dado);
void MostrarDados(Aluno* Dado);

void AlterarDados(Aluno& Dado);
//Podemos retirar struct... pois é como se fosse uma classe

//Acima já podemos criar um objeto do tipo desta struct colocando entre } e ;
int main()
{
	setlocale(LC_ALL, "portuguese");

	//Aqui usamos a forma tradicionar de instanciar/criar uma variável(objeto) do tipo struct
	Aluno Aluno01 = { 111111, "Fulano", "TI", 4, 990.50 };



	//Aluno01 já é um objeto do tipo struct criado e instanciado a partir do atalho. Logo estamos enviando para a função MostrarDados a variável Aluno01 (que neste caso é um objeto do tipo struct Aluno)
	
	//Agora criamos via ponteiros um outro objeto
	//Agora este objeto estará na Heap da Ram
	//A forma de acesso dos membros do objeto não será mais pela notação ponto e sim pela notação flecha
	Aluno* Aluno02 = new Aluno;
	Aluno Aluno03; // Criamos outro objeto, mas Aluno03 não é um ponteiro
	//Para chamar a função AlterarDados que modifica este objeto via ponteiros, precisamos enviar o endereço de memória de Aluno03
	AlterarDados(&Aluno03);
	std::cout << "\n Antes de modificar os dados\n";
	MostrarDados(&Aluno03);


	std::cout << "\n Antes de modificar os dados\n";
	MostrarDados(Aluno01);
	AlterarDados(Aluno01);
	std::cout << "\n Depois de modificar os dados\n";
	MostrarDados(Aluno01);


	//Aqui estamos enviando Aluno02 para a função AlterarDados...
	//Ocorre que Aluno02 é um ponteiro que recebe dentro dele o endereço do objeto criado a partir da struct Aluno
	//Logo enviar Aluno02 significa que estamos enviando o endereço de memória do objeto Aluno criado em new Aluno
	AlterarDados(Aluno02);
	std::cout << "\n Depois de modificar os dados\n";
	MostrarDados(Aluno02);

	system("PAUSE");
	return 0;
}

//Então Aluno01 é o argumento que será colocado no parâmetro Dado da função
void MostrarDados(Aluno Dado)
{
	std::cout << "**********DADOS DO ALUNO**********\n";
	std::cout << "\t Nome: " << Dado.Nome << std::endl;
	std::cout << "\t Curso: " << Dado.Curso << std::endl;
	std::cout << "\t Semestre: " << Dado.Semestre << std::endl;
	std::cout << "\t Matrícula: " << Dado.Matricula << std::endl;
	std::cout << "\t Mensalidade: R$" << std::fixed << std::setprecision(2) << Dado.Mensalidade << std::endl;
	std::cout << "**********************************\n\n";


}

//Agora altera pois dado não recebe mais uma cópia, um valor da struct Aluno01
//Dado agora é uma referência para quem for enviada para a função AlterarDados. SE é uma referência. Dado será capaz de alterar Aluno01, pois é uma referência do mesmo

//Ou seja, Aluno01 passa a ser referenciado por Dado
//É como se tivéssemos a sentença Aluno &Dado = Aluno01;



void AlterarDados(Aluno* Dado)
{
	//Desreferenciamento de ponteiros
	//Vá até o local que você aponta e no campo nome coloque "Cicrano"
	//(*). pode ser substituído por ->
	//(*Dado).Nome = "Cicrano";
	Dado->Nome = "Cicrano";
	Dado->Curso = "Biologia";
	Dado->Semestre = 2;
	Dado->Matricula = 33333;
	Dado->Mensalidade = 899.90;
}

//Dado abaixo é um ponteiro do tipo Aluno
//Ele irá receber dentro dele o endereço contido em Aluno02 e portanto vai conseguir modificar o valor de Aluno02
void MostrarDados(Aluno* Dado)
{
	std::cout << "**********DADOS DO ALUNO**********\n";
	std::cout << "\t Nome: " << Dado->Nome << std::endl;
	std::cout << "\t Curso: " << Dado->Curso << std::endl;
	std::cout << "\t Semestre: " << Dado->Semestre << std::endl;
	std::cout << "\t Matrícula: " << Dado->Matricula << std::endl;
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
