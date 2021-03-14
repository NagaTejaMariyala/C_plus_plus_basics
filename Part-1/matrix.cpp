
#include<iostream>
#include<cstdlib>

using std::cin;
using std::cout;
using std::endl;

class matrix
{
    int p[10][10];
    int row,col;
    public :

    void getdata(int i,int j);
    void display();
    void multi(matrix a,matrix b);
};

void matrix::getdata(int m,int n)
{
    row=m;
    col=n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> p[i][j];
}

void matrix::display()
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout << p[i][j] << "  ";
        cout << endl;
    }
    return;
}
void matrix::multi(matrix A,matrix B)
{
    row = A.row;
    col = B.col;
    if(A.col!=B.row)
    {
        cout << "Can't Multiply \n";
        exit(1);
    }
    for(int i=0;i<A.row;i++)
        for(int j=0;j<B.col;j++)
            p[i][j]=0;
    for(int i=0;i<A.row;i++)
        for(int j=0;j<A.col;j++)
            for(int k=0;k<B.col;k++)
                p[i][k]+=A.p[i][j]*B.p[j][k];
    return;
}
int main()
{

    matrix A,B,C;
    int m,n;

    cout << "Enter the size of matrix A : ";
    cin >> m >> n;

    cout << "Enter the elements matrix A : ";
    A.getdata(m,n);
    A.display();


    cout << "Enter the size of matrix B : ";
    cin >> m >> n;

    cout << "Enter the elements matrix B : ";
    B.getdata(m,n);
    B.display();

    cout << "\nThe product matrix is \n"; 
    C.multi(A,B);
    C.display();

	return 0;
}
