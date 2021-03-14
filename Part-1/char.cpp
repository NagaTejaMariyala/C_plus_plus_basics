// Counting characters

#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	char c;
	int uc=0,lc=0,dig=0,pc=0,ws=0;

	while(cin.get(c))
	{

	if(isupper(c))
		uc++;
	if(islower(c))
		lc++;
	if(isdigit(c))
		dig++;
	if(isprint(c))
		pc++;
	if(isspace(c))
		ws++;
	}

	cout << "Number of uppercase characters are " << uc << endl;
	cout << "Number of lowercase characters are " << lc << endl;
	cout << "Number of digits are " << dig << endl;
	cout << "Number of printable characters are " << pc << endl;
	cout << "Number of whitespace characters are " << ws << endl;

	return 0;
}
