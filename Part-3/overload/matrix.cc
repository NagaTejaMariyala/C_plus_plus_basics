
#include<iostream>
#include<cstdlib>
using namespace std;

class matrix
{
    int **p;
    int row,col;
    public:

    matrix operator *(matrix B)
    {
        matrix C;
        C.row=row;
        C.col=B.col;
        if(col!=B.row)
        {
            cout << "Can't Multiply \n";
            exit(1);
        }
        C.p = new int*[C.row];
        for(int i=0;i<C.row;i++)
            C.p[i] = new int[C.col];
        for(int i=0;i<row;i++)
            for(int j=0;j<B.col;j++)
                C.p[i][j]=0;
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                for(int k=0;k<B.col;k++)
                C.p[i][k]+=p[i][j]*B.p[j][k];
        return C;
    };
    friend istream & operator >>(istream &,matrix &);
    friend ostream & operator <<(ostream &,matrix &);
};

istream & operator >>(istream &in,matrix &A)
{
    cout << "Enter the no. of rows : ";
    in >> A.row;
    cout << "Enter the no. of columns : ";
    in >> A.col;
    cout << "Enter the matrix : \n";
    A.p = new int*[A.row];
    for(int i=0;i<A.row;i++)
        A.p[i] = new int[A.col];
    for(int i=0;i<A.row;i++)
        for(int j=0;j<A.col;j++)
            in >> A.p[i][j];
    return in;
}

ostream & operator <<(ostream &dout,matrix &A)
{
    int i,j;
    for(i=0;i<A.row;i++)
    {
        for(j=0;j<A.col;j++)
            dout << A.p[i][j] << "  ";
        dout << endl;
    }
    return dout;
}


int main()
{
    matrix A;
    cin >> A;
    cout << A;

    matrix B;
    cin >> B;
    cout << B;

    matrix C;
    C = A*B;
    cout << "The product matrix is : \n";
    cout << C;

}
