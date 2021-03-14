
#include<iostream>
using namespace std;


class student
{
        int n;
    public:
        void get_n()
        {
            cout << "Enter Roll number : ";
            cin >> n;
        }

        void display_n()
        {
            cout << "Roll number : " << n << endl;
        }
};

class test
{
        float s1,s2;
    public:
        void get_marks()
        {
            cout << "Enter marks in 2 subjects : "; 
            cin >> s1 >> s2;
        }

        void display_marks()
        {
            cout << "Subject 1 : " <<  s1 << endl;
            cout << "Subject 2 : " <<  s2 << endl;
            cout << "Total marks: " << s1+s2 << endl;
        }
};

class result : private test , private student
{
    float total;
    public:

    void display()
    {
        get_n();
        get_marks();
        display_n();
        display_marks();
    }
};


int main()
{
    result s;

    s.display();
    
	return 0;
}
