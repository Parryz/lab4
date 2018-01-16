#include <iostream>
#include <cmath>
using namespace std;

int findDivisor(int n)
{
	int i=2;
	while (n%i!=0)
	{
		i++;
	}
	return i;
}

main()
{
	int n;
	cout<< "Enter n:";
	cin >> n;
	cout<< "Divisor ="<< findDivisor(n);
}
