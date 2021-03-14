
#include<iostream>

using namespace std;

int main()
{
    string s("Testing Iterators" );

    string::iterator i = s.begin();

    cout << s << endl;

    while(i!= s.end() )
    {
        cout << *i;
        ++i;
    }
    cout << endl;

    for(string::iterator it = s.begin();it != s.end();++it)
        cout << *it;

    cout << endl;

	return 0;
}

