object Singleton {
    init {
        println("Instância criada!")
    }

    fun showMessage() {
        println("Olá do Singleton!")
    }
}

fun main() {
    // Usando diretamente o Singleton, não é necessário getInstance()
    Singleton.showMessage()
}
