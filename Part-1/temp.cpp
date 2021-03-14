

#include<iostream>
using namespace std;

template < class t >
t maximum(t a, t b, t c)
{
	t max =a;
	if(b > max) max=b;
	if(c > max) max=c;
}

int main()
{
	int in[2];
	cout << "Enter three integer values: " ;
	cin >> in[0] >> in[1] >> in[2];
	cout << "The maximum is : "
		<< maximum( in[0],in[1],in[2]) << endl;

	double dn[2];
	cout << "Enter three double values: " ;
	cin >> dn[0] >> dn[1] >> dn[2];
	cout << "The maximum is : "
		<< maximum( dn[0],dn[1],dn[2]) << endl;

	char cn[2];
	cout << "Enter three characters values: " ;
	cin >> cn[0] >> cn[1] >> cn[2];
	cout << "The maximum is : "
		<< maximum( cn[0],cn[1],cn[2]) << endl;

	string sn[2];
	cout << "Enter three string values: " ;
	cin >> sn[0] >> sn[1] >> sn[2];
	cout << "The maximum is : "
		<< maximum( sn[0],sn[1],sn[2]) << endl;
	return 0;
}
