
#include<iostream>
using namespace std;

int main()
{
    int temp,i;

    int *array = new int[5];

    for(i=0;i<5;i++)
        cin >> array[i];

    cout << "The elements of the array are : \n";
    for(i=0;i<5;i++)
        cout << array[i] << endl;

    delete [] array;
    cout << endl;
}
