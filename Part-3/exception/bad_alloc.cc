
#include<iostream>
#include<cstdlib>
using namespace std;

void handler()
{
    cerr << "Custom New Handler was called :    ";
    abort();
}

int main()
{
    double *ptr[5000];
    set_new_handler(handler);

    for( int i=0; i<5000; i++ )
    {
        ptr[i] = new double[20000000000];
        cout << "Allocated 20000000000 doubles in ptr [ " << i << " ]\n";
    }
}
