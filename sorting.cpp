#include <iostream>

using namespace std;

int main() {

    int Array[10] = {6, 5, 4, 3, 7, 8, 9, 2, 1, 0};
    int array2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int max = 0, newPos = 0;

    for(int i = 0; i < 10; i++){
        if (Array[i] > max){
            max = Array[i];
            //array2[newPos] = Array[i];
        }
    }

    for (int j = 0; j < 10; j++)
    cout << array2[j];

return 0;
}