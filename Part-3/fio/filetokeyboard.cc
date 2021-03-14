
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
    string s;
    ifstream fin(argv[1]);

    if(!fin)
    {
        cerr << "File " << argv[1] << " not found \n";
        return -1;
    }



    while(fin >> n)
    {
        getline(fin,s);
        cout << n << " " << s << endl;
    }
	return 0;

}
