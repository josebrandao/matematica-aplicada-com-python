#include <iostream>

class Singleton {
private:
    // A instância única da classe (static para garantir uma única instância)
    static Singleton* instance;

    // Construtor privado para evitar a criação de instâncias externas
    Singleton() {
        std::cout << "Instância criada!" << std::endl;
    }

    // Destruidor privado para evitar exclusões externas
    ~Singleton() {
        std::cout << "Instância destruída!" << std::endl;
    }

public:
    // Método público estático para obter a instância única
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Método exemplo para testar o Singleton
    void showMessage() {
        std::cout << "Olá do Singleton!" << std::endl;
    }

    // Destruidor estático para liberar memória (se necessário)
    static void destroyInstance() {
        if (instance != nullptr) {
            delete instance;
            instance = nullptr;
        }
    }
};

// Inicialização do ponteiro estático
Singleton* Singleton::instance = nullptr;

int main() {
    // Obtendo a instância do Singleton
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();

    // Tentando obter outra instância (não deve ser criada)
    Singleton* s2 = Singleton::getInstance();
    s2->showMessage();

    // Verificando se s1 e s2 são o mesmo objeto
    if (s1 == s2) {
        std::cout << "s1 e s2 são a mesma instância." << std::endl;
    }

    // Liberando a memória alocada para a instância do Singleton
    Singleton::destroyInstance();

    return 0;
}
