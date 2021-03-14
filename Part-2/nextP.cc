
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word : ";
    cin >> s;

    bool val = next_permutation(s.begin(),s.end());

    if(val == false)
        cout << "No word possible" << endl;
    else
        cout << s << endl;

	return 0;
}
