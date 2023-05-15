#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int p, t;
    cin >> p >> t;
    int count = 0;
    bool treesFell[p][t];
    bool opinions[p];
    bool match = false;
    memset(opinions, false, sizeof(opinions));
    memset(treesFell, false, sizeof(treesFell));
    int i, j;
    /*
    
    while (cin >> i >> j){
        treesFell[i - 1][j - 1] = true;
    }
    */
   for (int z = 0; z < 6; z++){
    cin >> i >> j;
    treesFell[i-1][j-1] = true;
   }

   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << treesFell[i][j] << " ";
        }
        cout << endl;
   }

   for(int i = 0; i < t - 1; i++){
        for(int j = 0; j < t; j++){
            opinions[j] = treesFell[i][j];
        }


        for(int k = 0; k < t; k++){
            cout << opinions[k] << " ";
        }
        cout << endl;

        for(int m = 0; m < t; m++){
            bool match = true;
            for (int n = 0; n < t; n++){
                if (treesFell[n][i] != treesFell[n][m]){
                    match = false;
                    break;
                }
            }
            if(match){
                count++;
                break;
            }
        }
        count++;
   }

/*
    for (int k = 0; k < p; k++){
        bool opinions[t];
        memset(opinions, 0, sizeof(opinions));
        for(int l = 0; l < t; l++){
            opinions[l] = treesFell[k][l];
        }
        
        for(int m = 0; m < k; m++){
            bool match = true;
            for (int n = 0; n < t; n++){
                if (treesFell[n][k] != treesFell[n][m]){
                    match = false;
                    break;
                }
            }
            if(match){
                count--;
                break;
            }
        }
        count++;
    }
*/

    cout << count << endl;


    return 0;
}