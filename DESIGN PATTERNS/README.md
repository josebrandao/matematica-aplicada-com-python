Padrões de Projeto (Design Patterns)
Os padrões de projeto são soluções reutilizáveis para problemas comuns no desenvolvimento de software. Eles são classificados em três grupos principais, cada um com uma finalidade específica: Criacional, Estrutural e Comportamental.

1. Padrões Criacionais (Creational Patterns)
Estes padrões lidam com a criação de objetos de maneira eficiente, abstraindo o processo de instância de objetos. Eles permitem que o sistema seja mais flexível e independente da forma como os objetos são criados.
Padrões Criacionais:
• Singleton: Garante que uma classe tenha apenas uma instância e fornece um ponto de acesso global.
• Factory Method: Define uma interface para criar um objeto, mas permite que as subclasses decidam qual classe instanciar.
• Abstract Factory: Fornece uma interface para criar famílias de objetos relacionados sem especificar suas classes concretas.
• Builder: Separa a construção de um objeto complexo da sua representação, permitindo a criação de diferentes representações do mesmo tipo de objeto.
• Prototype: Cria novos objetos copiando um objeto existente, sem depender de classes concretas.

2. Padrões Estruturais (Structural Patterns)
Estes padrões lidam com a organização e a composição de classes e objetos, garantindo que eles sejam integrados de forma eficiente e flexível.
Padrões Estruturais:
• Adapter: Permite que classes com interfaces incompatíveis trabalhem juntas, transformando a interface de uma classe em outra esperada por um cliente.
• Decorator: Adiciona funcionalidade adicional a um objeto de forma dinâmica.
• Facade: Fornece uma interface simplificada para um conjunto complexo de interfaces em um subsistema.
• Composite: Permite que objetos compostos (como árvores) sejam tratados de maneira uniforme em relação a objetos individuais.
• Bridge: Separa uma abstração de sua implementação, permitindo que ambas possam ser alteradas independentemente.
• Flyweight: Usa o compartilhamento de objetos para suportar um grande número de objetos de forma eficiente em termos de memória.
• Proxy: Fornece um objeto substituto para controlar o acesso a um outro objeto.

3. Padrões Comportamentais (Behavioral Patterns)
Esses padrões tratam das interações e responsabilidades entre objetos, tornando a comunicação entre eles mais eficiente e mantendo a flexibilidade do sistema.
Padrões Comportamentais:
• Observer: Permite que um objeto notifique outros objetos sobre mudanças de estado sem que os objetos estejam fortemente acoplados.
• Strategy: Define uma família de algoritmos, encapsula cada um e torna-os intercambiáveis.
• Command: Converte uma solicitação em um objeto, permitindo que os parâmetros da solicitação sejam armazenados, transmitidos e executados de forma flexível.
• Chain of Responsibility: Permite que vários objetos manipulem uma solicitação, passando-a ao longo de uma cadeia até que um objeto a processe.
• State: Permite que um objeto altere seu comportamento quando seu estado interno mudar.
• Mediator: Define um objeto que encapsula a interação entre um conjunto de objetos, promovendo um acoplamento fraco.
• Memento: Permite capturar e restaurar o estado interno de um objeto sem violar o encapsulamento.
• Iterator: Fornece uma maneira de acessar os elementos de um objeto agregado sem expor sua representação interna.
• Visitor: Permite adicionar novas operações a objetos de uma estrutura sem modificar as classes dessas estruturas.
• Template Method: Define a estrutura de um algoritmo, permitindo que as subclasses redefinam etapas específicas do algoritmo sem alterar sua estrutura.
• Interpreter: Define uma representação gramatical para uma linguagem e um interpretador para essa linguagem, permitindo que expressões sejam interpretadas e executadas.

