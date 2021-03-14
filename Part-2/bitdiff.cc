
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    string s1,s2;

    cout << "Enter Bitvector1 : ";
    cin >> s1;

    cout << "Enter Bitvector2 : ";
    cin >> s2;

    bitset<32> b1(s1),b2(s2);

    bitset<32> b3;

    b3=b1^b2;

    cout << "The number of bits that differ Bitvector2 from Bitvector1 are " << b3.count() << endl;
	return 0;
}
