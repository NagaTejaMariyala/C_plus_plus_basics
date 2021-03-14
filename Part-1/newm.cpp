
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int **p;

    cout << "Enter the size of matrix : ";
    cin >> m >> n;


    p = new int*[m];

    for(int i=0;i<m;i++)
         p[i]=new int[n];

    cout << "Enter the elements of matrix : \n";
    int i,j,value;

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin >> p[i][j];


    cout << "The elements of the array are : \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout << p[i][j] << "  ";
        cout << endl;
    }

    cout << endl;
}
