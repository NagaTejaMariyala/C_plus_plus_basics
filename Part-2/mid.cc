
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    int i,x;

    for( i=0;i<5;i++)
    {
        cin >> x;
        v.push_back(x);
    }   

    vector<int>::iterator it=v.begin()+v.size()/2;

    cout << *it << endl;
	return 0;
}

