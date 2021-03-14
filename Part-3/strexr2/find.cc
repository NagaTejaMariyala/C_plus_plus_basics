
#include<iostream>

using namespace std;

int main()
{
    string s1("ab2c3d7R4E6"),s2("0123456789");
    int count=0,pos=0;


    for(pos=0;s1.find_first_of(s2,pos)!=string::npos;pos++)
    {
        pos=s1.find_first_of(s2,pos);   
        cout << "The digit " << s1[pos] << " is found at " << pos << endl;
    }


    for(pos=0;s1.find_first_not_of(s2,pos)!=string::npos;pos++)
    {
        pos=s1.find_first_not_of(s2,pos);   
        cout << "The alphabet " << s1[pos] << " is found at " << pos << endl;
    }


	return 0;
}
