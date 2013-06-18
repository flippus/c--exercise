#include <iostream>
#include <math.h>

using namespace std;

class myClass {

	public:
		double ang;
		double sin_;
		double cos_;
		
		void getSinCos(double &dAngle, double &dSin, double &dCos) {
		
			dSin = sin(dAngle);
			dCos = cos(dAngle);

		};
	
};

int main (int argc, char *argv[]) {

	myClass myObject;
	myObject.ang = 45.0;
	myObject.sin_ =  0.0;
	myObject.cos_ =  0.0;

    myObject.getSinCos(myObject.ang, myObject.sin_, myObject.cos_);

	cout << "\nMy angle ang is " << myObject.ang <<endl;
	cout << "\nSin (angle) is " << myObject.sin_ <<endl;
	cout << "\nCos (angle) is " << myObject.cos_ <<endl;
}
