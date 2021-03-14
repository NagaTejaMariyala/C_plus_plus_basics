
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int a[10];
    vector<int> v(10);

    for(int i=0;i<10;i++)   cin >> a[i];
    for(int i=0;i<10;i++)   cin >> v[i];

    for(int i=0;i<10;i++)   cout << a[i] << " "; cout << endl;
    for(int i=0;i<10;i++)   cout << v[i] << " "; cout << endl;
	return 0;
}
