//Test program

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char c[50];
	cout << "Enter text " << endl;
	cin.getline(c,50);
	cout << c <<  endl;
	cout << "String length " << strlen(c) << endl;

	cout << "Enter text " << endl;
	cin.getline(c,50,'#');
	cout << c <<  endl;
	return 0;
}
