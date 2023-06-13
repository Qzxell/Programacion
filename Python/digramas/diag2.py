import matplotlib.pyplot as plt

# Configuración del tamaño y márgenes del diagrama de flujo
fig, ax = plt.subplots(figsize=(8, 6))
plt.subplots_adjust(left=0.4, right=0.6, top=0.6, bottom=0.4)

# Definición de los pasos del experimento como bloques en el diagrama de flujo
# Puedes personalizar el diseño y estilo de los bloques según tus preferencias

# Paso 1
ax.annotate('Paso 1', xy=(0.5, 0.9), xytext=(0.5, 0.9), fontsize=12,
            ha='center', va='center', bbox=dict(boxstyle='round', facecolor='white'))
ax.annotate('Colocar peroxodisulfato potásico\n0,1M en tres tubos A', xy=(0.5, 0.8), xytext=(0.5, 0.8), fontsize=10,
            ha='center', va='center', bbox=dict(boxstyle='round', facecolor='white'))

# Paso 2
ax.annotate('Paso 2', xy=(0.5, 0.6), xytext=(0.5, 0.6), fontsize=12,
            ha='center', va='center', bbox=dict(boxstyle='round', facecolor='white'))
ax.annotate('Colocar yoduro potásico 0,1M, indicador,\ntiosulfato de sodio 0,0001M y H2O\nen tres tubos B', xy=(0.5, 0.5), xytext=(0.5, 0.5), fontsize=10,
            ha='center', va='center', bbox=dict(boxstyle='round', facecolor='white'))

# Paso 3
ax.annotate('Paso 3', xy=(0.5, 0.3), xytext=(0.5, 0.3), fontsize=12,
            ha='center', va='center', bbox=dict(boxstyle='round', facecolor='white'))
ax.annotate('Mezclar rápidamente las soluciones\n de los tubos A y B\nTomar tiempo hasta la aparición del color azul', xy=(0.5, 0.2), xytext=(0.5, 0.2), fontsize=10,
            ha='center', va='center', bbox=dict(boxstyle='round', facecolor='white'))

# Configuración adicional del diagrama de flujo
ax.axis('off')  # Ocultar ejes y marcas
ax.set_xlim(0, 1)  # Establecer límites del eje x
ax.set_ylim(0, 1)  # Establecer límites del eje y

# Guardar el diagrama de flujo como una imagen PNG
plt.savefig('diagrama_flujo.png', dpi=300)

