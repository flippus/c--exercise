#include <iostream>
#include <math.h>

using namespace std;

void printArray(int *array, int length) {
		
			for (int i=0; i<length; i++) {
				cout << array[i] << endl;
			}
	
}

int main (int argc, char *argv[]) {

    //TODO: try to find a method for the length of an array in c++
    // looks like c code
	int myArray[6] = {6, 5, 4, 3, 2, 1};
	printArray(myArray, sizeof(myArray)/4); 


}
