
#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    string s1("we can insert a string."),s2("a string into "),s;

    s=s1;
    s1.insert(14,s2);

    cout << s1 << endl;

    s1=s;
    s2=s2.substr(9,5);
    s1.insert(14,s2);
    cout << s1 << endl;

    s1=s;
    s1.insert(16,1,' ');
    s1.insert(16,9,'#');
    cout << s1 << endl;
	return 0;
}

