
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char** argv)
{
    if(argc!=2)
    {
        cerr << "Incorrect number of arguments\n";
        return 1;
    }

    int n;
    ofstream fout(argv[1]);

    cout << "Enter integers : ";

    while(cin >> n)
        fout << n << endl;
	return 0;

}
