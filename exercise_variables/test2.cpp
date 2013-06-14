#include <iostream>

using namespace std;

int main(){
    int a, b, c, *d, *e, &f=a, &g=c;
    a = 5;
    b = 4;
    // d = 0
    d = &c;
    // e = a = 5
    e = &a;
    // g = c = 7 = d
    g = 7;
    // d = 7 + 5 + 1 = 13 = g = c
    *d = *d + *e + 1;
    // g = c = 14
    g++;
    // f = a = 6 = e
    f++;
    int h, *k, &j=h;
    h = 10;
    // Doesn't work, probably because k has no memory value
    //*k = 13;
    // j = 11
    j++;
    // b = 6 + 14 + 11 = 31
    b = f + g + h;
    // f = a = 7
    f++;
    //d = 7 + 11 = 18
    *d = a + j;
}
