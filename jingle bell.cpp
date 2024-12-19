#include <iostream>
#include <string>
using namespace std;
void main()
{
    string pessoas[22] = { "Clara", "Abdulah", "André", "Andrei", "Hugo", "Paloma", "João", "Leonardo", "Miguel", "Pedro", "Pierre", "Rafael", "Ricardo", "Salvador", "Sartaj", "Tiago", "Tomás Filipe", "Ulisses", "Henrise", "Heros", "Tomás", "Tuqeer" };
    string produtos[6] = { "Batatas Fritas", "Bolo Rei", "Perfume", "Par de Meias", "Pijama", "Chocolate com Ginja" };
    int pp[100][100], total = 0, totalProdutos = 0, totalPessoas = 0, j, i;
    for (i = 0; i < 22; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << "quantas/os " << produtos[j] << " a/o " << pessoas[i] << " trouxe para o natal ";
            cin >> pp[j][i];
        }
    }
    for (i = 0; i < 22; i++)
    {
        total = 0;
        for (j = 0; j < 6; j++)
        {
            total = total + pp[j][i];
        }
        cout << "A pessoa " << pessoas[i] << " trouxe " << total << "\n";
    }
    for (i = 0; i < 22; i++)
    {
        for (j = 0; j < 6; j++)
        {
            totalProdutos = totalProdutos + pp[j][i];
        }
    }
    cout << "O total de produtos trazidos foram " << totalProdutos << "\n";
    for (i = 0; i < 6; i++)
    {
        totalPessoas = 0;
        for (j = 0; j < 22; j++)
        {
            total = totalPessoas + pp[i][j];
        }
        cout << "No total tem " << totalPessoas << " " << produtos[i] << "\n";
    }
}