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
		
		std::cout << "adivinha o meu número de 1 a 100: ";
		std::cin >> resposta;

		if (resposta < aleatorio) {
			std::cout << "o número é maior, ";
		}
		if (resposta > aleatorio) {
			std::cout << "o número é menor, ";
		}
		

	} while (resposta != aleatorio);
	std::cout << "acertaste, parabéns";
	}