
#include<iostream>
using namespace std;

class shape
{
    public:
        virtual void print(){}
        virtual void area(){}
};

class twoD : base shape
{
    public:
        virtual void perimeter(){}
}

class threeD : base shape
{
    public:
        virtual void volume(){}
}

class Rtriangle : base twoD
{
    float base;
    float height,Rperinmeter,Rarea;
    public:
    void perimeter(){Rperimeter=base+height+sqrt(base*base+height*height);}
    void area(){Rarea = 0.5*base*height;}
    void print()
    {
        cout << "\n\tRight angled triangle ";
        cout << "\n\tPerimeter :  " << Rperimeter;
        cout << "\n\tArea :  " << Rarea;
        cout << "\n\n" ;
    }
}

class circle : base twoD
{
    float radius;
    float Cperimeter,Carea
    public:
    void perimeter(){Cperimeter = 2*3.141*radius;}
    void area(){Carea = 3.141*radius*radius;}
    void print()
    {
        cout << "\n\tCircle ";
        cout << "\n\tPerimeter :  " << Cperimeter;
        cout << "\n\tArea :  " << Carea;
        cout << "\n\n" ;
    }
}

class cone : base threeD
{
    float radius;
    float height,carea,Cvolume;
    public:
    void volume(){Cvolume = .33333*3.141*(radius*radius*height) << endl;}
    void area(){carea = 3.141*radius*(radius+sqrt(radius*radius+height*height));}
    void print()
    {
        cout << "\n\tCone ";
        cout << "\n\tVolume :  " << Cvolume;
        cout << "\n\tArea :  " << carea;
        cout << "\n\n" ;
    }
}

class box : base threeD
{
    float length;
    float width;
    float height,Bvolume,Barea;
    public:
    void volume(){Bvolume = (length*width*height);}
    void area(){Barea = 2(length*width+width*height+length*height);}
    void print()
    {
        cout << "\n\tBox ";
        cout << "\n\tVolume :  " << Bvolume;
        cout << "\n\tArea :  " << Barea;
        cout << "\n\n" ;
    }
}

int main()
{
    Rtriangle r;
    circle c;
    cone k;
    box b;

    shape *s[4];


}
