import pandas as pd
import matplotlib.pyplot as plt

# Ler o CSV
df = pd.read_csv("vetores.csv")

# Origem dos vetores (0,0)
origem_x = [0, 0]
origem_y = [0, 0]

# Componentes dos vetores
dest_x = df['x']
dest_y = df['y']

# Plot
plt.quiver(origem_x, origem_y, dest_x, dest_y, angles='xy', scale_units='xy', scale=1, color=['blue', 'red'])
plt.xlim(-2, 4)
plt.ylim(-2, 4)
plt.grid()
plt.axhline(0, color='black', linewidth=0.5)
plt.axvline(0, color='black', linewidth=0.5)
plt.title("Vetores em 2D")
plt.gca().set_aspect('equal', adjustable='box')
plt.show()
