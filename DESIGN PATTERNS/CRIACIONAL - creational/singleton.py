class Singleton:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            print("Instância criada!")
            cls._instance = super().__new__(cls)
        return cls._instance

    def show_message(self):
        print("Olá do Singleton!")

# Testando o Singleton
singleton = Singleton()
singleton.show_message()

# Tentando criar outra instância (deve ser a mesma)
another_singleton = Singleton()
another_singleton.show_message()

if singleton is another_singleton:
    print("As duas instâncias são a mesma!")
