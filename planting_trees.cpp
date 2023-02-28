#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, maxDay = 0;

    cin >> N;

    int times[N];

    for (int i = 0; i < N; i++){
        cin >> times[i];
    }
   
    sort(times, times + N); 

    reverse(times, times + N);

    for (int i = 0; i < N; i++){
        if ((times[i] + i) > maxDay){
            maxDay = (times[i] + i);
        }
    }

    cout << maxDay + 2;

    return 0;
}