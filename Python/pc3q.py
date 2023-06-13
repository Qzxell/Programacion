import numpy as np
import matplotlib.pyplot as plt

# Datos de energía y avance de la reacción
energia = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]  # Energía en kJ/mol
avance = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90]  # Avance de la reacción en %

# Graficar la energía vs avance de la reacción
plt.plot(avance, energia, '-o')

# Etiquetas de los ejes
plt.xlabel('Avance de la reacción (%)')
plt.ylabel('Energía (kJ/mol)')

# Título del gráfico
plt.title('Diagrama de Energía vs Avance de la Reacción')

# Mostrar la cuadrícula
plt.grid(True)

# Mostrar la gráfica
plt.show()

