
#include<iostream>
using namespace std;

class MyException
{
    public:
        const char *what()
        {
            return "Divide by Zero!!!\n";
        }
};


int main()
{
    float a,b;

    cout << "Enter two numbers (end-of-file): " ;
    while(cin >> a >> b)
    {
        try
        {
            if(b!=0)
                cout << "a/b = "  << a/b << endl;
            else
                throw MyException();
        }

        catch(MyException a)
        {
            cout << "Exception : ";
            cout << a.what();
        }
    cout << "Enter two numbers (end-of-file): " ;
    }
    cout << endl;
	return 0;
}
