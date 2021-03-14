
#include<iostream>
#include<stdexcept>
using namespace std;

void divide(float a,float b)
{
    cout << "Inside function : " <<  endl;

    if(b!=0)
        cout << "a/b = "  << a/b << endl;
    else
        throw runtime_error("Divide by Zero");
}
int main()
{
    float a,b;

    cout << "Enter two numbers : " ;
    cin >> a >> b;

    try
    {
        cout << "Try block: ";
        divide(a,b);
    }

    catch(runtime_error b)
    {
        cout << "Exception occured : "<< b.what() << endl;
    }
	return 0;
}
