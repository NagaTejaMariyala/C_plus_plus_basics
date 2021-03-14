// Random number generation

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int s;

	srand(time(0));	
	cout << rand() % 15 << endl; // Generate random number from 0 to 14
	cout << 1+ rand() % 6 << endl; // Generate random number from 1 to 6
	cout << RAND_MAX << endl;

	return 0;
}
