#include <iostream>

void main()
{
	int fatias, pessoas; 

	std::cout << "Quantas fatias tem o bolo?"  "\n";
	std::cin >> fatias;

	std::cout << "Quantas pessoas fazem parte da festa?" "\n";
	std::cin >> pessoas;
	 
	std::cout << " Da " << (fatias / pessoas) << " Fatias por pessoa" "\n";

	std::cout << " Restaram " << (fatias % pessoas) << " Fatias de bolo de cenoura" "\n";
}