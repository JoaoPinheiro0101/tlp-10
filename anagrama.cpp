#include <iostream>

using namespace std;

void main()

{
	int  j, i, contar = 0, quantas;
	char palavra1[26], palavra2[26], abc[26] = { 'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	cout << "quantas letras tem os dois  nomes \n";
	cin >> quantas;

	cout << "diz me a primeira palavra \n ";

	for (j = 0; j < quantas; j++)
	{
		cin >> palavra1[j];
	}

	cout << "diz me a segunda palavra \n";

	for (j = 0; j < quantas; j++)
	{
		cin >> palavra2[j];
	}

	for (i = 0; i < quantas; i++)
	{
		for (j = 0; j < 26; j++)
		{

			if (palavra1[i] == palavra2[j])
			{
				contar = contar + 1;
			}
		}
	}
	if (contar == 4)
	{
		cout << "   e um anagrama \n";
	}
	else
	{
		cout << "  nao e um anagrama \n";
	}
}