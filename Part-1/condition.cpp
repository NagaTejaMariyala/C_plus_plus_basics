//Usage of conditional operator

#include<iostream>

using namespace std;

int main()
{
	int x,y,max;

	cout << "Enter two numbers : ";
	cin >> x >> y;

	
	//cout << "Maximum of the two numbers is : " << (x>y?x:y) << endl;
	(x>=y ? (x==y ? cout << x << " = " << y:cout << x << " > " << y):cout << x << " < " << y);
	cout << endl;
	return 0;
}
