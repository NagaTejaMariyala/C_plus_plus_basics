
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v(10);
    int i,x;

    for( i=0;i<10;i++)
    {
        cin >> x;
        v.push_back(x);
    }   

    vector<int>::iterator it;
    for( it=v.begin();it!=v.end();it++)   cout << *it << " "; cout << endl;

	return 0;
}
