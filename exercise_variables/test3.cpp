#include <iostream>

using namespace std;

int main(){
    int a, *b, c=&a, *d, f, g=&f;
    c = 10;
    b = 4;
    a = a + 1;
    f = a + b;
    d = new int;
    *d = 20;
    g = g + a;
    b = &a;
    *b = d* + g;
    f++;
    d = &f;
    b = d;
    *b = a + f;
    *d = *d + a;
    f = a + *b + *d +c;
    c++;
}
