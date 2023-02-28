#include <iostream>
#include <algorithm>
#include<cmath>

using namespace std;

int main() {
    int V, length, width, height, temp, temp2;
    cin >> V;
    int surfaceArea = pow(10, 6);
    for (int i = 1; i <= V; i++) {
        temp = V;
        if (temp % i == 0) {
            length = i;
            temp = temp / i;
            for (int j = 1; j <= temp; j++) {
                temp2 = temp;
                if (temp2 % j == 0) {
                    width = j;
                    temp2 = temp2 / j;
                    height = temp2; 
                    cout << surfaceArea << endl;
                    surfaceArea = min(surfaceArea, 2 * (length * height + height * width + length * width));

                }
            }
        }
    }
    cout << surfaceArea;
    return 0;
}




/*




*/