#include <iostream>
#include <fstream>

int main() {
    // Vetores 2D (exemplo)
    float v1_x = 2.0, v1_y = 1.0;
    float v2_x = -1.0, v2_y = 3.0;

    // Salvar em CSV
    std::ofstream arquivo("vetores.csv");
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao criar o arquivo CSV.\n";
        return -1;
    }

    arquivo << "x,y\n";  // Cabeçalho
    arquivo << v1_x << "," << v1_y << "\n";
    arquivo << v2_x << "," << v2_y << "\n";

    arquivo.close();

    std::cout << "Vetores salvos em vetores.csv\n";
    return 0;
}
