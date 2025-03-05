#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int GuardarAPilha(int massa) {
    srand(time(0));
    int valor;
    cout << "Quanto queres depositar? ";
    cin >> valor;

    if (valor > 2000) {
        int aleator = rand() % 4;
        string frases[] = {
            "Elaa tanta massa,puto!!!Xe tas rico ya!!!",
            "Roubaste ao putin ",
            "Para de roubar banco ",
            "mataste  quem"
        };
        cout << frases[aleator];
    }

    massa = massa + valor;
    return massa;
}

int botaramassa(int massa) {
    int valor;
    cout << "Quanto queres debitar? ";
    cin >> valor;

    if (valor > massa) {
        cout << "Nao podes es nigger!";
    }
    else {
        massa = massa - valor;
    }

    return massa;
}

int ChecarAMassa(int saldo) {
    cout << "O teu saldo e " << saldo;
    return saldo;
}

int EnviarGuita(int saldo) {
    int valor;
    cout << "Quanto queres mandar ";
    cin >> valor;

    if (valor > saldo) {
        cout << "Nao tens guita suficiente Madje";
    }
    else {
        saldo -= valor;
        cout << "Tens ai massa oh filho";
    }

    return saldo;
}

int iniciarEcran() {
    int massa = 1000;
    int escolhas;

    do {
        cout << "O que queres fazer?"<< "1. guardar a massa" << "2. meter massa"<< "3. Ver a massa"<< "4. enviar massa"<< "0. Sair"<< "Escolha uih : ";
        cin >> escolhas;

        switch (escolhas) {
        case 1:
            massa = GuardarAPilha(massa);
            break;
        case 2:
            massa = botaramassa(massa);
            break;
        case 3:
            ChecarAMassa(massa);
            break;
        case 4:
            massa = EnviarGuita(massa);
            break;
        case 0:
            break;
        default:
            cout << "Mete um numero ai madje";
        }

    } while (escolhas != 0);
    return massa;
}

void main()
{
    iniciarEcran();
}