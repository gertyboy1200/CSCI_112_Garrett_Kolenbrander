#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, P;
    string discription;
    
    cin >> N >> P;
    
    for (int i = 0; i < N; i++)
        cin >> discription;
    cout << P << endl;
    
    return 0;
}