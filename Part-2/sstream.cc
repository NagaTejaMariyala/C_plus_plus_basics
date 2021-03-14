
#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string input("input test 123 4.6 Q 39 sai");
    istringstream in( input );
    string s1,s2;
    int i;
    double d;
    char c;

    in >> s1 >> s2 >> i >> d >> c;

    cout << "The following items were extracted\n"
        << "from the istringstream object:"
        << "\nstring : " << s1
        << "\nstring : " << s2
        << "\n   int : " << i
        << "\ndouble : " << d
        << "\n  char : " << c;

    long x;
    in >> x;

    if( in.good() )
        cout << "\n\nlong value is : " << x << endl;
    else
        cout << "\n\ninputstring is empty\n";

	return 0;
}


