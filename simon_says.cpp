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


