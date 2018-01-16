#include <iostream>
#include <cmath>
using namespace std;

main()
{
	double y ,x;
	
	cout<<"Enter x =";
	cin >> x;
	
	y=(3*x*x*x) + (2*exp(1.0)) + pow(2,2*x+1) + sqrt(x*x+1);
	
	cout<< "Result y=" <<y;
}
