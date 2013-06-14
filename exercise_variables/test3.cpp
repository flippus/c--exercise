#include <iostream>

using namespace std;

int main(){
    // can't work, becuase  c and g aren't pointers
    //int a, *b, c=&a, *d, f, g=&f;
    int a, *b, c, *d, f, g;
    c = 10;
    // can't work, b is a pointer
    //b = 4;
    // a = random number?!
    a = a + 1;
    //impossible, b is a pointer
    //f = a + b;
    // d = 0
    d = new int;
    // d = 20
    *d = 20;
    // g = 0 + a
    g = g + a;
    // b points now to the memory position of a; b = a
    b = &a;
    // b = 20 + a
    *b = *d + g;
    // f = random number
    f++;
    // d points now to the memory position of f; d = f
    d = &f;
    // impossible, d is a pointer
    //b = d;
    // value of b is now random
    *b = a + f;
    // d = random
    *d = *d + a;
    // f = random
    f = a + *b + *d +c;
    // c = 11
    c++;
}
