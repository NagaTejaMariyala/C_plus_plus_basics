#include<iostream>
#include<map>

using namespace std;

int main()
{
    string name;
    int number;
    typedef map< string,int > phonebook;
    phonebook phone;

    phone.insert(pair<string,int>("Hari",1111));
    phone.insert(pair<string,int>("Sathya",2222));
    phone.insert(pair<string,int>("Sai",3333));
    phone.insert(pair<string,int>("Ram",4444));
    phone["Csk"] = 9999;

    map<string,int>::iterator p,it;
    for(p = phone.begin();p!=phone.end();p++)
        cout << (*p).first << "\t" << (*p).second << endl;

    cout << "Enter name to search in phone directory: ";
    cin >> name;

    it=phone.find(name);
    if(it==phone.end())
        cout << "Name not found " << endl;
    else
    {
        cout << "Name: " << it->first <<endl;
        cout << "Number: " << it->second <<endl;
    }

    cout << "\nAfter Searching: " << endl;
    for(p = phone.begin();p!=phone.end();p++)
        cout << (*p).first << "\t" << (*p).second << endl;
	return 0;
}
