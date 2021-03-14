
#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int v1 = 512,v2 = 1024;
    int n1,n2;

    ostringstream mess;

    mess << "v1: " << v1 << endl << "v2: " << v2 << endl;

    cout << mess.str() << endl;

    istringstream in(mess.str());

    string s1,s2;

    in >> s1 >> n1 >> s2 >> n2;

    cout << n1 << "  " << n2 << endl;
    cout << s1 << "  " << s2 << endl;


	return 0;
}
