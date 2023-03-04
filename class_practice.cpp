#include <iostream>

using namespace std;

class A {
    int x;
    float y;
    public:
    A() { //constructor
        x = 0;
    }

    void fun() { // functional member function
        cout << x << endl;
    }

    friend ostream & operator <<(ostream &out, const A &other) { // functional member output is passed by reference. FRIEND tells it something you can pass into the operator
        out << other.x << endl;
    }
};

class B:public A { //B is the superclass of A


};
     
int fun(int x) {
    x++;
    return x;
}

int main() {
    try {
        int x = 0;
        fun(x);
        if (y==5) Throw A;
        cout << x<< endl; // outputs 0

    } catch (A &a){
        cout << a;
    }


//try catch and throw;


}