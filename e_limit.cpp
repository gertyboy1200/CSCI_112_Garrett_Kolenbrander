#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double i = 1.0;
    double e;

    while (i > 0){
        cout << fixed << setprecision(20) << e << endl;
        i++;
        e = pow((1 + (1 / i)), i);
    }

    

    return 0;
}