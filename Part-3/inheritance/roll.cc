
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

class test : public student
{
    protected:
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
        }
};

class result : public test
{
    float total;
    public:

    void display()
    {
        total = s1 + s2;
        cout << "Total marks: " << total << endl;
    }
};


int main()
{
    result s;

    s.get_n();
    s.get_marks();
    s.display_n();
    s.display_marks();
    s.display();
    
	return 0;
}
