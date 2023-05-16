#include <iostream>
#include <fstream>


using namespace std;

void printMatrix(int fullMattrix[][5]);

int main(){
    int people, trees, person, tree;
    

    int fullMatrix[people][trees];
    while(cin >> person >> tree){
        fullMatrix[person][tree] = 1;
    }
    printMatrix(fullMatrix);

    cout << "program did not exit";



}


void printMatrix(int fullMattrix[][5]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++)
            cout << fullMattrix[i][j] << " ";
        cout << endl;f
    }

}










































/*
int main() {
    //system("clear");
int people, trees;
double total;

cin >> people  >> trees;

double matrix[people][trees];
double totals[people];


for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        matrix[n][m] = 0;
    }
}
/*
cout << endl;
for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        cout << matrix[n][m] << " ";
    }
    cout << endl;
}

int i, j;

while(cin >> i >> j) {
    matrix[i-1][j-1] = j;
}

for(int f = 0; f < people; f++) {
    total = 1;
    for (int g = 0 ; g < trees; g++){
        if(matrix[f][g] != 0){
            total = total / matrix[f][g];
        }
    }
    totals[f] = total;
}

*/
/*
for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        cout << matrix[n][m] << " ";
    }
    cout << endl;
}

for(int a= 0; a < people; a++){
    cout << totals[a] << " ";
}

int res = 1;

    for (int i = 1; i < people; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (totals[i] == totals[j])
                break;
        if (i == j)
            res++;
    }

    cout << endl << res << endl;
*/


/*
for(int n = 0; n < people; n++){
    for(int m = 0; m < trees; m++){
        totals[n] = totals[n] + matrix[n][m];
    }
}


/*
for(int k = 0; k < people; k++)
cout << totals[k] << endl;






//while(cin >> x) {
    
//}

    return 0;
}

*/