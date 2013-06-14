#include <string>
#include <iostream>
using namespace std;

// pointer and integer testing
int main(){
    int x = 10;
    cout << "x-value: " << x << "\n";
    cout << "x-memory-position: " << &x << "\n";
    
    int *p;
    p = &x;
    *p = 100;
    
    cout << "pointer-value: " << p << "\n";
    cout << "value of int of pointer: " << *p << "\n";
}
