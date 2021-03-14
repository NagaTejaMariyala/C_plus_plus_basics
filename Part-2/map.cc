#include<iostream>
#include<map>

using namespace std;

int main()
{
    string name;
    int number;
    map< string,int > phone;

    phone.insert(pair<string,int>("Hari",1111));
    phone.insert(pair<string,int>("Sathya",2222));
    phone.insert(pair<string,int>("Sai",3333));
    phone.insert(pair<string,int>("Ram",4444));

    phone.insert(make_pair("Hare",5555));
    phone.insert(make_pair("Rama",6666));
    phone.insert(make_pair("Hare",7777));
    phone.insert(make_pair("Krishna",8888));

    phone["Csk"] = 9999;
    cout << "Map size: " << phone.size() << endl;

    map<string,int>::iterator p;
    for(p = phone.begin();p!=phone.end();p++)
        cout << (*p).first << "\t" << (*p).second << endl;

    cout << "Enter name to search in phone directory: ";
    cin >> name;
    cout << "Number: " << phone[name] << endl;

    cout << "\nAfter Searching: " << endl;
    for(p = phone.begin();p!=phone.end();p++)
        cout << (*p).first << "\t" << (*p).second << endl;
	return 0;
}
