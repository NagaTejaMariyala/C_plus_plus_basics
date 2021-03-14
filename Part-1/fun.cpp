
int factorial(int n)
{
	if(n<0) return 0;
	int f = 1;
	while(n>1)
	{
 	f*=n;
	n--;
	}
}

int perm(int n ,int r)
{

	int c = factorial(n)/(factorial(r)*factorial(n-r));
	return c;
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int max(int a,int b,int c)
{
	if(a>b&&a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}
