/* My first c++ program */

#include<iostream>
using namespace std;

namespace ns1
{
	const double pi = 3.14;
	int value(){ return 9; }
}

namespace ns2
{
	const double pi = 3.1416;
	double value() { return 2 * pi; }
}

namespace first
{
	int x = 5; int y = 10;
}

namespace second
{
	double x = 3.1416;
	double y = 2.7233;
}

int main()
{
	cout << "\tOm Sri Sai Ram\n"  << "\t\tWelcome to C++ Learning"\
	"\n"	;

//	cout << ns1::pi << "\n";
//	cout << ns1::value() << "\n";

//	cout << ns2::pi << "\n";
//	cout << ns2::value() << "\n";

	using first::x;
	using second::y;

	cout << x <<"\n" << y << "\n";
	cout << first::y << "\n" << second::x;
	cout << "\n";
	return 0;
}
