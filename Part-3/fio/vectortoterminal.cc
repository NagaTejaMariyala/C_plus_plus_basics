
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
    ifstream fin(argv[1]);


    while(getline(fin,s))
        v.push_back(s);

    for(int i=0;i!=v.size();i++)
        cout << i+1 << " " << v[i] << "  "<< (v[i]).size() << "letters"<< endl;
	return 0;

}
