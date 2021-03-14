
#include<iostream>
#include<cstring>
using namespace std;

class str
{
    char p[10];
    int len;
    public:

    str(){}
    str(char *s)
    {
        strcpy(p,s);
        len=strlen(s);
    }
    friend str operator +(str s,str t);
    friend int operator <=(str s,str t);
    friend void show(str s);
};

void show(str s)
{
    cout << s.p;
}

str operator +(str s,str t)
{
    str r;
    strcat(s.p,t.p);
    strcpy(r.p,s.p);
    r.len=s.len+t.len;
    return r;
}

int operator <=(str s,str t)
{
    if(strcmp(s.p,t.p)<=0)
        return 1;
    return 0;
}

int main()
{
    str s1 = "Om sri";
    str s2 = " Sai";
    str s3 = " Ram";

    str t1,t2,t3;
    t1=s1;
    t2=s2;
    t3=s1+s3;

    show(t1);
    cout << endl;
    show(t2);
    cout << endl;
    show(t3);
    cout << endl;

    if(t1<=t3)
    {
        show(t1); cout << " smaller than ";  show(t3);
    }
    else
    {
        show(t3); cout << " smaller than ";  show(t1);
    }
}
