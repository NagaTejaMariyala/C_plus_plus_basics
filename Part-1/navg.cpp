// Program to find average of n numbers


#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

	int no,i;
	float num, sum=0;

	cout << "Enter the no. of values : " << endl ;
	cin >> no ;

	for (i=0; i<no; i++)
	{
	
	cout << "Enter the value " << i+1 << " :" << endl ;
	cin >> num ;

	sum+=num;
	}

	float avg = sum/no;

	cout << "The sum is " << sum << endl ;
	cout << "The average is " << avg << endl ;
}

