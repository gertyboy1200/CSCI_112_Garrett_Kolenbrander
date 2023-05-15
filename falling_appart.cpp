#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int numOfPieces, alice = 0, bob = 0, counter = 0;
    cin >> numOfPieces;
    int partsArr[numOfPieces];
    for (int i = 0; i < numOfPieces; i++){
        cin >> partsArr[i];
    }

    sort(partsArr, partsArr + numOfPieces);
    
    for (int i = (numOfPieces - 1); i >= 0; i--){
        if (counter % 2 == 0){
            alice = alice + partsArr[i];
            counter++;
        } else {
            bob = bob + partsArr[i];
            counter++;
        }
    }

    cout << alice  << " " << bob;
    
    return 0;
}