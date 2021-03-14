
// Random number generation

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int s,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;

	srand(time(0));
	
	for( int i=0; i<6000; i++)
	{	
	switch (1+ rand() % 6)
	{
	case 1 :
		a1++;
		break;
	case 2 :
		a2++;
		break;
	case 3 :
		a3++;
		break;
	case 4 :
		a4++;
		break;
	case 5 :
		a5++;
		break;
	case 6 :
		a6++;
		break;
	}
	}
	cout << "The number of times of occurence of digits is as follows :\n";
	cout << "1  :  " << a1 << endl;
	cout << "2  :  " << a2 << endl;
	cout << "3  :  " << a3 << endl;
	cout << "4  :  " << a4 << endl;
	cout << "5  :  " << a5 << endl;
	cout << "6  :  " << a6 << endl;
	return 0;
}
