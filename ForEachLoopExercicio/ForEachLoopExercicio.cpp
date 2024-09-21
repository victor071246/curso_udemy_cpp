#include <iostream>
#include <iomanip>

/* Este setor conseguiu coletar os valores em km/h: 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7
Utilizando o conceito de for each C++ e a palavra reservada auto coloque na tela a média de velocidade desta rodovia.*/


int main()
{
	float Velocidades[]{ 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7
	};
	float SomaVelocidades{ 0.0 };
	int TamArray{ 0 };

	for (auto Velocidade : Velocidades)
	{
		SomaVelocidades += Velocidade;
		TamArray++;
	}

	std::cout << "Media da velocidade na rodovia: " <<std::defaultfloat << std::setprecision(4) << SomaVelocidades / TamArray << " km/h\n";
	system("PAUSE");
	return 0;
}