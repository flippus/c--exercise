#include <iostream>

/*  In this code  we review the concept of method
 *  overloading. We write two methods, both of them
 *  called sum. The first one simply returns the 
 *  arithmetic sum of two integers, while the other
 *  performs the sum of two "times". To sum two times,
 *  it is necessary to define previously the proper
 *  datatype (typedef struct t_time) and implement
 *  the carry-value logic within the sum method
 * 
 *  In the main() function, we create the object
 *  and exercise the overloaded sum methods.
 */

using namespace std;

typedef struct {
 int days;
 int hours;
 int minutes;
 int seconds;
} t_time;
 
class base1 {
	public:

 		int sum(int x, int y) { 
			return x + y;
		}

 		t_time sum(t_time x, t_time y) { 

          // http://stackoverflow.com/questions/1069621/are-members-of-a-c-struct-initialized-to-0-by-default
		  t_time temp = {};
		  		  
		  temp.seconds = x.seconds + y.seconds;	   
		  if(temp.seconds >= 60) {
		   temp.minutes++;
		   temp.seconds = temp.seconds % 60;
		  }

		  temp.minutes += x.minutes + y.minutes;	
		  if(temp.minutes >= 60) {
		   temp.hours++;
		   temp.minutes = temp.minutes % 60;
		  }

		  temp.hours += x.hours + y.hours;	 
		  if(temp.hours >= 24) {
		   temp.days++;
		   temp.hours = temp.hours % 24;
		  }

		  temp.days += x.days + y.days;

   	      return temp;
		}


};
 

int main() {
 
  base1 b1;
  int x, y, z;
  t_time a, b, c;
  x = 5;
  y = 6;

  a.days = 0;	
  a.hours = 1;	 
  a.minutes = 2;	
  a.seconds = 3;	

  b.days = 0;	
  b.hours = 1;	 
  b.minutes = 2;	
  b.seconds = 3;	
 
  z = b1.sum(x, y);
  c = b1.sum(a, b);
  cout << "\n integers ";
  cout << z;
  cout << "\n reals ";  
  cout << c.minutes;
  return 0;
 }
