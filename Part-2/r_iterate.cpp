
#include<iostream>

using namespace std;

int main()
{
    string s("Testing Iterators" );

    string::reverse_iterator i = s.rbegin();

    cout << s << endl;

    while(i!= s.rend() )
    {
        cout << *i;
        ++i;
    }
    cout << endl;

    for(string::reverse_iterator it = s.rbegin();it != s.rend();++it)
        cout << *it;

    cout << endl;

	return 0;
}

