
//Usage of conditional operator

#include<iostream>

using namespace std;

int main()
{
	int x,y,max;

	cout << "Enter number of mangoes: ";
	cin >> x ;
	cout << "Enter number of apples: ";
	cin >> y;

	((x<0||y<0)?cout << "Error in input\n":(x+y==1?cout <<  "There is 1 fruit in total\n" : cout << "There are " << x+y << " fruits in total\n"));
	return 0;
}
