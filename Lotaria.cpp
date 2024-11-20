#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{ 
	int i, sorteio[5], j, aposta[5],batata=0;
	srand (time(0));

	for (i = 0; i < 5; i++)
	{
		 sorteio[i] = rand() % 50 + 1;
	}
	for (i = 0; i < 5; i++)
	{
		cout << sorteio[i] << "\n";
	}
	for (i = 0; i < 5; i++)
	{
		cout << "Faz a tua aposta- ";
		cin >> aposta[i];
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (aposta[i] == sorteio[j])
			{
				batata = batata + 1;
			}
		}
     
	}
	if (batata == 5)
	{
		cout << "ganhasteeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	}
}
