
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
    ofstream fout(argv[1]);

    cout << "Enter integers : ";

    while(cin >> n)
    {
        getline(cin,s);
        fout << n << " " << s << endl;
    }
	return 0;

}
