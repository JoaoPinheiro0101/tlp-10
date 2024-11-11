#include <iostream>
#include <locale.h>
#include <string>

void main()
{
	int r;
	std::string carros[3] = {"Volvo", "BMW", "Porche" };
	std::cout << "que carro queres ver (0 a 2 )";
	std::cin >> r;
	std::cout << "O carro que escolheu é o" << carros[r];

	if (r >2)

}
