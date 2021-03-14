
#include<iostream>

using namespace std;

int main()
{
    float* p;

    float x=4.321;

    p=&x;
    cout << p << "\t" << &x << "\t" << *p << endl;

    float *q;

    q=new float;

    *q=3.141;

    cout << q << "\t" << *q << endl;
	return 0;
}
