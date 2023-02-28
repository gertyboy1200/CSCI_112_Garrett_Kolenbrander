#include <iostream>

using namespace std;

int main() {
    int T, n, sum = 0, task;

    cin >> n >> T;

    int i = 0;

    while (i < n) {
        cin >> task;
        sum += task;
        
        if (sum > T) {
            break;
        }

        i++;
    }

    cout << i;
    
    return 0;
}