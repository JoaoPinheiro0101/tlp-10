#include <iostream>
#include  <locale.h>
#include <cstdlib>


void main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(0));

	int aleatorio = rand() % 101;
	int resposta;

	do{
		
		std::cout << "adivinha o meu n�mero de 1 a 100: ";
		std::cin >> resposta;

		if (resposta < aleatorio) {
			std::cout << "o n�mero � maior, ";
		}
		if (resposta > aleatorio) {
			std::cout << "o n�mero � menor, ";
		}
		

	} while (resposta != aleatorio);
	std::cout << "acertaste, parab�ns";
	}