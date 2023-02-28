#include <iostream>

using namespace std;

int main() {

    int R, C, Zr, Zc, temp ;
    cin >> R >> C >> Zr >> Zc;
    char mrMoneyBags[R][C];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++){
            cin >> mrMoneyBags[i][j];
        }
    }




    for (int l = 0; l < C; l++) {
        for (int k = 0; k < Zr; k++){
            for (int m = 0; m < R; m++){
                for (int n = 0; n < Zc; n++){
                    cout << mrMoneyBags[l][m];   
                }
            }
                cout << endl;
        }
    }


    


    return 0;
}