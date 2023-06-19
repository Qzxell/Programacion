#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> leftShoes(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> leftShoes[i];
    }

    std::vector<int> rightShoes(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> rightShoes[i];
    }

    std::sort(leftShoes.begin(), leftShoes.end());
    std::sort(rightShoes.begin(), rightShoes.end());

    int maxBalance = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        int balance = std::abs(leftShoes[i] - rightShoes[j]);
        maxBalance = std::max(maxBalance, balance);

        if (leftShoes[i] < rightShoes[j]) {
            ++i;
        } else {
            ++j;
        }
    }

    std::cout << maxBalance << std::endl;

    return 0;
}

