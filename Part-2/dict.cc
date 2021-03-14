
#include<iostream>
#include<cstdlib>
#include<map>

using namespace std;

int main()
{
    string word,meaning;
    int n;

    map< string,string > dict;

    dict.insert(make_pair("hi","hello"));
    dict.insert(make_pair("om","aum"));
    dict.insert(make_pair("good","nice"));
    dict.insert(make_pair("ubuntu","an operating system"));
    dict.insert(pair<string,string>("terminal","console"));

    map<string,string>::iterator p;
    for(p = dict.begin();p!=dict.end();p++)
        cout << (*p).first << "--" << (*p).second << endl;


    while(1)
    {
        cout << "\nChoose an action\n\t1.Insert\n\t2.Search\n\t3.Display\n\t4.Exit\n";
        cin >> n;
        switch(n)
        {
            case 1:
                cout << "Enter word : ";
                cin >> word;
                cout << "Enter meaning : ";
                cin >> meaning;
                dict.insert(make_pair(word,meaning));
                break;
            case 2:
                cout << "Enter word : ";
                cin >> word;
                p=dict.find(word);
                cout << (*p).first << "\t" << (*p).second << endl;
                break;
            case 3:
                for(p = dict.begin();p!=dict.end();p++)
                    cout << (*p).first << "--" << (*p).second << endl;
                break;
            case 4:
                exit(1);
                break;
            default:
                cout << "\nInvalid input\n";
        }
    }
}
