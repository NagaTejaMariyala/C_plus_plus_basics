
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char** argv)
{
    if(argc!=3)
    {
        cerr << "Incorrect number of arguments\n";
        return 1;
    }

    string s;
    ifstream fin(argv[1]);
    ofstream fout(argv[2]);

    if(!fin)
    {
        cerr << "File " << argv[1] << " not found \n";
        return -1;
    }

    while(getline(fin,s))
    {
        fout << s << endl;
    }
	return 0;

}
