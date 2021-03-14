
#include<iostream>
#include<map>

using namespace std;

int main()
{
    string s;
    int no;
    map< string,int > wc;


    while(cin >> s)
        wc[s]++;


    cout << endl;
    map<string,int>::iterator p;
    for(p = wc.begin();p!=wc.end();p++)
        cout << "The word "<< (*p).first << " occurs " << (*p).second << " times." << endl;

	return 0;
}
