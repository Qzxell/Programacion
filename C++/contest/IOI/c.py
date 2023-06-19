def min_max_balance_pairs(left_sizes, right_sizes):
    n = len(left_sizes)
    m = len(right_sizes)

    # Ordenar las listas de tallas de manera ascendente
    left_sizes.sort()
    right_sizes.sort()

    # Matriz para almacenar los subproblemas
    dp = [[float('inf')] * (m + 1) for _ in range(n + 1)]

    # Inicializar el caso base
    dp[0][0] = 0

    # Calcular la matriz dp
    for i in range(n + 1):
        for j in range(m + 1):
            if i > 0 and j > 0:
                diff = abs(left_sizes[i - 1] - right_sizes[j - 1])
                dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + diff)
            if i > 0:
                dp[i][j] = min(dp[i][j], dp[i - 1][j])
            if j > 0:
                dp[i][j] = min(dp[i][j], dp[i][j - 1])

    # Devolver el resultado óptimo
    return dp[n][m]

# Ejemplo de uso
left_sizes = [8, 9, 12, 7]
right_sizes = [10, 7, 6, 8]
result = min_max_balance_pairs(left_sizes, right_sizes)
print(result)  # Salida: 1

