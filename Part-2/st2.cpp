
#include<iostream>

using namespace std;

int main()
{
    string s1,s5,s6,s7;
    string s2 = "sai ram ";
    string s3("Krishna ");
    string s4(s3);
    s1 = s2;
    cout << s1 << "   " << s2 << endl;
    cout << s3 << "   " << s4 << endl;

    s5 = s2 + s3;
    s6 = "Om sri "  + s2;
    s7 = "Hare Rama " + s2 + "Hare Krishna ";
    s4 = s2 + "Hare Rama " + "Hare Krishna ";
//    s1 = "Hare Rama " + "Hare Krishna " + s2;
//    s8 = "Hare Rama " + "Hare Krishna ";

    cout << s5 << "  " << s6 << endl;
    cout << s7 << endl;
    cout << s4 << endl;
//    cout << s8 << endl;
}
