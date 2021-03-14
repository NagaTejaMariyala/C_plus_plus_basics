
#include<iostream>
using namespace std;

int main()
{
    float a,b;

    cout << "Enter two numbers : " ;
    cin >> a >> b;

    try
    {
        if(b!=0)
            cout << "a/b = "  << a/b << endl;
        else
            throw(b);
    }

    catch(float b)
    {
        cout << "Exception : Divide by Zero \n";
    }
	return 0;
}
