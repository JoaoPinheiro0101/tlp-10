#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
	int adivinha[4], tentativas[4], j, contar = 0,vezes = 0;
	srand(time(0));


	for (j = 0; j < 4; j++)
	{
		tentativas[j] = rand() % 2;
		cout << tentativas[j];
	}
	do
	{
		contar = 0;

		for (j = 0; j < 4; j++)
		{
			cout << "adivinha o" << j + 1 << "º pino\n";
			cin >> adivinha[j];

		}
		for (j = 0; j < 4; j++)
		{
			if (tentativas[j] == adivinha[j])
			{
				contar = contar + 1;
			}
		}
		cout << "acertas " << contar << "numeros \n";
		vezes = vezes + 1;


	} while (contar < 4);

	cout << "ganhate ao outro gajo dalhe miudo \n";
	cout << "acertas em  " << vezes << "tentativas \n";
}