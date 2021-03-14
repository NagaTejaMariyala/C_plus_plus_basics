
//Usage of conditional operator

#include<iostream>
#define NDEBUG
#include<cassert>

using namespace std;

int main()
{
	int x = 0,y = 5;

	for(x=0;x<10;x++)
	{
	cout << "x=" << x << "y=" << y << endl;
	assert(x<y);
}
	cout << endl;
	return 0;
}
