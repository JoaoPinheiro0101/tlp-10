#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char sigla;
    string nomes[5];

    do {
        for (int i = 0; i < 5; i++)
        {
            cout << "Diz o " << i + 1 << "� nome " "\n";
            cin >> nomes[i];
        }

        for (int i = 4; i >= 0; i--)
        {
            cout << nomes[i] << "\n";
        }

        cout << "Voc� quer sair Sim(s), se N�o(n) " "\n";
        cin >> sigla;

    } while (sigla == 'n');
}
