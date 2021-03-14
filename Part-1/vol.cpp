


#include<iostream>

using std::endl;
using std::cin;
using std::cout;


float volume(float);
float volume(float,float);
float volume(float,float,float);

int main()
{
	cout << "Volume of cube of size 1.111 is : " << volume(1.111) << endl; 
	cout << "Volume of cylinder of radius 1.111 and length 1.11 is : " << volume(1.111,1.11) << endl; 
	cout << "Volume of cuboid of length 1.111, breadth 1.11 , width 1.1  is : " << volume(1.111,1.11,1.1) << endl; 
	return 0;
}
