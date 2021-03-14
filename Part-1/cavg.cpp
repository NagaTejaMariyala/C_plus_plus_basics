// Program to find average of any no of inputs


#include<iostream>

using std::cin;
using std::endl;
using std::cout;

int main()
{

	int i;
	float num,sum;

	cout << "Enter the values : " << endl ;
	//for(i=0,sum=0; cin >> num; i++,sum+=num);

	i=0; sum=0;
	for(;;)
	{

	if (cin >> num)
	{
	i++;
	sum+=num;
	}
	else
		break;
	}

	float avg =sum/i;

	cout << "The average is " << avg << endl ;

	return 0;
}
