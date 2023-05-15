#include <iostream>
#include <algorithm>

using namespace std;

int main() {

int people, trees;
cin >> people  >> trees;
int matrix[people][trees];
int totals[people];


for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        matrix[n][m] = 0;
    }
}
cout << endl;
for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        cout << matrix[n][m] << " ";
    }
    cout << endl;
}

//int treeArr[trees];

int i, j;

while(cin >> i >> j) {
    matrix[i-1][j-1] = j;
}

for (int i = 0 ; i < people; i++)
    sort(matrix[i], matrix[i] + people);


for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        cout << matrix[n][m] << " ";
    }
    cout << endl;
}





for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        totals[n] = totals[n] + matrix[n][m];
    }
}
/*
for(int k = 0; k < people; k++)
cout << totals[k] << endl;
*/





//while(cin >> x) {
    
//}



    return 0;
}