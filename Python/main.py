import matplotlib.pyplot as plt
import numpy as np

# Crear datos de x y y
x = np.linspace(-10, 10, 100)  # Generar 100 puntos equidistantes en el rango [-10, 10]
y = x ** 2  # Calcular el valor de y para cada punto x

# Crear la gráfica
plt.plot(x, y)

# Personalizar la gráfica
plt.title('Gráfica de y = x^2')
plt.xlabel('x')
plt.ylabel('y')

# Mostrar la gráfica
plt.show()

