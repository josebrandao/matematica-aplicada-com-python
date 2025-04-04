#include <SFML/Graphics.hpp>

int main() {
    // Criando a janela
    sf::RenderWindow window(sf::VideoMode(800, 600), "Vetor e Matriz");

    // Vetor com valores [2, 3, 4]
    float vetor[] = {2.0f, 3.0f, 4.0f};  
    sf::VertexArray linhaVetor(sf::LinesStrip, 3);  // Vetor visualizado como linha

    // Preenchendo a linha do vetor
    for (int i = 0; i < 3; i++) {
        linhaVetor[i].position = sf::Vector2f(100.0f + i * 100.0f, 300.0f + vetor[i] * 20.0f);  // Posicionando os pontos
        linhaVetor[i].color = sf::Color::Green;  // Cor verde para o vetor
    }

    // Matriz 2x2 com valores
    sf::RectangleShape retangulos[4];
    float matriz[2][2] = {{1.0f, 2.0f}, {3.0f, 4.0f}};
    float matrizX = 400.0f;

    // Criando retângulos para representar a matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            retangulos[i * 2 + j].setSize(sf::Vector2f(50, 50));
            retangulos[i * 2 + j].setPosition(matrizX + j * 60, 100 + i * 60);
            retangulos[i * 2 + j].setFillColor(sf::Color::Blue);
        }
    }

    // Loop principal
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Limpar tela
        window.clear();

        // Desenhar vetor e matriz
        window.draw(linhaVetor);
        for (int i = 0; i < 4; i++) {
            window.draw(retangulos[i]);
        }

        // Exibir tudo
        window.display();
    }

    return 0;
}
