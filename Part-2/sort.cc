
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    vector<string> v1,v2;

    v1.push_back("japan");
    v1.push_back("italy");
    v1.push_back("spain");
    v1.push_back("egypt");
    v1.push_back("chile");
    v1.push_back("zaire");
    v1.push_back("nepal");
    v1.push_back("kenya");
    v1.push_back("india");
    v1.push_back("china");
    v1.push_back("malta");
    v1.push_back("syria");

    v2=v1;

    vector<string>::iterator i;
    cout << "\nBefore sort\n";
    for(i=v1.begin();i!=v1.end();i++)  cout << *i << endl;
    cout << endl;

    sort(v1.begin(),v1.end());

    cout << "\nFull sort\n";
    for(i=v1.begin();i!=v1.end();i++)  cout << *i << endl;
    cout << endl;

    vector<string>::iterator i1,i2;
    i1 = find(v2.begin(),v2.end(),"egypt");
    i2 = find(v2.begin(),v2.end(),"malta");

    sort(i1,i2);

    cout << "\nPartial sort\n";
    for(i=v2.begin();i!=v2.end();i++)  cout << *i << endl;
    cout << endl;

	return 0;
}
