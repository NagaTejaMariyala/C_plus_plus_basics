// Program to print sum and average of two numbers


#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{

	float num1,num2;
	float sum,avg;

	//num1 = 3.6;
	//num2 = 4.4;
	

	cout << "Enter the numbers ";
	cin >> num1 ;
	cin >> num2 ;

	sum = num1+num2;
	avg = sum/2;

	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "\n" ;
	cout << "The average of " << num1 << " and " << num2 << " is " << avg << "\n" ;
}
