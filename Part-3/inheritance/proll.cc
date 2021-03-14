
#include<iostream>
using namespace std;


class student
{
    protected:
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

class test : private student
{
    protected:
        float s1,s2;
    public:
        void get_marks()
        {
            get_n();
            cout << "Enter marks in 2 subjects : "; 
            cin >> s1 >> s2;
        }

        void display_marks()
        {
            display_n();
            cout << "Subject 1 : " <<  s1 << endl;
            cout << "Subject 2 : " <<  s2 << endl;
        }
};

class result : private test
{
    float total;
    public:

    void display()
    {
        get_marks();
        total = s1 + s2;
        display_marks();
        cout << "Total marks: " << total << endl;
    }
};


int main()
{
    result s;

    s.display();
    
	return 0;
}
