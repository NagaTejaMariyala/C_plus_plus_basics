
#include<iostream>
#include<bitset>
using namespace std;

int fibgen(int i)
{
    int j=1,k=1,t;
    if(i==1|i==2)
        return 1;
    for(;i>2;i--)
    {
        t=j;
        j=k;
        k+=t;
    }
    return k;
}


int main()
{
    bitset<32> bv1,bv2,bv;

    for(int i=2;i<=8;i++)
        bv1.set(fibgen(i));

    cout << "Bitvector1 : " << bv1 << endl;

    bv2=bv2|bv1;
    cout << "Bitvector2 : " << bv2 << endl;

    for(int i=1,j=1;i<=32;i+=j,j=i-j)
        bv.set(i);

    cout << "Bitvector : " << bv << endl;
}
