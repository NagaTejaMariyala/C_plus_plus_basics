
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v2,v1(5);
    int i,x;

    for( i=0;i<3;i++)
    {
        cin >> x;
        v1.push_back(x);
    }   

    if(v1.size()==0)
        cout << "The vector v1 is empty\n";
    else
        cout << "The vector v1 is nonempty\n";

    if(v2.empty())
        cout << "The vector v2 is empty\n";
    else
        cout << "The vector v2 is nonempty\n";

    cout << "Capacity of v1 is : " << v1.capacity();
    cout << "Capacity of v2 is : " << v2.capacity();
	return 0;
}

