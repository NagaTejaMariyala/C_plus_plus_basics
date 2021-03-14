
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of nodes : ";
    cin >> n;

    int tree[n][4];

    for(int i;i<n;i++)
    {
        tree[i][0]=i;
        cout << "Enter data,left,right (in that order ) for index " << i+1 << endl;
        cin >>tree[i][1] >> tree[i][2] >> tree[i][3];
    }

    for(int i=0;i<4;i++)
    {
        cout << "\t";
        for(int j=0;j<n;j++)
            cout << tree[j][i] << "  ";
        cout << "\n";
    }
}
