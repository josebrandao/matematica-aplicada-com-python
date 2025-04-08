import numpy as np
import matplotlib.pyplot as plt
import random

# Parâmetros das transformações (matriz A e vetor b)
# Cada entrada: (probabilidade, matriz A, vetor b)
transformacoes = [
    (0.01, np.array([[0.0, 0.0], [0.0, 0.16]]), np.array([0.0, 0.0])),
    (0.85, np.array([[0.85, 0.04], [-0.04, 0.85]]), np.array([0.0, 1.6])),
    (0.07, np.array([[0.2, -0.26], [0.23, 0.22]]), np.array([0.0, 1.6])),
    (0.07, np.array([[-0.15, 0.28], [0.26, 0.24]]), np.array([0.0, 0.44]))
]

def escolhe_transformacao():
    r = random.random()
    s = 0.0
    for p, A, b in transformacoes:
        s += p
        if r <= s:
            return A, b

# Número de pontos
n = 100000
ponto = np.array([0.0, 0.0])
pontos_x = []
pontos_y = []

# Geração dos pontos
for _ in range(n):
    A, b = escolhe_transformacao()
    ponto = A @ ponto + b  # álgebra linear aqui!
    pontos_x.append(ponto[0])
    pontos_y.append(ponto[1])

# Plot
plt.figure(figsize=(6, 10))
plt.scatter(pontos_x, pontos_y, s=0.1, color='green')
plt.title("Fractal de Barnsley (Samambaia)")
plt.axis('off')
plt.show()
