#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    string line;
    string testLine = "simon says ";
    int T;
    cin >> T;

    for(int i = 0; i < T+1; i++){
        getline(cin, line);
        
    size_t pos = line.find(testLine);
    if (pos != string::npos) {
        // erase the substring from the longer string
        line.erase(pos, testLine.length());
        cout << line << endl;
    } else {
        cout << endl;
    }
    


    }


    return 0;
}






/*
int main() {
    const int MAXVALUE = 1000;
    int T, k = 0, length, count = 0;
    char testArr[9] = {'s', 'i', 'm', 'o', 'n', 's', 'a', 'y', 's'};
    char l;
    string line[T];
    //string spiltLine[40];
    cin >> T;
    string dummy, s;
    getline(cin, dummy);
    
    for (int i = 0; i < T; i++){
        getline(cin, line[i]);
        s = line[i];
        length = s.length();
        char charArr[length];
        strcpy(charArr, s.c_str());
        for(int j = 0; j < 10; j++){
            if(charArr[j] == testArr[j]){
                count++;
            }else if(count == 10){
                //cout << s.substr(10, length);
                break;
            }
        }
        cout << s.substr(11, length);
    }
    
    return 0;
}
*/