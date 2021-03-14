
#include<iostream>

using namespace std;

int main()
{
    string line,word;
    int count=0,pos=0;

    cout << "Enter a line : \n";
    getline(cin,line);

    cout << "Enter a word : \n";
    cin >> word;

    while(line.find(word,pos)!=string::npos)
    {
        count++;
        pos=line.find(word,pos)+word.length();   
    }

    cout << "The word has occuered " << count << " times in the line\n";

	return 0;
}
