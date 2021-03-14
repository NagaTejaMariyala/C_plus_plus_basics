
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class employee
{
    char name[20];
    int age;

    public :

    void getinfo();
    void display();
};


void employee::getinfo()
{
    cout << "Enter name :";
    cin.getline(name,20);
    cout << "Enter age ";
    cin >> age;
    cin.ignore();
}

void employee::display()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}


int main()
{
    employee manager[5];

    for(int i=0;i<3;i++)
        manager[i].getinfo();
    for(int i=0;i<3;i++)
        manager[i].display();
}
