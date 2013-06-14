#include <iostream>

using namespace std;

int main(){
    char *oddOrEven = "Never odd or even";
    
    char *nthCarPtr;
    
    nthCarPtr = &oddOrEven[5];
    
    nthCarPtr = nthCarPtr - 2;
    cout << nthCarPtr << "\n";
    
    char **pointerPtr = &nthCarPtr;
    cout << pointerPtr << "\n";
    
    cout << *pointerPtr << "\n";
    
    nthCarPtr = nthCarPtr + 1;
    
    // /sizeof(char) useless, because char == 1 byte
    cout << nthCarPtr - oddOrEven << "\n";
}
