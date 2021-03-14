
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(int argc,char** argv)
{
    if(argc!=2)
    {
        cerr << "Incorrect number of arguments\n";
        return 1;
    }

    string s;
    vector<string> v;
    ofstream fout(argv[1]);


    while(getline(cin,s))
        v.push_back(s);

    for(int i=0;i!=v.size();i++)
        fout << i+1 << " " << v[i] << endl;
	return 0;

}
