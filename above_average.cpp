#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int C, N, score = 0;
    double sum = 0.0, percent = 0.0,  averageScore = 0, aboveAverageStudents = 0;

    cin >> C;

    for(int i = 0; i < C; i++){
        cin >> N;
        int scores[N];
        sum = 0;
        for(int j = 0; j < N; j++){
            cin >> score;
            scores[j] = score;
            sum += score;
        }
        averageScore = sum / N;
        for(int k = 0; k < N; k++){
            if(scores[k] > averageScore){
                aboveAverageStudents++;
            }

        }
        percent = aboveAverageStudents / N;
        cout << fixed << setprecision(3) << percent * 100 << "%" << endl;
        aboveAverageStudents = 0;

    }
    
    return 0;
}