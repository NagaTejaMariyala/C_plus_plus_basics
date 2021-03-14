
//Usage of conditional operator

#include<iostream>

using namespace std;

int main()
{
	int x,y,z,max;

	cout << "Enter three numbers : ";
	cin >> x >> y >> z;

	
	cout << "Maximum of the three numbers is : " ;//<< (x>y?x:y) << endl;
	//(x>=y ? (x==y ? cout << x << " = " << y:cout << x << " > " << y):cout << x << " < " << y);
	cout << (x > y? (x > z? x: z) :(y > z? y: z));
	cout << endl;
	return 0;
}
