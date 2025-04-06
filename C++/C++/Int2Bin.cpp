#include <iostream>
#include <bitset> // Biblioteca para conversão binária

using namespace std;

void converterBinario() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Usando a biblioteca bitset para converter para binário
    cout << "O número " << numero << " em binário é: " << bitset<32>(numero) << endl;
}

int main() {
    int escolha;

    do {
        cout << "\n=== Programa de Matemática Aplicada ===\n";
        cout << "1. Converter número para Binário\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                converterBinario();
                break;
            case 0:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (escolha != 0);

    return 0;
}
