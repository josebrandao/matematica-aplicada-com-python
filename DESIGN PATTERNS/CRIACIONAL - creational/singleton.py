# Definição da classe Singleton
class Singleton:
    # Variável de classe que guarda a instância única
    _instance = None

    # Método __new__ é responsável por criar a instância da classe
    def __new__(cls):
        # Se ainda não existe uma instância da classe (Singleton)
        if cls._instance is None:
            print("Instância criada!")  # Mensagem que será exibida na primeira criação
            # Chama o método __new__ da superclasse (object) para criar a instância
            cls._instance = super().__new__(cls)
        # Retorna a instância única
        return cls._instance

    # Método que apenas imprime uma mensagem (para testar o funcionamento do Singleton)
    def show_message(self):
        print("Olá do Singleton!")

# Testando o padrão Singleton

# Aqui estamos criando a primeira instância da classe Singleton
singleton = Singleton()
# Chamando o método show_message() na primeira instância
singleton.show_message()

# Tentando criar uma segunda instância. O esperado é que seja a mesma instância da anterior.
another_singleton = Singleton()
# Chamando o método show_message() na segunda instância (que, como será a mesma, não vai
# criar uma nova instância, mas apenas referenciar a primeira instância criada).
another_singleton.show_message()

# Comparando se ambas as instâncias são a mesma
if singleton is another_singleton:
    print("As duas instâncias são a mesma!")

