
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> v;
    vector<string>::iterator it;
    string s;

    time_t tbegin,tend;

    tbegin = time(NULL);

    while(cin >> s)
    {
        v.push_back(s);
    }

    tend = time(NULL);

    cout << "The time taken for input is  " << difftime(tend,tbegin) << " seconds.\n";

    for(it=v.begin();it!=v.end();it++)
        cout << *it << endl;

    
	return 0;
}
