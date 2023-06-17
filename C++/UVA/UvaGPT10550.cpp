#include <iostream>
using namespace std;

int main() {
    int dial, num1, num2, num3;
    
    while (cin >> dial >> num1 >> num2 >> num3) {
        if (dial == 0 && num1 == 0 && num2 == 0 && num3 == 0)
            break;
        
        int degrees = 1080; // 2 full turns (360 * 2)
        
        // Calculate the distance for the first number
        degrees += ((dial - num1 + 40) % 40) * 9;
        
        // Calculate the distance for the second number
        degrees += ((num2 - num1 + 40) % 40) * 9;
        
        // Calculate the distance for the third number
        degrees += ((num2 - num3 + 40) % 40) * 9;
        
        cout << degrees << endl;
    }
    
    return 0;
}

