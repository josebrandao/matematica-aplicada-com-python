#include <SFML/Graphics.hpp>

int main() {
    // Criando a janela
    sf::RenderWindow window(sf::VideoMode(800, 600), "Olá, Mundo!");

    // Criando um texto com a mensagem
    sf::Font font;
    if (!font.loadFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf")) {
        return -1;  // Se não conseguir carregar a fonte, retorna com erro
    }

    sf::Text text("Olá, Mundo!", font, 50);  // Texto com tamanho 50
    text.setFillColor(sf::Color::Green);  // Cor do texto

    // Loop principal
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();  // Fecha a janela quando o evento de fechamento for disparado
        }

        // Limpar a tela
        window.clear();

        // Desenha o texto na janela
        window.draw(text);

        // Exibe o conteúdo na tela
        window.display();
    }

    return 0;
}
