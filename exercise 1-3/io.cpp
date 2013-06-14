#include "io.h"
#include <iostream>
using namespace std;

IO::IO(){
    x = 0;
    y = 0;
}

void IO::readNumber(){
    cin >> x >> y;
}

void IO::writeAnswer(){
    int r = x+y;
    cout << r;
}
