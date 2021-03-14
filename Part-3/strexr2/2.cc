
#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    string s;

    cout << "Enter the string : \n";
    getline(cin,s);
    for(string::iterator it = s.begin();it != s.end();++it)
    {
        if(isupper(*it))
        {
            s.erase(it,it+1);
            it--;
        }

    }

    cout << s << endl;

	return 0;
}

