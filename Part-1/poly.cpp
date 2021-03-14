

#include<iostream>

using namespace std;

float poly(float,float,float = 0,float = 0, float= 0);
float poly(float x,float a0,float a1,float a2, float= a3)
{
	return a0+(a1+(a2+a3*x)*x)*x;
}
