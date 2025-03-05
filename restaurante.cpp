#include  <iostream>

using namespace std;

void pagamentos1(int pizza, int pessoas)
{
	cout << "cada um pagou " <<  pizza / pessoas << " euros ";
}
void main()
{
	int pizza, pessoas,pagamentos;

	cout << "quantas pessoas foram ao restaurante \n";
	cin >> pessoas;

	cout << "quantas custa a pizza??? \n";
	cin >> pizza;

   pagamentos1(pizza, pessoas);
}
