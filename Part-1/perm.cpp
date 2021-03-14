

#include<iostream>
#include"head.h"

using std::cin;
using std::cout;
using std::endl;


int main()
{
	int i,n,r;

	cout << "Enter value of n : ";
	cin >> n;
	cout << "Enter value of r : ";
	cin >> r;

	if(n<r)
		cout << "Input error\n";
	else
	{
		i=perm(n,r);
		cout << "The number of permutatons (nCr) is : " << i << endl;
	}
	return 0;
}
