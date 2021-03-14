
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of values : ";
    cin >> n;

    int v[n];

    cout << "Enter the values : ";
    for(int i=0;i<n;i++) 
        cin >> v[i];

    sort(v,&v[n-1]);
    
    bool val=true;

    while(val==true)
    {
        for(int j=0;j<n;j++)
            cout << v[j] << " ";
        val=next_permutation(v,&v[n]);
        cout << endl;
    }
	return 0;
}
