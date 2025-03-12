import numpy as np
import matplotlib.pyplot as plt  # Importando matplotlib para gráficos

Nt = 1000  # Número de pontos a serem gerados
Nin = 0  # Contador de pontos dentro do círculo

# Listas para armazenar as coordenadas dos pontos
x_inside = []  # Coordenadas x dos pontos dentro do círculo
y_inside = []  # Coordenadas y dos pontos dentro do círculo
x_outside = []  # Coordenadas x dos pontos fora do círculo
y_outside = []  # Coordenadas y dos pontos fora do círculo

# Laço para gerar pontos aleatórios
for i in range(Nt):  # Corrigido '1' para 'i'
    x = np.random.rand(1) * 2 - 1  # Gera um número entre -1 e 1
    y = np.random.rand(1) * 2 - 1  # Gera um número entre -1 e 1

    # Verifica se o ponto (x, y) está dentro do círculo de raio 1
    if x**2 + y**2 <= 1:
        Nin += 1  # Incrementa o contador de pontos dentro do círculo
        x_inside.append(x)  # Adiciona o ponto nas listas de pontos dentro do círculo
        y_inside.append(y)
    else:
        x_outside.append(x)  # Adiciona o ponto nas listas de pontos fora do círculo
        y_outside.append(y)

# Estimativa de PI usando a fórmula de Monte Carlo
PI = 4 * Nin / Nt  # A estimativa de PI é 4 vezes a razão entre pontos dentro do círculo e o total de pontos

# Exibindo o resultado
print(f"Estimativa de PI após {Nt} simulações: {PI}")

# Criação do gráfico
plt.figure(figsize=(8, 8))  # Define o tamanho da figura

# Plotando os pontos dentro do círculo
plt.scatter(x_inside, y_inside, color='blue', label='Dentro do Círculo', s=10)

# Plotando os pontos fora do círculo
plt.scatter(x_outside, y_outside, color='red', label='Fora do Círculo', s=10)

# Adicionando o círculo de raio 1
circle = plt.Circle((0, 0), 1, color='green', fill=False, linestyle='--', label='Círculo de Raio 1')
plt.gca().add_artist(circle)

# Configurando os limites do gráfico
plt.xlim(-1.1, 1.1)
plt.ylim(-1.1, 1.1)

# Adicionando título e rótulos
plt.title('Simulação de Monte Carlo para Estimativa de PI', fontsize=14)
plt.xlabel('Coordenada X', fontsize=12)
plt.ylabel('Coordenada Y', fontsize=12)

# Exibindo a legenda
plt.legend(title='Legenda')

# Exibindo o gráfico
plt.gca().set_aspect('equal', adjustable='box')  # Garante que o gráfico seja proporcional
plt.show()

