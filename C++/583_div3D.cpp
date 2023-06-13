#include <iostream>
#include <vector>
#include <unordered_map>

int obtenerNumeroMinimo(int N, int K, const std::vector<int>& numeros) {
    std::unordered_map<int, int> contador;
    for (int i = 0; i < N; i++) {
        contador[numeros[i]]++;
        if (contador[numeros[i]] >= K) {
            return numeros[i];
        }
    }
    return -1; // Si no se encuentra ningún número que aparezca al menos K veces
}

int main() {
    int N, K;
    std::cout << "Ingrese la cantidad de números (N): ";
    std::cin >> N;
    std::cout << "Ingrese el número mínimo de repeticiones (K): ";
    std::cin >> K;

    std::vector<int> numeros(N);
    std::cout << "Ingrese los números separados por espacios: ";
    for (int i = 0; i < N; i++) {
        std::cin >> numeros[i];
    }

    int numeroMinimo = obtenerNumeroMinimo(N, K, numeros);
    if (numeroMinimo != -1) {
        std::cout << "El número mínimo que aparece al menos " << K << " veces es: " << numeroMinimo << std::endl;
    } else {
        std::cout << "No se encontró ningún número que aparezca al menos " << K << " veces." << std::endl;
    }

    return 0;
}

