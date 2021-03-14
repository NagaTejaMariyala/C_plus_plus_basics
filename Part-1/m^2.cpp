// Macro usage for square 

#include<iostream>
using namespace std;

#define sq(x) ((x)*(x))  //macro



int main()
{
	int x,s;

	cout << "Enter a number : " << endl;
	cin >> x;
	cout << "It's square is : " << sq(x) << endl;

	return 0;
}
