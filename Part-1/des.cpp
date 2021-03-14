
#include<iostream>

using namespace std;

int cnt=0;

class sample
{
    public:
        sample()
        {
            cnt++;
            cout << "Object " << cnt << "Created " << endl;
        }
        ~sample()
        {
            cout << "Object " << cnt << "Destroyed " << endl;
            cnt--;
        }
};

int main()
{
    cout << "Main Program " << endl;
    sample a,b,c,d;
    {
        cout << "Block 1 " << endl;

        sample e,f;
    }
    cout << "Between the blocks " << endl;
    sample h,i;
    {
        cout << "Block 2" << endl;
        sample g;
    }
    cout << "End Program" << endl;
    sample j;
}
