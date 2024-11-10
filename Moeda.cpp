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
            cout << "Diz o " << i + 1 << "º nome " "\n";
            cin >> nomes[i];
        }

        for (int i = 4; i >= 0; i--)
        {
            cout << nomes[i] << "\n";
        }

        cout << "Você quer sair Sim(s), se Não(n) " "\n";
        cin >> sigla;

    } while (sigla == 'n');
}
