
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
    ifstream fin(argv[1]);

    if(!fin)
    {
        cerr << "File " << argv[1] << " not found \n";
        return -1;
    }

    while(fin >> n)
        cout << n << endl;
	return 0;

}
