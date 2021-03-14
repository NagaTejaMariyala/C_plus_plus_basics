
#include<iostream>
using namespace std;

class MyException
{
    public:
        const char *what()
        {
            return "C++ Exception";
        }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch(MyException a)
    {
        cout << "MyException caught\n";
        cout << a.what() << endl;
    }
	return 0;
}
