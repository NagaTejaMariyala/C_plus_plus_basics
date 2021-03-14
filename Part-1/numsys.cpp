// Program 

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	cout << "default bool values: " << true << " " << false\
		<< "\nalpha bool values: " << boolalpha << true << " " << false << endl;

	bool bool_val = true;
	cout << boolalpha << bool_val << noboolalpha << endl;

	int ival = 15, jval = 1024;
	cout << "Values of i and j are " << ival << " and " << jval << endl;
	cout << "Values of i and j are " << oct << ival << " and " << jval << endl;
	cout << "Values of i and j are " << hex << ival << " and " << jval << endl;
	cout << "Values of i and j are " << dec << ival << " and " << jval << endl;

{
	int ival = 15, jval = 1024;
	cout << "Values of i and j are " << oct << showbase << uppercase << ival << " and " << jval << endl;
	cout << "Values of i and j are " << hex << ival << " and " << jval << endl;
	cout << "Values of i and j are " << dec << ival << " and " << jval << endl;
}

{
	int ival = 15, jval = 1024;
	cout << "Values of i and j are " << oct << nouppercase << ival << " and " << jval << endl;
	cout << "Values of i and j are " << hex << ival << " and " << jval << endl;
}

{
	int ival = 15, jval = 1024;
	cout << "Values of i and j are " << oct << noshowbase << ival << " and " << jval << endl;
	cout << "Values of i and j are " << hex << ival << " and " << jval << endl;
}
	return 0;
}
		
