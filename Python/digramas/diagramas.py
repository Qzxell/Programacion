import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle

# Crear la figura y los ejes
fig, ax = plt.subplots(figsize=(8, 6))

# Definir los pasos del experimento como una lista de cadenas de texto
pasos = [
    "1. Colocar peroxodisulfato potásico 0,1M en tubos A",
    "2. Preparar solución en tubos B con yoduro potásico 0,1M y otros componentes",
    "3. Mezclar rápidamente soluciones de tubo A y tubo B",
    "4. Tomar tiempo hasta la aparición del color azul"
]

# Definir las coordenadas de los pasos en el diagrama
coord_x = [0.5, 0.5, 0.5, 0.5]
coord_y = [3, 2, 1, 0]

# Dibujar las cajas y las flechas que representan los pasos
for i in range(len(pasos)):
    ax.add_patch(Rectangle((0, coord_y[i]), 1, 0.8, edgecolor='black', facecolor='white'))
    ax.text(0.5, coord_y[i] + 0.4, pasos[i], ha='center', va='center')
    if i < len(pasos) - 1:
        ax.arrow(0.5, coord_y[i] + 0.8, 0, -0.4, length_includes_head=True, head_width=0.1, head_length=0.1)

# Configurar los límites y la apariencia de los ejes
ax.set_xlim(0, 1)
ax.set_ylim(0, 3.8)
ax.axis('off')

# Guardar el diagrama como una imagen en formato PNG
plt.savefig('diagrama_flujo.png', dpi=300)


