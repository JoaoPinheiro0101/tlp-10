#include<iostream>
using namespace std;
void main()
{
	int numeros[5] = { 1,7,3,9,8 }, i, escolha;

	numeros[0] = numeros[1];
	numeros[3] = numeros[4];

	for (i = 0; i < 5; i++)
	{
		cout << numeros[i];
	}
}