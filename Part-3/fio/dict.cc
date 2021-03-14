
#include<iostream>
#include<cstdlib>
#include<map>
#include<fstream>

using namespace std;

int main(int argc,char** argv)
{
    string word,meaning;
    int n;
    ifstream fin(argv[1]);
    if(argc!=2)
    {
        cerr << "Incorrect number of arguments\n";
        return 1;
    }

    if(!fin)
    {
        cerr << "File " << argv[1] << " not found \n";
        return -1;
    }

    map< string,string > dict;

    while(fin >> word && fin >> meaning)
        dict.insert(make_pair(word,meaning));

    ofstream fout(argv[1]);
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
                cout << (*p).first << "---" << (*p).second << endl;
                break;
            case 3:
                for(p = dict.begin();p!=dict.end();p++)
                    cout << (*p).first << "---" << (*p).second << endl;
                break;
            case 4:
                for(p = dict.begin();p!=dict.end();p++)
                    fout << (*p).first << "  " << (*p).second << endl;
                exit(1);
                break;
            default:
                cout << "\nInvalid input\n";
        }
    }
}
