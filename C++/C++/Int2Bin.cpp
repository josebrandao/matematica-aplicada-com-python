#include <iostream>
#include <bitset> // Biblioteca para convers�o bin�ria

using namespace std;

void converterBinario() {
    int numero;
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    // Usando a biblioteca bitset para converter para bin�rio
    cout << "O n�mero " << numero << " em bin�rio �: " << bitset<32>(numero) << endl;
}

int main() {
    int escolha;

    do {
        cout << "\n=== Programa de Matem�tica Aplicada ===\n";
        cout << "1. Converter n�mero para Bin�rio\n";
        cout << "0. Sair\n";
        cout << "Escolha uma op��o: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                converterBinario();
                break;
            case 0:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Op��o inv�lida!\n";
        }
    } while (escolha != 0);

    return 0;
}
