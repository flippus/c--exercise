#include <iostream>

using namespace std;

int main(){
    int a,b,c, *d, *e, &f=a, &g=c;
    a = 5;
    b = 4;
    d = &c;
    e = &a;
    g = 7;
    *d = *d + *e + 1;
    g++;
    f++;
    int h, *k, &j=h;
    h = 10;
    *k = 13;
    j++;
    b = f + g + h;
    f++;
    *d = a + j;
}
