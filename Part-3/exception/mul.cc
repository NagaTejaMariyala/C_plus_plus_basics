
#include<iostream>
using namespace std;

void function(int x)
{
    try
    {
        if(x==1) throw x;
        else
            if(x==0) throw 'x';
            else
                if(x==-1) throw 1.0;
        cout << "End of try block" << endl;
    }

    catch(char c) { cout << "Character " << endl; }
    catch(int m) { cout << "Integer " << endl; }
    catch(double d) { cout << "Double " << endl; }
    cout << "End of function\n " << endl;
}

int main()
{
    cout << endl;
    cout << " x==1 " <<  endl;          function(1);
    cout << " x==-1 " <<  endl;          function(-1);
    cout << " x==0 " <<  endl;          function(0);
    cout << " x==3 " <<  endl;          function(3);
	return 0;
}
