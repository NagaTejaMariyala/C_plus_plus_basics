//Test file

#include<iostream>
using namespace std;

int main()
{
	char c;
	int m,n;
//	char h=cin.get();
//	cout << c << "   " << h << endl;


	while (cin.get(c))
	{
	if(isdigit(c))
	{
	cin.putback(c);
	cin >> m;
	n+=m;
	}
	if(c=='\n')
		break;
	}
	cout << "sum  = " << n << endl;

	return 0;
}
