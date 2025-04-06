#include <iostream>  // Inclui a biblioteca padrão para entrada e saída (necessária para usar std::cout)

class Singleton {
private:
    // Declaração de um ponteiro estático (variável compartilhada por todas as instâncias)
    // O static garante que a variável `instance` seja a mesma para todas as instâncias de `Singleton`
    static Singleton* instance;

    // Construtor privado para impedir a criação de instâncias externas da classe
    // O construtor é privado para garantir que a classe não possa ser instanciada diretamente
    Singleton() {
        std::cout << "Instância criada!" << std::endl;  // Exibe uma mensagem quando a instância é criada
    }

    // Destruidor privado para evitar que instâncias sejam deletadas diretamente
    // O destruidor é privado para impedir a destruição manual da instância
    // O ~ é o símbolo do destruidor em C++, e é chamado automaticamente quando um objeto é destruído
    ~Singleton() {
        std::cout << "Instância destruída!" << std::endl;  // Exibe uma mensagem quando a instância é destruída
    }

public:
    // Método público e estático para acessar a instância única da classe
    // O modificador static garante que o método seja chamado sem uma instância da classe
    static Singleton* getInstance() {
        // Verifica se a instância única foi criada
        if (instance == nullptr) {  // Se ainda não existe uma instância
            instance = new Singleton();  // Cria a instância, alocando-a dinamicamente
        }
        return instance;  // Retorna a instância única
    }

    // Método de exemplo para mostrar o uso da instância
    void showMessage() {
        std::cout << "Olá do Singleton!" << std::endl;  // Exibe uma mensagem para testar a instância
    }

    // Método estático para destruir a instância, liberando a memória alocada
    // O destruidor estático é responsável por liberar o espaço alocado dinamicamente para a instância
    static void destroyInstance() {
        // Verifica se a instância foi criada antes de tentar deletar
        if (instance != nullptr) {  // Se a instância existe
            delete instance;  // Libera a memória alocada para a instância
            instance = nullptr;  // Atribui nullptr para evitar o acesso à memória já liberada
        }
    }
};

// Inicialização do ponteiro estático fora da classe
// A variável `instance` é inicialmente nula, indicando que a instância ainda não foi criada
Singleton* Singleton::instance = nullptr;

int main() {
    // Obtém a instância do Singleton e armazena em `s1`
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();  // Chama o método para mostrar uma mensagem

    // Tenta obter outra instância do Singleton
    // Como o Singleton garante que só há uma instância, `s2` será a mesma que `s1`
    Singleton* s2 = Singleton::getInstance();
    s2->showMessage();  // Chama novamente o método para mostrar a mesma mensagem

    // Verifica se `s1` e `s2` são a mesma instância
    if (s1 == s2) {
        std::cout << "s1 e s2 são a mesma instância." << std::endl;  // A mensagem será exibida, pois ambas as variáveis apontam para a mesma instância
    }

    // Destrói a instância do Singleton e libera a memória alocada
    Singleton::destroyInstance();

    return 0;
}
