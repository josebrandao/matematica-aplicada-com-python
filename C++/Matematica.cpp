#include <iostream>
using namespace std;

// Função para calcular a média aritmética
void calcularMedia() {
    int n;
    cout << "Quantos números deseja calcular a média? ";
    cin >> n;
    double soma = 0;
    for (int i = 0; i < n; i++) {
        double num;
        cout << "Digite o número " << i + 1 << ": ";
        cin >> num;
        soma += num;
    }
    cout << "A média aritmética é: " << soma / n << endl;
}

// Função para calcular a soma de uma série aritmética
void somaSerieAritmetica() {
    int a1, an, n;
    cout << "Digite o primeiro termo (a1): ";
    cin >> a1;
    cout << "Digite o último termo (an): ";
    cin >> an;
    cout << "Digite o número de termos (n): ";
    cin >> n;
    int soma = (n * (a1 + an)) / 2;
    cout << "A soma da série aritmética é: " << soma << endl;
}

// Função para resolver uma equação linear ax + b = 0
void resolverEquacaoLinear() {
    double a, b;
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Equação indeterminada (infinita quantidade de soluções)." << endl;
        } else {
            cout << "Equação impossível (sem solução)." << endl;
        }
    } else {
        double x = -b / a;
        cout << "A solução da equação é: x = " << x << endl;
    }
}

int main() {
    int escolha;

    do {
        cout << "\n=== Programa de Matemática Aplicada ===\n";
        cout << "1. Calcular Média Aritmética\n";
        cout << "2. Soma de Série Aritmética\n";
        cout << "3. Resolver Equação Linear (ax + b = 0)\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                calcularMedia();
                break;
            case 2:
                somaSerieAritmetica();
                break;
            case 3:
                resolverEquacaoLinear();
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
