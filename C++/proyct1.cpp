#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move from " << source << " to " << destination << "." << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move from " << source << " to " << destination << "." << endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        char S, D;
        cin >> N >> S >> D;

        char A = 'A', B = 'B', C = 'C';
        
        towerOfHanoi(N, S, D, (A != S && A != D) ? A : (B != S && B != D) ? B : C);
        cout << "Done!" << endl ;
    }

    return 0;
}

