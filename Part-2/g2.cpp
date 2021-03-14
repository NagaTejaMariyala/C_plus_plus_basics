
#include<iostream>

using namespace std;

int main()
{
    string s;

    cout << "Enter a line :\n";
    getline(cin,s);

    for(string::size_type i=0;i<s.size();i++)
    {
        cout << s.at(i) << " ";
    }
    cout << endl;
}
